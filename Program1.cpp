#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if (num%2==0){
        cout<<"The given number is even.";
    }
    else{
        cout<<"The given number is odd.";
    }

    return 0;
}
