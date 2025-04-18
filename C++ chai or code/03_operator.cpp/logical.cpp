#include<iostream>

using namespace std;

int main(){

    bool isStudent;
    int cups;

    cout << "are you a Student (1 for yes and 0 for no)?" << endl;
    cin >> isStudent;

    cout << "how many cups you have purchased" << endl;
    cin >> cups;

    if (isStudent || cups > 15){
        cout << "you are eligible for a discount" << endl;
    } else {
        cout << "you are not eligible for a discount" << endl;
    }

    return 0;
}