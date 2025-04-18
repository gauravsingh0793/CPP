#include<iostream>
#include<string>
using namespace std;

int main(){
    int teaCups; // if we dont want user input then teaCups = 5;

    cout << "enter the No of cup:";  
    cin >> teaCups; // taking input of i from user

    for(int i=1;i<= teaCups; i++) { 
        cout << "Brewing cup: " << i << " of tea" <<endl;
        
    }

    return 0;

}