#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"input your marks in jee mains :";
    cin>>marks;

    if (marks>100){
        cout<<"you are qualified for jee advanced!!";
    }
    else{
        cout<<"you are not qualified for jee advanced :(";
    }
    return 0;
}