message("${_build_cmake_local}")
include("${_build_cmake_local}")

add_library(PiSubmarine.GPIO.Api.Mock INTERFACE)
target_include_directories(PiSubmarine.GPIO.Api.Mock INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}")
PiSubmarineInitTarget(PiSubmarine.GPIO.Api.Mock)