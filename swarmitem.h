#ifndef SWARMITEM_H_
#define SWARMITEM_H_

#include <cstdint>
#include <iostream>
#include <ostream>

class SwarmItem
{
    public:
    SwarmItem();
    ~SwarmItem();

    bool set_n(uint8_t arg_n);
    uint8_t get_n() const;

    bool set_name(std::string arg_name);
    std::string get_name() const;

    friend std::ostream &operator<<(std::ostream &os, const SwarmItem &t);

    private:
    uint8_t n;
    std::string name;

};

#endif
