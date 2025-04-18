#include<iostream>
#include<string>

using namespace std;

int main(){

string tea;
int teaQuantity;

cout << "what would you like to order in tea: \n";
cin>> tea;

cout << "how many cups " << tea << "\twould you like to have: \n";
cin >> teaQuantity;

cout << teaQuantity ;
cout << tea ;


return 0;

}