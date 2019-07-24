//
//  movement.cpp
//  electricCar
//
//  Created by Ewan McAdam on 10/07/2019.
//  Copyright © 2019 Ewan McAdam. All rights reserved.
//

#include "movement.hpp"
#include <iostream>


void simulate::setDir()
{
    int r = rand() % 4 + 1;
    dir = r;
}

int simulate::getDir()
{
    return dir;
}

void simulate::setVel()
{
    int speed_choice;
    cout << "Enter speed (units/sec): ";
    cin >> speed_choice;
    if (speed_choice > 0 && speed_choice < 100)
    {
        vel = speed_choice;
    }
    else
    {
        simulate::setVel();
    }
}

int simulate::getVel()
{
    return vel;
}


void simulate::moveNorth()
{
    int positionX, positionY, speed;
    positionX = getX();
    positionY = getY();
    speed = getVel();
    newX = positionX;
    newY = positionY + speed;
}

void simulate::moveEast()
{
    {
        int positionX, positionY, speed;
        positionX = getX();
        positionY = getY();
        speed = getVel();
        newX = positionX + speed;
        newY = positionY;
    }
}

void simulate::moveSouth()
{
    int positionX, positionY, speed;
    positionX = getX();
    positionY = getY();
    speed = getVel();
    newX = positionX;
    newY = positionY - speed;
}

void simulate::moveWest()
{
    {
        int positionX, positionY, speed;
        positionX = getX();
        positionY = getY();
        speed = getVel();
        newX = positionX - speed;
        newY = positionY;
    }
}

int simulate::getNewX()
{
    return newX;
}

int simulate::getNewY()
{
    return newY;
}
