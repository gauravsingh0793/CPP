#include<iostream>
#include<string>
using namespace std;

int main(){
    int hour;

    cout << "enter the current hour (0-23:)";
    cin >> hour;

    if (hour >=8 && hour <=18){
        cout << "shop is open" << endl;
    }
    else{
        cout << "shop is closed" << endl;
    }

    return 0;
}
