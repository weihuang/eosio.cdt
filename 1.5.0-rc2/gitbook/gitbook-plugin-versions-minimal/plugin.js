require(['gitbook', 'jQuery'], function (gitbook, $) {

  console.log('Running local copy')

  var current;
  var pluginConfig = {};
  var versions;
  var conf;

  // Update the select with a list of versions
  function updateVersions() {

    if(!versions)
      return

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
      var $option = $('<option>', {
        'selected': window.location.href.indexOf(version.value) !== -1,
        'value': version.value,
        'text': version.value
      });
      $option.appendTo($select);
    });

    $select.change(function() {
      var version;
      $( "option:selected", this ).each(function() {
       version = $( this ).text()
     });

      window.location.href = `${conf["custom-header-next"].base_path}/${version}`
    });

    $li.prependTo('.book-summary ul.summary');
  }

  gitbook.events.bind('start', function (e, config) {
    conf = config
    var vc = config["versions-minimal"] || {};
    if(vc && vc.json)
      $.getJSON(vc.json, function(_versions){
        versions = _versions
        updateVersions()
      });
  });

  gitbook.events.bind('page.change', function () {
    updateVersions();
  });
});
