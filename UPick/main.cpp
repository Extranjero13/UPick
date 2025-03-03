#include "iostream"
#include "items.cpp"
#include <cctype>
#include "cart.cpp"
char shelf[2][2];
void makeShelf(){
    std::cout<< "Samsung TV"<< "|"<< "\tCoke"<<std::endl;
    std::cout<< "---------------------"<<std::endl;
    std::cout<< "Orange    "<<"|"<<"\tPencil"<<std::endl;
}

void pickItem(){
    int r;
    int c; 
    //Prompt the user to pick an item. Ask for row and column, and we use the shelf variable. 
    //Display chosen item info using showInfo method.
    std::cout<< "Select which item you would like!"<<std::endl;
    std::cout<<"Enter row #(1-2): "<<std::endl;
    std::cin>>(r);
    r--;

    std::cout<<"Enter row #(1-2): "<<std::endl;
    std::cin>>(c);
    c--;

    //This nested loop maps the shelf, a 2x2 matrix variable, to the corresponding row and column variables, r and c.
    for(int i = 0; i<2; i++){           
        for(int j=0;j<2;j++){
            shelf[i][j]=r,c;
        }
    }
    if(r==0 && c==0){
        items tv("Samsung 4K", 399.99,"Buy this new TV!!!");    //name,price,advert
        tv.showInfo();
    }else if(r==0 && c==1){
        items coke("Coke 20oz",2.99,"Cold Coke!!");
        coke.showInfo();
    }else if(r==1 && c==0){
        items orange("Orange",0.50,"Florida Farm Fresh!!");
        orange.showInfo();
    }else if(r==1 && c==1){
        items pencil("#2 Pencil",0.99,"Back to School Basics!!");
        pencil.showInfo();
    }else{
        std::cout<<"You did not pick the correct item"<<std::endl;
    }
}

int main(){
    char decision=' ';
   std::cout<<"Hello Customer!! Would you like to see what we have in stock? Push Y to continue or N to leave!"<<std::endl;
   std::cin>> decision;
   decision = std::toupper(decision);
   if(decision == 'Y'){
    makeShelf();
   }
   else{
    std::cout<<"Goodbye!"<<std::endl;
    return 0;
   }

        pickItem();     //Display
        std::cout<<"Push Y to express interest in buying this item"<<std::endl;
        makeShelf();
        pickItem();
        std::cout<<"Push Y or N"<<std::endl;
        std::cin>>decision;
        decision=std::toupper(decision);
        if(decision=='Y'){
        cart cart(decision);
        std::cout<<"Push N to exit checkout!"<<std::endl;
        std::cin>>decision;
        decision=std::toupper(decision);

        cart.printCart();
        }else{
            ;
        

    }while(decision!='N');


    return 0;
}
