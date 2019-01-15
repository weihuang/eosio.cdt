require(['gitbook', 'jQuery'], function (gitbook, $) {

  console.log('Running local copy')

  var current;
  var pluginConfig = {};

  // Update the select with a list of versions
  function updateVersions(versions) {

   console.log(versions)
    current = $('.versions-minimal select').val() || current;

    // Cleanup existing selector
    $('.versions-minimal').remove();

    if (typeof versions === "null") return;

    var $li = $('<li>', {
      'class': 'versions-minimal',
      'html': '<div><select></select></div>'
    });
    var $select = $li.find('select');

    $.each(versions.versions, function(i, version) {
      console.log(version);
      var $option = $('<option>', {
        'selected': window.location.href.indexOf(version.value) !== -1,
        'value': version.value,
        'text': version.value
      });
      $option.appendTo($select);
    });

    $select.change(function() {
      var filtered = $.grep(versions, function(v) {
        return v.value === $select.val();
      });
      // Get actual version Object from array
      var version = filtered[0];

      var filePath = window.location.href.replace(gitbook.state.bookRoot, '');
      window.location.href = version.includeFilepath ? (version.value + filePath) : version.value;
    });

    $li.prependTo('.book-summary ul.summary');
  }

  gitbook.events.bind('start', function (e, config) {
    versions = config["versions-minimal"] || {};
    console.log(config);
    console.log(versions)
    $.getJSON(versions.gitbookConfigURL, updateVersions);
  });

  gitbook.events.bind('page.change', function () {
    updateVersions();
  });
});
