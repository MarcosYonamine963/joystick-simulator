#ifndef ICONS_HPP
#define ICONS_HPP

#include <inttypes.h>

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>


#define QUANT_ICON (9)

/* All icons here */
enum icon_name
{
    logo = 0,
    all_sect,
    sect_1,
    sect_2,
    sect_3,
    clear,
    settings,
    increment,
    decrement
};



class Icons
{

public:

    Icons();

    void set_ID(icon_name ID);
    void set_position(uint8_t x, uint8_t y);
    void draw(void);
    void select(void);
    void deselect(void);
    void set_boundary_icon_IDs(icon_name rightID, icon_name leftID, icon_name upID, icon_name downID);

    icon_name get_right_ID(void);
    icon_name get_left_ID(void);
    icon_name get_up_ID(void);
    icon_name get_down_ID(void);

private:


    void set_right_icon_ID(icon_name ID);
    void set_left_icon_ID(icon_name ID);
    void set_up_icon_ID(icon_name ID);
    void set_down_icon_ID(icon_name ID);

    icon_name ID;

    icon_name right_ID;
    icon_name left_ID;
    icon_name up_ID;
    icon_name down_ID;

    uint8_t *bitmap_to_draw;

    uint8_t *bitmap_default;
    uint8_t *bitmap_selected;


    uint8_t x_pos;
    uint8_t y_pos;


};


#endif