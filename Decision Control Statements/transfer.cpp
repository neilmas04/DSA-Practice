#include<bits/stdc++.h>
using namespace std;

int main() {
    double balance = 500.0;
    bool isAccountActive = true;
    double transferAmount;

    cout << "Enter transfer amount: ";
    cin >> transferAmount;

    // Both conditions MUST be true to allow the transfer
    if (transferAmount <= balance && isAccountActive == true) {
        cout << "Transfer successful!" << endl;
    } else {
        cout << "Transfer failed" << endl;
    }

    return 0;
}