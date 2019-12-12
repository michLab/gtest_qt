#include "swarmitem.h"
#include <gtest/gtest.h>

SwarmItem::SwarmItem()
{
    n = 0;
    name = "";
}

SwarmItem::~SwarmItem()
{

}

bool SwarmItem::set_n(uint8_t arg_n)
{
    n = arg_n;
    return true;
}

uint8_t SwarmItem::get_n() const
{
    return n;
}

bool SwarmItem::set_name(std::string arg_name)
{
    name = arg_name;
    return true;
}

std::string SwarmItem::get_name() const
{
    return name;
}

std::ostream &operator<<(std::ostream &os, const SwarmItem &t)
{
    os << "SwarmItem: name: " << t.name << ", n: " << static_cast<int>(t.n) << "\n";
    return os;
}



