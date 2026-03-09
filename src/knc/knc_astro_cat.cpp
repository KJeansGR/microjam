#include "src/knc/knc_astro_cat.h"

namespace {
    constexpr bn::string_view code_credits[] = { "knc" };
    constexpr bn::string_view graphics_credits[] = { "knc" };
    constexpr bn::string_view sfx_credits[] = { "" };
    constexpr bn::string_view music_credits[] = { "" };
}

namespace knc {

    knc_astro_cat::knc_astro_cat(int completed_games, const mj::game_data& data)
        : mj::game("knc")
    {
    }

    bn::string<16> knc_astro_cat::title() const
    {
        return "Astro Cat";
    }

    int knc_astro_cat::total_frames() const
    {
        return 60 * 5; 
    }

    mj::game_result knc_astro_cat::play(const mj::game_data& data)
    {
        return mj::game_result();
    }

    bool knc_astro_cat::victory() const
    {
        return false;
    }

    void knc_astro_cat::fade_in(const mj::game_data& data)
    {
    }

    void knc_astro_cat::fade_out(const mj::game_data& data)
    {
    }

} // namespace knc

MJ_GAME_LIST_ADD(knc::knc_astro_cat)
MJ_GAME_LIST_ADD_CODE_CREDITS(code_credits)
MJ_GAME_LIST_ADD_GRAPHICS_CREDITS(graphics_credits)
MJ_GAME_LIST_ADD_SFX_CREDITS(sfx_credits)
MJ_GAME_LIST_ADD_MUSIC_CREDITS(music_credits)