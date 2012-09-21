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

TEST(AQueueTest, Size) {
    AQueue *a = new AQueue();
    EXPECT_EQ(0, a->size());

    for (int i = 0; i < 10; ++i) {
        a->enqueue(i);
        EXPECT_EQ(i+1, a->size());
    }

    for (int i = 10; i > 0; --i) {
        a->dequeue();
        EXPECT_EQ(i-1, a->size());
    }
}

TEST(AQueueTest, IsEmpty) {
    AQueue *a = new AQueue();
    EXPECT_EQ(true, a->isEmpty());

    a->enqueue(1);
    EXPECT_EQ(false, a->isEmpty());

    a->dequeue();
    EXPECT_EQ(true, a->isEmpty());
}
