#include "swarmitem.h"
#include <gtest/gtest.h>

TEST(SwarmItemTest, InitializeSwarmItemObject)
{
    SwarmItem s;
    EXPECT_EQ(0, s.get_n());
    EXPECT_EQ("", s.get_name());
}

TEST(SwarmItemTest, SetN)
{
    SwarmItem s;
    uint8_t ref = 4;
    s.set_n(ref);
    EXPECT_EQ(ref, s.get_n());
}

TEST(SwarmItemTest, SetName)
{
    SwarmItem s;
    std::string ref = "Dzban";
    s.set_name(ref);
    EXPECT_EQ(ref, s.get_name());
}
