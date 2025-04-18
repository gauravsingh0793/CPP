#include<iostream>
#include<string>

using namespace std;

int main(){

    string teaType [5] = {"Oolong tea", "Green tea", "Black tea", "Lemon tea", "Orange tea"};

    for(int i = 0; i < 5; i++){
        cout << "Brewing " << teaType[i] <<":" << endl;

        for(int j = 1; j <= 3; j++){
            cout << "Brewing " << j << " cup of " << teaType[i] << endl;
                }
    }

    return 0;
}