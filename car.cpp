//
//  car.cpp
//  electricCar
//
//  Created by Ewan McAdam on 10/07/2019.
//  Copyright © 2019 Ewan McAdam. All rights reserved.
//

#include "car.hpp"
using namespace std;
#include <iostream>
#include <cstdlib>

void vehicle::setName()
{
    string name_input;
    cout << "What is the name of the vehicle?" << endl << endl;
    cin >> name_input;
    name = name_input;
}

string vehicle::getName()
{
    return name;
}

void vehicle::setX()
{
    int x_choice;
    cout << "Enter starting x co-ordinate: ";
    cin >> x_choice;
    if (x_choice % 50 == 0) //check this
    {
        x = x_choice;
    }
    else
    {
        vehicle::setX();
    }
}

int vehicle::getX()
{
    return x;
}

void vehicle::setY()
{
    int y_choice;
    cout << "Enter starting y co-ordinate: ";
    cin >> y_choice;
    if (y_choice % 50 == 0) //check this
    {
        y = y_choice;
    }
    else
    {
        vehicle::setY();
    }
}

int vehicle::getY()
{
    return y;
}


