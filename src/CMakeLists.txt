message("${_build_cmake_local}")
include("${_build_cmake_local}")

add_library(PiSubmarine.GPIO.Api INTERFACE)
target_include_directories(PiSubmarine.GPIO.Api INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/../public")
PiSubmarineInitTarget(PiSubmarine.GPIO.Api)