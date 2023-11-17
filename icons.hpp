#ifndef ICONS_HPP
#define ICONS_HPP

#include <inttypes.h>

#include <iostream>
using std::cin;
using std::cout;


#define MAX_ARRAY_SIZE 2048

class Icons
{

public:

    Icons();

    void set_ID(uint8_t ID);
    void set_position(uint8_t x, uint8_t y);
    void draw(void);
    void select(void);
    void deselect(void);



private:

    uint8_t ID;

    uint8_t x_pos;
    uint8_t y_pos;


};


#endif