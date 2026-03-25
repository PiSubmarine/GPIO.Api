cmake_minimum_required(VERSION 3.20)

include(FetchContent)

project(PiSubmarine.GPIO.Api.Test LANGUAGES CXX)

set(PiSubmarine.GPIO.Api.Test.Sources
        "PiSubmarine/GPIO/Api/IDriverTest.cpp"
        "PiSubmarine/GPIO/Api/DirectionsTest.cpp"
)

enable_testing()

add_executable(PiSubmarine.GPIO.Api.Test ${PiSubmarine.GPIO.Api.Test.Sources})
PiSubmarineInitTarget(PiSubmarine.GPIO.Api.Test)

target_link_libraries(PiSubmarine.GPIO.Api.Test PRIVATE PiSubmarine.GPIO.Api)

find_package(GTest)
target_link_libraries(PiSubmarine.GPIO.Api.Test PRIVATE GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(PiSubmarine.GPIO.Api.Test)