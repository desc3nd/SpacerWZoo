
#include "DonkeyPlayer.h"
DonkeyPlayer::DonkeyPlayer(const std::string &n) : HumanPlayer(n) {
option="kamien";
}

std::string DonkeyPlayer::move() {
    return option;
}
