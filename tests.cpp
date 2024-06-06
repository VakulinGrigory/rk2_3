#include <gtest/gtest.h>
#include "map.cpp"

TEST(MapTileProxyTest, InitializationTest) {
    MapTileProxy mapTile(10, 20, 30, 40);

    ASSERT_EQ(mapTile.CenterX(), 10);
    ASSERT_EQ(mapTile.CenterY(), 20);
}

TEST(MapTileProxyTest, InitializationTest) {
    MapTileProxy mapTile(10, 20, 30, 40);

    ASSERT_EQ(mapTile.Width(), 30);
    ASSERT_EQ(mapTile.Height(), 40);
}

TEST(MapTileProxyTest, NegativeValuesTest) {
    MapTileProxy mapTile(-10, -20, -30, -40);

    ASSERT_EQ(mapTile.CenterX(), -10);
    ASSERT_EQ(mapTile.CenterY(), -20);
    ASSERT_EQ(mapTile.Width(), -30);
    ASSERT_EQ(mapTile.Height(), -40);
}

