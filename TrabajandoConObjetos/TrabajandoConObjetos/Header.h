#pragma once
#include <iostream>
class boat {
private:
    std::string name;
    int speed;
    int distance;
    int nitro;
public:
    //Constructor   
        boat(std::string pName, int pSpeed, int pDistance, int pNitro);

    //Getters
        std::string getName();
        int getSpeed();
        int getDistance();
        int getNitro();

    //Setters
        void setName(std::string pName);
        void setSpeed(int pSpeed);
        void setDistance(int pDistance);
        void setUltraAttack(int pUltraAttack);

    //Methods
        void printName1();
        void printName2();
        
};





