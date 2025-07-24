#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Number-1: ";
    cin>>a;
    cout<<"Number-2: ";
    cin>>b;
    cout<<"Number-3: ";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is the greatest number.";
        }
        else if(c>b){
            cout<<c<<" is the greatest number.";
        }
    }
    else if(b>c){
        if(b>a){
            cout<<b<<" is the greatest number.";
        }
    }
    
    return 0;
}
