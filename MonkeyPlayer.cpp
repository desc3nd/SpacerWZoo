
#include "MonkeyPlayer.h"

MonkeyPlayer::MonkeyPlayer( const std::string &n) : HumanPlayer(n)  {

}

std::string MonkeyPlayer::move() {
   int ix=rand()%3+1;

   if(ix==1)
       return "papier";
   if(ix==2)
       return "nozyce";
   if(ix==3)
       return "kamien";
   return"...";
}


