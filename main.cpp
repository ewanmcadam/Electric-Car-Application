//
//  main.cpp
//  electricCar
//
//  Created by Ewan McAdam on 10/07/2019.
//  Copyright © 2019 Ewan McAdam. All rights reserved.
//

#include <iostream>
#include "movement.hpp"
#include "car.hpp"

int main()
{
    vehicle car;
    simulate move;
    
    string vehicle_name;
    int choice, current_x, current_y, direction_choice;
    int next_x, next_y, speed_choice;
    //while choice < 4
    
    while (choice != 4)
    {
    cout << "MAIN MENU" << endl << endl;
    cout << "1. Add vehicle" << endl;
    cout << "2. Vehicle overview" << endl;
    cout << "3. Simulate movement" << endl << endl;
    cout << "Enter selection: ";
    cin >> choice;
    
    switch(choice)
    {
        case 1:
            car.setName();
            car.setX();
            car.setY();
            break;
            
        case 2:
            vehicle_name = car.getName();
            current_x = car.getX();
            current_y = car.getY();
            cout << "Vehicle name: " << vehicle_name << endl;
            cout << "Location: (" << current_x << "," << current_y << ")" << endl;
            break;
            
        case 3: //need to update x and y in car class to new values
            current_x = car.getX();
            current_y = car.getY();
            move.setDir();
            direction_choice = move.getDir();
            cout << "what speed to move at?" << endl;
            move.setVel();
            speed_choice = move.getVel();
            
            if ((direction_choice = 1))
            {
                move.moveNorth();
                next_x = move.getNewX();
                next_y = move.getNewY();
                if (next_x >= 0 && next_x <= 1000)
                {
                    if (next_y >= 0 && next_y <= 1000)
                    {
                    current_x = next_x;
                    current_y = next_y;
                    }
                }
                else
                {
                    cout << "Error!";
                }
            }
            else if ((direction_choice = 2))
            {
                move.moveEast();
                next_x = move.getNewX();
                next_y = move.getNewY();
                if (next_x >= 0 && next_x <= 1000)
                {
                    if (next_y >= 0 && next_y <= 1000)
                    {
                        current_x = next_x;
                        current_y = next_y;
                    }
                }
                else
                {
                    cout << "Error!";
                }
            }
            else if ((direction_choice = 3))
            {
                move.moveSouth();
                next_x = move.getNewX();
                next_y = move.getNewY();
                if (next_x >= 0 && next_x <= 1000)
                {
                    if (next_y >= 0 && next_y <= 1000)
                    {
                        current_x = next_x;
                        current_y = next_y;
                    }
                }
                else
                {
                    cout << "Error!";
                }
            }
            else if ((direction_choice = 4))
            {
                move.moveWest();
                next_x = move.getNewX();
                next_y = move.getNewY();
                if (next_x >= 0 && next_x <= 1000)
                {
                    if (next_y >= 0 && next_y <= 1000)
                    {
                        current_x = next_x;
                        current_y = next_y;
                    }
                }
                else
                {
                    cout << "Error!";
                }
            }
            else
            {
                break;
            }
            break;
    }
    
    }
}
