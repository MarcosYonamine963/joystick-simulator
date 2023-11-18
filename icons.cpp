#include "icons.hpp"



/* Constructor */
Icons::Icons()
{

}


void Icons::set_ID(icon_name newID)
{
    ID = newID;
}

void Icons::set_position(uint8_t x, uint8_t y)
{
    x_pos = x;
    y_pos = y;
}


void Icons::draw(void)
{

    cout << "Drawing Icon " << ID << "\n";

    /*
        Place here the func to draw icon
    */

    return;

}

void Icons::select(void)
{
    cout << "Selected Icon " << ID << "\n";

    /*
        Change array to selected, and draw the Icon
    
    */
   draw();
}


void Icons::deselect(void)
{
    cout << "Deselect Icon " << ID <<"\n";

    /*
        Change array to default and draw the Icon
    
    */
   draw();
}

void Icons::set_boundary_icon_IDs(icon_name rightID, icon_name leftID, icon_name upID, icon_name downID)
{
    Icons::set_right_icon_ID(rightID);
    Icons::set_left_icon_ID(leftID);
    Icons::set_up_icon_ID(upID);
    Icons::set_down_icon_ID(downID);
}


icon_name Icons::get_right_ID(void)
{
    return Icons::right_ID;
}

icon_name Icons::get_left_ID(void)
{
    return Icons::left_ID;
}

icon_name Icons::get_up_ID(void)
{
    return Icons::up_ID;
}

icon_name Icons::get_down_ID(void)
{
    return Icons::down_ID;
}



void Icons::set_right_icon_ID(icon_name ID)
{
    Icons::right_ID = ID;
}

void Icons::set_left_icon_ID(icon_name ID)
{
    Icons::left_ID = ID;
}

void Icons::set_up_icon_ID(icon_name ID)
{
    Icons::up_ID = ID;
}

void Icons::set_down_icon_ID(icon_name ID)
{
    Icons::down_ID = ID;
}