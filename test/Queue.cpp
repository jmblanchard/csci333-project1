#include "gtest/gtest.h"
#include "../src/AQueue/AQueue.h"

TEST(AQueueTest, Enqueue) {
    AQueue *a = new AQueue(5);
    for (int i = 0; i < 25; ++i) {
        a->enqueue(i);
        EXPECT_EQ(i+1, a->size());
    }

    delete a;
}

TEST(AQueueTest, Dequeue) {
    AQueue *a = new AQueue(5);
    int i = 0;

    for (i = 0; i < 25; ++i) {
        a->enqueue(i);
    }

    for (i = 0; i < 25; ++i) {
        EXPECT_EQ(i, a->dequeue());
        EXPECT_EQ(24-i, a->size());
    }
}
