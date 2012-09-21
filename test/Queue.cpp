#include "gtest/gtest.h"
#include "../src/AQueue/AQueue.h"

TEST(AQueueTest, Enqueue) {
    AQueue *a = new AQueue(5);
    a->enqueue(1);

    delete a;
}
