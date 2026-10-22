#include<bits/stdc++.h>
using namespace std;

int main() {
    int totalDays;
    
    cout << "Enter total number of days: ";
    cin >> totalDays;

    int years = totalDays / 365;
    int remainingDays = totalDays % 365;
    int weeks = remainingDays / 7;
    int days = remainingDays % 7;
    
    cout << years << " Years: " << weeks << " Weeks: " << days << " Days:" << endl;
    
    return 0;
}