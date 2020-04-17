
#include "GameManager.h"
using namespace std;
GameManager::GameManager(HumanPlayer &n1, HumanPlayer &n2):player1(n1),player2(n2){}

void GameManager::play() {
        cout << "W grze bierze udzial " << player1.getName() << " i " << player2.getName() << endl;
        while(true)
        {
            std::string Player1move=player1.move();
            std::string Player2move=player2.move();
        cout << player1.getName() << " wybral " << Player1move << endl;
        cout << player2.getName() << " wybral " << Player2move << endl;
        if (Player1move == "kamien" && Player2move == "nozyce") {
            cout << "Gra konczy sie zwyciestwem " << player1.getName();
            exit(1);
        }
        if (Player1move == "nozyce" && Player2move == "kamien") {
            cout << "Gra konczy sie zwyciestwem " << player2.getName();
            exit(1);
        }
        if (Player1move == "nozyce" && Player2move == "papier") {
            cout << "Gra konczy sie zwyciestwem " << player1.getName();
            exit(1);
        }
        if (Player1move == "papier" && Player2move == "nozyce") {
            cout << "Gra konczy sie zwyciestwem " << player2.getName();
            exit(1);
        }
        if (Player1move == "papier" && Player2move == "kamien") {
            cout << "Gra konczy sie zwyciestwem " << player1.getName();
            exit(1);
        }
        if (Player1move == "kamien" && Player2move == "papier") {
            cout << "Gra konczy sie zwyciestwem " << player2.getName();
            exit(1);
        }
        else{
            cout<<"remis, próbujemy znowu"<<endl;
        }

    }
}

