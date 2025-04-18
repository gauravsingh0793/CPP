#include<iostream>
#include<string>
using namespace std;

int main(){
    string response;

    while(true){
        cout << "do you want more tea(say 'no' to exit ):";
        cin >> response;

        if(response == "stop" ){
            //cout << "no more cups will be served";
            break; // to exit the loop
        }
        cout << "here is your another cup of tea" << endl;

    }
    cout << "no more tea will be served" << endl;

    return 0;
}