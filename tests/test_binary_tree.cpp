#include <gtest/gtest.h>
#include "BinaryTree.h"

TEST(BinaryTreeTest, PushPopSearchInterface) {
    BinaryTree tree;
    EXPECT_NO_THROW(tree.push(5));
    EXPECT_NO_THROW(tree.pop());
    EXPECT_NO_THROW(tree.search(5));
}