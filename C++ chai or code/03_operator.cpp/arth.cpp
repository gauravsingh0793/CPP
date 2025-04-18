#include<iostream>

using namespace std;

int main(){

    int cups;
    double pricePerCup, totalPrice, discountedPrice;

    cout << "Enter the no of tea cup:";
    cin >> cups;
    cout << "Enter the Price Per Cup";
    cin >> pricePerCup;
    
    totalPrice = cups * pricePerCup;
    
// apply 5% discount if total Price is above 100.

    if(totalPrice>100){
        discountedPrice = totalPrice - (totalPrice*0.05);
        cout << "discountedPrice is:" << discountedPrice <<endl;

    }
    else{
        cout << "total Price is:" << endl << totalPrice;
    }

    float discountMoney = totalPrice - discountedPrice;
    cout << "the discounted money is:" << discountMoney;


    


    return 0;
}