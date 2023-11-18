#ifndef SCREEN_HPP
#define SCREEN_HPP

#include "icons.hpp"

class Screen
{
public:

    Screen();

    void set_boundary_icon_IDs(icon_name thisID, icon_name rightID, icon_name leftID, icon_name upID, icon_name downID);

    void set_position(icon_name iconID, uint8_t x, uint8_t y);

    void select_right();
    void select_left();
    void select_up();
    void select_down();
    void draw(); // draw all icons


private:

    void setup(void); // Called by constructor

    Icons icons[QUANT_ICON];

    icon_name Selected_icon_ID = logo;

};


#endif