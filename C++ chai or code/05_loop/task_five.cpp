#include<iostream>
#include<string>
using namespace std;

int main(){

    string typeOfTea [5] = {"Oolong tea", "Green tea", "Black tea", "Lemon tea", "Orange tea"};

    for(int i=0; i < 5; i++){
        if(typeOfTea[i] == "Green tea"){
            cout << "skip the" << typeOfTea [i] << endl;
            continue;
        }

        cout << "Brewing " << typeOfTea [i] <<endl;
    }
        return 0;

}