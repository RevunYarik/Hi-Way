#ifndef PLAYER_HPP_INCLUDED
#define PLAYER_HPP_INCLUDED

#include "msoftcon.h"
#include <math.h>

#include "machine.hpp"

class Player
{
private:
    double x, y;
public:
    Player();
    ~Player();
    double X();
    double Y();
    void MoveTo(double xp, double yp);
    void Move(double dx, double dy);
    void Draw();
    bool Intersects(Machine *m);
};

#endif // PLAYER_HPP_INCLUDED
