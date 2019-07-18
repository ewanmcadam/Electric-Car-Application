//
//  movement.hpp
//  electricCar
//
//  Created by Ewan McAdam on 10/07/2019.
//  Copyright © 2019 Ewan McAdam. All rights reserved.
//

#ifndef movement_hpp
#define movement_hpp

#include "car.hpp"

class simulate : public vehicle
{
private:
    int newX;
    int newY;
    int dir;
    int vel;
    
public:
    void setDir();
    void setVel();
    void moveNorth();
    void moveEast();
    void moveSouth();
    void moveWest();
    
    int getNewX();
    int getNewY();
    int getDir();
    int getVel();
};

#endif /* movement_hpp */
