#include<bits/stdc++.h>
using namespace std;

int main() {
    int choice;
    
    cout << "---1. Check Balance" << endl;
    cout << "2. Add Funds" << endl;
    cout << "3. Send Money" << endl;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << " current balance is 500." << endl;
            break; 
            
        case 2:
            cout << "Routing to gateway..." << endl;
            break;
            
        case 3:
            cout << "Enter the reciever ID:" << endl;
            break;
            
        default:

            cout << "Invalid choice!"<< endl;
    }

    return 0;
}