#include "Player.h"
#include "Cards.h"

std::string Player::getName() const{
    return player_name;
}

int Player::getSum() const{
    return sum;
}

void Player::updateSum(Cards &obj){
    sum = 0;
    for (size_t i = 0; i < numRecieved.size(); i++)
    {
        int val = obj.getVal(numRecieved.at(i));
        sum +=val;
    } 
}

void Player::getCard(Cards &obj){
    obj.pull_card();
}

Player::Player(std::string player_name){
    this->player_name = player_name;
}