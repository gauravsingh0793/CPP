#include <iostream>
#include <string>

using namespace std;

int main(){
    string teaOrder;
    

    cout << "enter your tea order" << endl;
    getline(cin, teaOrder);  // allow input with space
    if (teaOrder == "Green Tea") {
        cout << "you ordered a Green Tea"  << endl;
    }

    return 0;
}