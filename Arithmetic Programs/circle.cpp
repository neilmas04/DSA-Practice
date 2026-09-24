#include<bits/stdc++.h>
using namespace std;

int main()
{
    double radius;
    cout << "Enter radius of circle: " << endl;
    cin >> radius;

    double pi = 3.142;

    double area = pi * radius * radius;
    double circumference = 2 * pi * radius; 

    cout << "Area of circle: " << area << endl;
    cout << "Circumference of circle: " << circumference << endl;

    return 0;

}