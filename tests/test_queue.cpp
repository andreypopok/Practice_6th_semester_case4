#include <gtest/gtest.h>
#include "Queue.h"

TEST(QueueTest, PushPopInterface) {
    Queue q;
    EXPECT_NO_THROW(q.push(42));
    EXPECT_NO_THROW(q.pop());
}