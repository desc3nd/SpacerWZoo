
#include "HumanPlayer.h"
HumanPlayer::HumanPlayer(const std::string &n) : name(n){

}

std::string HumanPlayer::move() {
    std::cout<<name<<" podaj ruch : kamien,papier czy nozyce?"<<std::endl;
    std::cin>>option;
    return option;
}

std::string HumanPlayer::getName() const {
    return name;
}
