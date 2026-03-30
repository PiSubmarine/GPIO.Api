message("${_build_cmake_local}")
include("${_build_cmake_local}")

add_library(PiSubmarine.GPIO.Api.Mock INTERFACE
        PiSubmarine/GPIO/Api/IDriverMock.h
        PiSubmarine/GPIO/Api/IPinGroupMock.h
)
target_include_directories(PiSubmarine.GPIO.Api.Mock INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}")
PiSubmarineInitTarget(PiSubmarine.GPIO.Api.Mock)

find_package(GTest)
target_link_libraries(PiSubmarine.GPIO.Api.Mock INTERFACE GTest::gtest_main GTest::gmock_main)