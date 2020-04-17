

#ifndef SEMESTR_2_DONKEYPLAYER_H
#define SEMESTR_2_DONKEYPLAYER_H
#include "HumanPlayer.h"

class DonkeyPlayer : public HumanPlayer{
    std::string option;
public: explicit DonkeyPlayer( const std::string &n);
    std::string move() override;

};


#endif //SEMESTR_2_DONKEYPLAYER_H
