#include "attack.hpp"
#include "../../mob.hpp"

Attack::Attack(Mob* mob, const std::vector<Animation*>& animations) : super("attack", mob, animations) {
}

void Attack::Enter() {
    super::Enter();

    hitbox_ = new HiddenHitbox(mob_->x(), mob_->y(), CurrentAnimation());
    mob_->Attach(hitbox_);
}

void Attack::Leave() {
    mob_->Unattach(hitbox_);
    delete hitbox_;

    super::Leave();
}
