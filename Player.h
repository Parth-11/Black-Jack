#pragma once
#include <vector>
#include <string>
#include "Cards.h"

class Player{
    private:
        std::vector<std::string> typeRecieved;
        std::vector<std::string> numRecieved;
        int sum=0;
        std::string player_name;
    public:

        std::string getName() const;
        int getSum() const;
        void updateSum(Cards &obj);
        void getCard(Cards &obj);

        Player(std::string);

};