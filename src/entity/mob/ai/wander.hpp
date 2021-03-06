#pragma once

#include "../ai.hpp"
#include "../action.hpp"
#include "../../../math/dir.hpp"

class Wander : public AI {
public:
    typedef AI super;
    Wander(Mob* mob);

    void Update(double delta);

private:
    float accum;
    Dir dir;
};
