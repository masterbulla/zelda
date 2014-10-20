#include "../ai.hpp"

class Player : public AI {
public:
    typedef AI super;
    Player(Mob* mob, bool* keys);

    void Move(double delta);
    void Update(double delta);

private:
    bool* keys_;
};
