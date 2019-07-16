//
//  car.hpp
//  electricCar
//
//  Created by Ewan McAdam on 10/07/2019.
//  Copyright © 2019 Ewan McAdam. All rights reserved.
//

#ifndef car_hpp
#define car_hpp

using namespace std;
#include <string>

class vehicle {
private:
    string name;
    int x;
    int y;
    float charge;
    
public:
    void setName();
    void setX();
    void setY();
    void setCharge();
    
    string getName();
    int getX();
    int getY();
    float getCharge();
};

#endif /* car_hpp */
