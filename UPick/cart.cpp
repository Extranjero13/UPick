#include <string>
#include <iostream>

using namespace std;
    class cart{
        public:
        int TV=0;  //TV
        int coke=0;  //Coke
        int orange=0;  //Orange
        int pencil=0;  //Pencil
       // string available[4]={"Samsung TV","Coke","Orange","Pencil"};
        char checkout=' ';

        cart(char input_checkout){
            std::cout<<"Push t for TV to confirm, push c for a coke, push, o for an orange,push p for a pencil"<<std::endl;
            std::cin>> input_checkout;
            input_checkout = std::tolower(input_checkout);
            switch(input_checkout){
                case 't':
                TV++;
                std::cout<<"One TV added"<<std::endl;
                break;
                case 'c':
                coke++;
                std::cout<<"One coke added"<<std::endl;
                break;
                case 'o':
                orange++;
                std::cout<<"One orange added"<<std::endl;
                break;
                case 'p':
                pencil++;
                std::cout<<"One pencil added"<<std::endl;
                break;
                default:
                std::cout<< "You did not add anything to the cart"<<std::endl;
            } 

        }

        void printCart(){
            std::cout<<"Here are the items that you have picked: "<<std::endl;
            std::cout<<TV<<" Television(s)"<<std::endl;
            std::cout<<coke<<" Coke(s)"<<std::endl;
            std::cout<<orange<<" Orange(s)"<<std::endl;
            std::cout<<pencil<<" Pencil(s)"<<std::endl;
        };


    };