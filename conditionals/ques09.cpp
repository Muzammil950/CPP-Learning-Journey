#include <iostream>
using namespace std;
int main () {
    int a, b , c;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;
    cout<<"enter c : ";
    cin>>c;

    if(a>b and a>c){
        cout<<a<<"is greatest";
    }
    else if(b>a && c>a){
        cout<<b<<"is greatest";
    }
    else{
        cout<<c<<"is greatest";
    }
}