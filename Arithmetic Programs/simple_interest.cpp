#include<bits/stdc++.h>
using namespace std;

int main()
{
    double principal, rate, time;
    cout << "Enter principal amount: " << endl;
    cin >> principal;
    cout << "Enter rate of interest: " <<endl;
    cin >> rate;
    cout << "Enter time: " << endl;
    cin >> time;
    double simple_interest = (principal * rate * time) / 100;
    cout << "Simple Interest: " << simple_interest << endl;
    
    return 0;
}