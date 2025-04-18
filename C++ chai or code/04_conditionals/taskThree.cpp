#include<iostream>
#include<string>

using namespace std;

int main(){
    int cups;

    cout << "how many cups you have ordered " << endl;
    cin >> cups;

    if(cups >=10 && cups <=20){
        cout << "you are eligible for 10% discount" << endl;
    }else if (cups > 20) {
        cout << "you are eligible for 20% discount" << endl;
    }else {
        cout << "you are not eligible for discount" << endl;
    }

    return 0;
}