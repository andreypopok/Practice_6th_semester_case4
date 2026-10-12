#include <gtest/gtest.h>
#include "Heap.h"

TEST(HeapTest, PushPopInterface) {
    Heap h;
    EXPECT_NO_THROW(h.push(10));
    EXPECT_NO_THROW(h.pop());
}