#include <vector>
#include <string>

class Cards{
    private:
        std::vector<std::vector<std::string>> Matrix;
        std::vector<std::string> cardType = { "Club","Spade","Heart","Diamons"};
        std::vector<std::string> cardNum = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
        int cardVal[13] = {1,2,3,4,5,6,7,8,9,10,10,10,10};
    public:

        void remove_at(int type,int num);
        void pull_card();
        int *find(std::string,std::string);
        std::string display(std::string,std::string);


        Cards();
};