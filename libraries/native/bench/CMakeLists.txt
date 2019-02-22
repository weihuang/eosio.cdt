project(native LANGUAGES CXX ASM)

if (NOT __APPLE)
   set(CRT_ASM elf_crt.s)
else()
   set(CRT_ASM macho_crt.s)
endif()

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-everything -allow-sse")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-everything -allow-sse")

file(GLOB HEADERS "*.hpp"
                  "*.h")

#add_library(benchmark bench.cpp ${HEADERS})

add_native_library (
   benchmark
   STATIC
   bench.cpp
   intrinsics.cpp
   crt.cpp
   ${HEADERS}
   )

target_include_directories(eosio PUBLIC
                                 ${CMAKE_SOURCE_DIR}/libc/musl/include
                                 ${CMAKE_SOURCE_DIR}/libc/musl/src/internal
                                 ${CMAKE_SOURCE_DIR}/libc/musl/src/crypt
                                 ${CMAKE_SOURCE_DIR}/libc/musl/arch/eos
                                 ${CMAKE_SOURCE_DIR}/libcxx/include
                                 ${CMAKE_SOURCE_DIR}
                                 ${CMAKE_SOURCE_DIR}/boost/include
				 ${CMAKE_SOURCE_DIR}/bench
				 ${CMAKE_SOURCE_DIR}/core)

add_custom_command( TARGET
                    benchmark
		    POST_BUILD
		    COMMAND
		    ${CMAKE_COMMAND}
		    -E
		    copy
		    $<TARGET_FILE:benchmark>
		    ${BASE_BINARY_DIR}/lib )
