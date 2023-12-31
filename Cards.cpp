#include <iostream>
#include "Cards.h"
#include <time.h>

int *Cards::find(std::string type,std::string num){
    int i=0;
    while (type != cardType.at(i))
    {
        i++;
    }

    int *data = new int[2];
    *data = i;

    i=0;
    while (num!=cardNum.at(i))
    {
        i++;
    }
    data[1] = i;
    
    return data;
    
}

int Cards::getVal(int num) const{
            return cardVal[num];
        }

void Cards::remove_at(int type,int num){
    Matrix.at(type).at(num) = "NULL";
}

void Cards::pull_card(){
    srand(time(0));
    int type = rand()%4;

    srand(time(0));
    int num = rand()%13;
    
    std::cout << "Card Pulled" << display(cardType.at(type),cardNum.at(num));

    remove_at(type,num);
}

std::string Cards::display(std::string type,std::string num){
    int *data = find(type,num);

    return cardNum.at(data[1]) + " " + cardType.at(data[0]);
}

std::string Cards::getType(int type) const{
    return cardType.at(type);
}

std::string Cards::getNum(int num) const{
    return cardNum.at(num);
}

int Cards::findNum(std::string num){
    int i=0;
    while (num!=cardNum.at(i))
    {
        i++;
    }

    return i;
}

int Cards::getVal(int num) const{
    return cardVal[num];
}

int Cards::getVal(std::string num){
    int index = findNum(num);

    return cardVal[index];
}

Cards::Cards(){
    for (size_t i = 0; i < cardType.size(); i++)
    {
        Matrix.push_back(cardNum);
    }
}

