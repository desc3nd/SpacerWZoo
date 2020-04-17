

#ifndef SEMESTR_2_MONKEYPLAYER_H
#define SEMESTR_2_MONKEYPLAYER_H


#include "HumanPlayer.h"

class MonkeyPlayer: public HumanPlayer {
public:
    explicit MonkeyPlayer(const std::string &n);
   std::string move() override;


};


#endif //SEMESTR_2_MONKEYPLAYER_H
