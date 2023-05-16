#include "header.h"
#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#include<stdlib.h>
#include<time.h>
#pragma comment(lib, "winmm.lib")

//Variables
int turn = 5;
int eleccionNitro = 0;
int usosNitro = 1;

int speed = 0;

void intro() {
    std::cout << "Los conductores estan en la linea de salida.\n";
    Sleep(1200);
    std::cout << "Preparados!\n";
    Sleep(1200);
    std::cout << "Listos!\n";
    Sleep(1200);
    std::cout << "YA!\n";
}
void turno(boat& driver) {
    do
    {
        if (turn > 0)
        {
            std::cout << "Es tu turno.\n";
            srand(time(NULL));
            int dice = 0;
            dice = 1 + rand()%(7-1);
            std::cout << "Has lanzado el dado y has sacado un " << dice << "\n";
            speed = speed + dice;

            std::cout << "Quieres utilizar el N2O?\n";
            std::cout << "[1] Si\n";
            std::cout << "[2] No\n";
            std::cin >> eleccionNitro;
            if (eleccionNitro == 1 && usosNitro < 0)
            {
                std::cout << "Has usado el nitro\n";
                srand(time(NULL));
                int nitroRand = 0;
                nitroRand = 1 + rand() % (2 - 1);
                usosNitro = usosNitro - 1;
                

                if (nitroRand == 1)
                {
                    //velocidad TOTAL tendrá que dividirse por la mitad.
                    std::cout << "Lamentablemente el nitro ha fallado y te ha ralentizando\n";
                    speed = speed / 2;
                }
                else
                {
                    std::cout << "Enhorabuena! el nitro ha duplicado tu velocidad\n";
                    speed = speed / 2;
                }

                turn = turn - 1;
                driver.getNitro();
            }
            else
            {
                std::cout << "No has usado el nitro\n";
                turn = turn - 1;
            }
        }
       
    } while (turn > 0);
}
int main()
{
    boat driver1("Keo", 0, 0, 1);
    boat driver2("Anuel", 0, 0, 1);
    driver1.printName1();
    driver2.printName2();
    intro();
    turno(driver1);
    turno(driver2);
    
    return 0;
}




