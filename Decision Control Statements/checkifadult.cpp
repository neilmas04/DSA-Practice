#include<bits/stdc++.h>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are an adult." << endl;
    } else {
        cout << "Not Adult" << endl;
    }

    return 0;
}