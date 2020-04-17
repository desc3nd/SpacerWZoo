
#ifndef SEMESTR_2_GAMEMANAGER_H
#define SEMESTR_2_GAMEMANAGER_H

#include"HumanPlayer.h"
class GameManager  {
    HumanPlayer &player1;
    HumanPlayer &player2;
public:
    GameManager(HumanPlayer &n1, HumanPlayer &n2 );
void play();
};


#endif //SEMESTR_2_GAMEMANAGER_H
