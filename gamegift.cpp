#include<iostream>
using namespace std;
int main()
{
    int points;
    cout<<"enter the points you earned in the game : ";
    cin>>points;

    if (points>1000){
        cout<<"you earned a macbook air!!";
    }
    else
    {
        cout<<"you earned an iphone!!";
    }
    return 0;
}