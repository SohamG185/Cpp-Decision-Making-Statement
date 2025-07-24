#include <iostream>
using namespace std;
int main() {
    char c;
    cout<<"Enter a character: ";
    cin>>c;
    if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        cout<<"The given character is a vowel";
    }
    else{
        cout<<"The given character is a consonant";
    }

    return 0;
}
