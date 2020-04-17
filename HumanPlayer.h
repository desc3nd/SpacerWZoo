
#ifndef SEMESTR_2_HUMANPLAYER_H
#define SEMESTR_2_HUMANPLAYER_H
#include<iostream>
#include<string>
class HumanPlayer {
    const std::string &name;
    std::string option;
public:
    explicit HumanPlayer( const std::string &n);
    virtual std::string  move();
    std::string getName() const;

};

#endif //SEMESTR_2_HUMANPLAYER_H
