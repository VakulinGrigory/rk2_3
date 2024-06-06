#include <gtest/gtest.h>
#include "map.cpp"

// Test case 1: Test the initialization of the MapTileProxy object
TEST(MapTileProxyTest, InitializationTest) {
    MapTileProxy mapTile(10, 20, 30, 40);

    ASSERT_EQ(mapTile.CenterX(), 10);
    ASSERT_EQ(mapTile.CenterY(), 20);
    ASSERT_EQ(mapTile.Width(), 30);
    ASSERT_EQ(mapTile.Height(), 40);
}

// Test case 2: Test the Draw function of MapTileProxy
TEST(MapTileProxyTest, DrawTest) {
    MapTileProxy mapTile(10, 20, 30, 40);
    testing::internal::CaptureStdout(); // Redirect cout

    mapTile.Draw();

    std::string output = testing::internal::GetCapturedStdout(); // Get cout
    ASSERT_FALSE(output.empty());
    // Add more assertions to check the correctness of the output
}

// Test case 3: Test the behavior of MapTileProxy with negative values
TEST(MapTileProxyTest, NegativeValuesTest) {
    MapTileProxy mapTile(-10, -20, -30, -40);

    ASSERT_EQ(mapTile.CenterX(), -10);
    ASSERT_EQ(mapTile.CenterY(), -20);
    ASSERT_EQ(mapTile.Width(), -30);
    ASSERT_EQ(mapTile.Height(), -40);
}

