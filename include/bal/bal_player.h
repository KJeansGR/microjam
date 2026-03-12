#ifndef BAL_PLAYER_H
#define BAL_PLAYER_H

#include <bn_fixed_point.h>
#include <bn_sprite_ptr.h>
#include <bn_display.h>
#include <bn_rect.h>
#include <bn_size.h>

#include "bal_screen_size.h"

namespace bal
{
class player{

    public:
        player(bn::fixed_point starting_position, bn::fixed speed);
        void update();

<<<<<<< HEAD
        // bn::sprite_ptr _sprite;
=======
>>>>>>> a04e09abb4cf283f569c70921a25f7236f5761b1
        bn::rect bounding_box;

    private:
        // The sprite to display the player
        bn::sprite_ptr _sprite;
        // The pixels/frame the player moves in each dimension
        bn::fixed _speed;
};

}

#endif