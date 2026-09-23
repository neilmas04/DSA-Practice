#include<bits/stdc++.h>
using namespace std;

int main()
{
    double length, width;
    cout << "Enter length of rectangle: "<<endl;
    cin >> length;
    cout << "Enter width of rectangle: " <<endl;
    cin >> width;

    double area = length * width;
    double perimeter = 2 * (length + width);
    cout << "Area of rectangle: " << area << endl;
    cout << "Perimeter of rectangle: " << perimeter << endl;

    return 0;
}