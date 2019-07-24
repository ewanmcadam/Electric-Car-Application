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

	simulate move;

	string vehicle_name;
	int instancechoice;
	int current_x, current_y, direction_choice;
	int next_x, next_y, speed_choice, choice;

	vehicle instance[4];


	while (choice != 4)
	{

		cout << "MAIN MENU" << endl << endl;
		cout << "1. Add vehicle" << endl;
		cout << "2. Vehicle overview" << endl;
		cout << "3. Simulate movement" << endl << endl;
		cout << "Enter selection: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			for (int i = 0; i <= 4; i++)
			{
				instance[i].setName;
				instance[i].setX;
				instance[i].setY;
			}
			break;

		case 2:
			for (int i = 0; i <= 4; i++)
			{
				cout << "Name: " << instance[i].getName << endl;
				cout << "X: " << instance[i].getName << endl;
				cout << "Y: " << instance[i].getName << endl;
			}

			break;

		}
	}
}

	
