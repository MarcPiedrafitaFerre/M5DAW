#include "header.h"
#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

//constructor
boat::boat(std::string pName, int pSpeed, int pDistance, int pNitro) {
    name = pName;
    speed = pSpeed;
    distance = pDistance;
    nitro = pNitro;
}

//getters
int boat::getDistance() {
    return distance;
}
int boat::getSpeed() {
    return speed;
}
std::string boat::getName() {
    return name;
}
int boat::getNitro() {
    return nitro;
}
//setters
void boat::setDistance(int pDistance) {
    distance = pDistance;
}
void boat::setSpeed(int pSpeed) {
    speed = pSpeed;
}
void boat::setName(std::string pName) {
    name = pName;
}
void boat::setUltraAttack(int pNitro) {
    nitro = pNitro;
}
//Methods
void boat::printName1() {
    std::cout << "-->" << getName() << " es el conductor del McLaren 720S\n";
}
void boat::printName2() {
    std::cout << "-->" << getName() << " es el conductor del Lamborghini Huracan\n";
}
