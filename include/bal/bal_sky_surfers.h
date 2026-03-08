#ifndef BAL_SKY_SURFERS_H
#define BAL_SKY_SURFERS_H

#include "mj/mj_game.h"

namespace bal
{
    class bal_sky_surfers : public mj::game
    {
    public:
        bal_sky_surfers(int completed_games, const mj::game_data& data);

        bn::string<16> title() const override;

        int total_frames() const override;

        mj::game_result play(const mj::game_data& data) override;

        bool victory() const override;

        void fade_in(const mj::game_data& data) override;

        void fade_out(const mj::game_data& data) override;

};

}

#endif