#include "/Users/becca/Desktop/gtest/googletest-read-only/xcode/Build/Debug/gtest.framework/Headers/gtest.h"
#include "functions.h"

// my first fancy addition test
TEST (Pay, Total_owed)
{
    // equal to 20
    EXPECT_EQ(total_owed(0), 0);

    // not equal to 20
    EXPECT_NE(total_owed(0), 5);
}

int main(int argc, char * argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
