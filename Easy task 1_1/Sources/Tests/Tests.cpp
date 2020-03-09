#include <gtest/gtest.h>
#include "../Queue.h"


TEST(Easy_1_1, sizeQueue)
{
    auto a = Queue();
    ASSERT_EQ(a.Size(), 30);
    auto c = Queue(50);
    ASSERT_EQ(c.Size(), 50);
    ASSERT_EQ(a.ContainedNumber(), 0);
    c.Push("fghj");
    ASSERT_EQ(c.ContainedNumber(), 1);
    ASSERT_EQ(std::string("fghj"), *c.Back());
    c.Push("vghn");
    ASSERT_EQ(c.ContainedNumber(), 2);
    c.Pop();
    ASSERT_EQ(c.ContainedNumber(), 1);
    ASSERT_EQ(std::string("vghn"), *c.Back());
    for (int i = 0; i < c.Size(); ++i) {
        try {
            c.Push(std::string("dgh"));
                    }
        catch (std::exception a) {
            ASSERT_EQ(std::string(a.what()), std::string("Queue overflow"));
                     }
            }
    ASSERT_EQ(c.Size(), 50);
}

int main()
{
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}