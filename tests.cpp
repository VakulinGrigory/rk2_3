#include <gtest/gtest.h>
#include "map.cpp"

// Test case 1: Test the initialization of the Map object
TEST(MapTest, InitializationTest) {
    Map map(0, 0, 60, 90, 2, 2);

    // Check the width and height of the Map object
    ASSERT_EQ(map.GetTileWidth(), 60);
    ASSERT_EQ(map.GetTileHeight(), 90);

    // Check the number of tiles in X and Y directions
    ASSERT_EQ(map.GetNumTilesX(), 2);
    ASSERT_EQ(map.GetNumTilesY(), 2);
}

// Test case 2: Test the Print function when draw parameter is false
TEST(MapTest, PrintWithoutDrawTest) {
    Map map(0, 0, 60, 90, 2, 2);
    testing::internal::CaptureStdout(); // Redirect cout

    map.Print(false);

    std::string output = testing::internal::GetCapturedStdout(); // Get cout
    ASSERT_FALSE(output.empty());
    // Add more assertions to check the correctness of the output
}

// Test case 3: Test the Print function when draw parameter is true
TEST(MapTest, PrintWithDrawTest) {
    Map map(0, 0, 60, 90, 2, 2);
    testing::internal::CaptureStdout(); // Redirect cout

    map.Print(true);

    std::string output = testing::internal::GetCapturedStdout(); // Get cout
    ASSERT_FALSE(output.empty());
    // Add more assertions to check the correctness of the output
}

