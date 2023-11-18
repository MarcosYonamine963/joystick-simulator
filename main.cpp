/*
    Joystick simulator to control the selection of Icons inside a menu.

    Created by: Marcos Yonamine
    Nov. 2023
    Rev: 0.0.0

    Obs: To compile run this command on linux terminal:

        g++ -o main main.cpp joystick.cpp icons.cpp screen.cpp 
    than, to execute the program:

        ./main

*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "joystick.hpp"
#include "icons.hpp"
#include "screen.hpp"

Screen my_screen1;


void setup_screens(void)
{
    my_screen1.set_boundary_icon_IDs(logo, clear, settings, sect_3, all_sect);
    my_screen1.set_boundary_icon_IDs(all_sect, clear, settings, logo, sect_1);
    my_screen1.set_boundary_icon_IDs(sect_1, clear, settings, all_sect, sect_2);
    my_screen1.set_boundary_icon_IDs(sect_2, clear, settings, sect_1, sect_3);
    my_screen1.set_boundary_icon_IDs(sect_3, settings, settings, sect_2, logo);
    my_screen1.set_boundary_icon_IDs(clear, logo, logo, settings, settings);
    my_screen1.set_boundary_icon_IDs(settings, logo, logo, clear, logo);
}

int main()
{
    cout << "Running the application" << "\n";

    setup_screens();

    my_screen1.draw(); // Draw all icons (first time)

    cout << "Use o teclado numerico para navegar: \n"
        << "Direita: 6\n"
        << "Esquerda: 4\n"
        << "Cima: 8\n"
        << "Baixo: 2\n";

    uint8_t input_val; // user input to simulate joystick

    while(1)
    {
        cin >> input_val;
        // getchar(); // remove buffer da tecla enter
        // cout << input_val << endl;

        switch (input_val)
        {
            case '6':
                my_screen1.select_right();
                break;

            case '4':
                my_screen1.select_left();
                break;

            case '8':
                my_screen1.select_up();
                break;
            
            case '2':
                my_screen1.select_down();
                break;

            default:
                break;

        }

    }




    return 0;
}


