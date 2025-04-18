#include<iostream>
#include<string>

using namespace std;

int main(){
    int choice;
    double Price;

    cout << "1.Green Tea" << endl;
    cout << "2.Lemon Tea" << endl;
    cout << "3.Oolong Tea" << endl;
    cout << "you entered a choice" << endl;

    cin >> choice;

    switch(choice){
        case 1:
            Price = 2.0;
            cout << "you selected Green Tea.Price:" << Price << endl;
            break;
        case 2:
            Price = 3.0;
            cout << "you selected Lemon Tea.Price:" << Price << endl;
            break;
        case 3:
            Price = 4.0;
            cout << "you selected Oolong Tea.Price:" << Price << endl;
            break;
        default:
            cout << "you selected invalid choice" << endl;
    }

    return 0;
}