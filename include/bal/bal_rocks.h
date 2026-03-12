#ifndef BAL_ROCKS_H
#define BAL_ROCKS_H

#include <bn_display.h>
#include <bn_fixed_point.h>
#include <bn_sprite_ptr.h>
#include <bn_rect.h>
#include <bn_size.h>

#include "bal_screen_size.h"

namespace bal{

class rock{

    public:
        rock(int starting_x, int starting_y, bn::fixed speed, bn::size rock_size);

        bool update();
<<<<<<< HEAD

        bn::sprite_ptr sprite;
        bn::fixed speed;
        bn::size size;
        bn::rect bounding_box;
=======
        
        bn::rect bounding_box;
    
    private :
        bn::sprite_ptr _sprite;
        bn::fixed _speed;
        bn::size _size;
       
>>>>>>> a04e09abb4cf283f569c70921a25f7236f5761b1
};

}

#endif