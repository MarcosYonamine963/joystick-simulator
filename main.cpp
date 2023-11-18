/*
    Joystick simulator to control the selection of Icons inside a menu.

    Created by: Marcos Yonamine
    Nov. 2023
    Rev: 0.0.0

    Obs: To compile run this command on linux terminal:

        g++ -o main main.cpp icons.cpp screen.cpp 
    than, to execute the program:

        ./main

*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "icons.hpp"
#include "screen.hpp"

Screen my_screen1;


void setup_screens(void)
{
    my_screen1.set_boundary_icon_IDs(logo,      clear,      settings,   sect_3,     all_sect    );// boundary for icon logo
    my_screen1.set_boundary_icon_IDs(all_sect,  clear,      settings,   logo,       sect_1      );// boundary for icon all_sect
    my_screen1.set_boundary_icon_IDs(sect_1,    clear,      settings,   all_sect,   sect_2      );// boundary for icon sect_1
    my_screen1.set_boundary_icon_IDs(sect_2,    clear,      settings,   sect_1,     sect_3      );// boundary for icon sect_2
    my_screen1.set_boundary_icon_IDs(sect_3,    settings,   settings,   sect_2,     logo        );// boundary for icon sect_3
    my_screen1.set_boundary_icon_IDs(clear,     logo,       logo,       settings,   settings    );// boundary for icon clear
    my_screen1.set_boundary_icon_IDs(settings,  logo,       logo,       clear,      logo        );// boundary for icon settings


    /* You can setup positions, as well */
    my_screen1.set_position(logo, 0, 0); // set position x and y for icon logo

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
        << "Baixo: 2\n"
        << endl
        << "Digite 0 para sair\n"
        << endl;

    uint8_t input_val = 1; // user input to simulate joystick

    while(input_val)
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

            case '0':
                input_val = 0;
                break;

            default:
                break;

        }

    }




    return 0;
}


