#include <iostream>
using namespace std;
int main() {
    int choice;
    cout<<"Enter a number"<<endl<<"1. January"<<endl<<"2. February"<<endl<<"3. March"<<endl<<"4. April"<<endl<<"5. May"<<endl<<"6. June"<<endl<<"7. July"<<endl<<"8. August"<<endl<<"9. September"<<endl<<"10. October"<<endl<<"11. November"<<endl<<"12. December"<<endl<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"January";
        break;
        case 2:
        cout<<"February";
        break;
        case 3:
        cout<<"March";
        break;
        case 4:
        cout<<"April";
        break;
        case 5:
        cout<<"May";
        break;
        case 6:
        cout<<"June";
        break;
        case 7:
        cout<<"July";
        break;
        case 8:
        cout<<"August";
        break;
        case 9:
        cout<<"September";
        break;
        case 10:
        cout<<"October";
        break;
        case 11:
        cout<<"November";
        break;
        case 12:
        cout<<"December";
        break;
        default:
        cout<<"Enter a number between 1 and 12.";
        break;
    }

    return 0;
}
