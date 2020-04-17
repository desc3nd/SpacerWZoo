
#include<ctime>
#include <cstdlib>
#include"HumanPlayer.h"
#include"MonkeyPlayer.h"
#include "GameManager.h"
#include"DonkeyPlayer.h"
#include"ElephantPlayer.h"

int main() {
    srand(time(NULL));
    MonkeyPlayer rafiki("PawianRafiki");
    MonkeyPlayer ted("Ted");
    ElephantPlayer dumbo("Dumbo");
    ElephantPlayer bumbo("Bumbo");
    DonkeyPlayer klapouchy("Klapouchy");
    DonkeyPlayer osiolek("Matolek");
    HumanPlayer janek("Jan");
    HumanPlayer Franek("Franiu");
    GameManager mgr(rafiki, ted);  // tu proszę przetestować wszystkie inne kombinacje
    mgr.play();
    return 0;
}
