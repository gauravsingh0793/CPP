#include<iostream>
#include<string>

using namespace std;

int main()
{
    int teaCups;

    cout << "Enter the no of Tea Cups to serve:";
    cin >> teaCups;

    // While Loop

    while(teaCups){
    teaCups--;
    cout <<"serving a cup of tea  \n" << teaCups <<"remaining" <<endl; 
    
    }

    cout << "All the teaCups is served.";
   return 0;
}