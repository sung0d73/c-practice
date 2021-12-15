#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"enter 3 numbers to find which one is greater : ";
    cin>>num1>>num2>>num3;

    cout<<"the largest number is : \n";
    if(num1>num2){
        if(num1>num3){
            cout<<num1;
        }
        else{
            cout<<num3;
        }
    }
    if(num1<num2){
        if(num2>num3){
            cout<<num2;
        }
        else{
            cout<<num3;
        }
    }
}
    
       
    
