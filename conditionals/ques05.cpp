#include<iostream>
using namespace std;
int main () {
    int n;
        cout<<"enter num : ";
    cin>>n;

    if(n>99 && n<1000){
        cout<<"its 3 digit num";
    }
    else{
        cout<<"not 3 digit num";
    }
}