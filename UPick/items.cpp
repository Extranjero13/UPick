#include <string>
#include <iostream>
using namespace std;
class items{
    public:
    string name;
    float price;
    string advert;
    items(string x, float y, string z) 
    : name(x)
    , price(y)
    , advert(z){
        ;
    }
    


   void showInfo(){
    std::cout << name << "\n" <<"$"<<price << "\n" << advert << std::endl;
   }
};

