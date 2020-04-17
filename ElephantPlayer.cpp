
#include "ElephantPlayer.h"
ElephantPlayer::ElephantPlayer(const std::string &n) : HumanPlayer(n) {}
std::string ElephantPlayer::move() {
    int ix=rand()%5+1;
    if(ix==1)
        return "kamien";
    if(ix==2 || ix==3)
        return "nozyce";
    if(ix==4 || ix==5)
        return "papier";
    return "...";
}
