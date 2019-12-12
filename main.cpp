#include <iostream>
#include "swarmitem.h"
#include <gtest/gtest.h>

#define RUN_TESTS

int main(int argc, char** argv) {
#ifndef RUN_TESTS
    SwarmItem swarm_item;
    swarm_item.set_n(1);
    swarm_item.set_name("dzban");
    std::cout << swarm_item;
    std::cout << swarm_item.get_n() << std::endl;
    return 0;
#else
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
#endif

}
