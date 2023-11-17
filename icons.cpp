#include "icons.hpp"


void Icons::set_ID(uint8_t newID)
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
    cout <<"Drawing Icon "<< ID << "\n";

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
    cout << "Deselect Icon " << ID << "\n";

    /*
        Change array to default and draw the Icon
    
    */
   draw();
}

