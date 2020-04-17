
#ifndef SEMESTR_2_ELEPHANTPLAYER_H
#define SEMESTR_2_ELEPHANTPLAYER_H
#include "HumanPlayer.h"

class ElephantPlayer: public HumanPlayer {
    std::string option;
public:
    ElephantPlayer(const std::string &n);
   std::string  move() override;
};


#endif //SEMESTR_2_ELEPHANTPLAYER_H
