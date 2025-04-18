#include<iostream>

using namespace std;


int main(){

    int cups; 

    cout << "no of cups order by customer" << endl;
    cin >> cups;

    if(cups > 20){
        cout << "customer get golden badge";
    } else if (cups >= 10 && cups <= 20){
        cout << "customer get silver badges";
    } else {
        cout << "customer get no badges";
    }
    
    return 0;

    

}