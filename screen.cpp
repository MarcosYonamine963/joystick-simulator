#include "screen.hpp"

/* Constructor */
Screen::Screen()
{
    setup();
}

/* Set the IDs for the icons */
void Screen::setup(void)
{
    for(int i = 0; i < QUANT_ICON; i++)
    {
        Screen::icons[i].set_ID((icon_name)i);
    }
}

void Screen::draw(void)
{
    for(int i = 0; i < QUANT_ICON; i++)
    {
        Screen::icons[i].draw();
    }

    Screen::icons[Selected_icon_ID].select();
}



/* Configure the boundary for one icon */
void Screen::set_boundary_icon_IDs(icon_name thisID, icon_name rightID, icon_name leftID, icon_name upID, icon_name downID)
{
    Screen::icons[thisID].set_boundary_icon_IDs(rightID, leftID, upID, downID);
}


void Screen::select_right()
{
    Screen::icons[Selected_icon_ID].deselect();
    Screen::Selected_icon_ID = Screen::icons[Selected_icon_ID].get_right_ID();
    Screen::icons[Selected_icon_ID].select();
}


void Screen::select_left()
{
    Screen::icons[Selected_icon_ID].deselect();
    Screen::Selected_icon_ID = Screen::icons[Selected_icon_ID].get_left_ID();
    Screen::icons[Selected_icon_ID].select();
}

void Screen::select_up()
{
    Screen::icons[Selected_icon_ID].deselect();
    Screen::Selected_icon_ID = Screen::icons[Selected_icon_ID].get_up_ID();
    Screen::icons[Selected_icon_ID].select();
}

void Screen::select_down()
{
    Screen::icons[Selected_icon_ID].deselect();
    Screen::Selected_icon_ID = Screen::icons[Selected_icon_ID].get_down_ID();
    Screen::icons[Selected_icon_ID].select();
}
