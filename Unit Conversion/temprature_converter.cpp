#include<bits/stdc++.h>
using namespace std;

int main(){
    double celsius, farehneit;
    cout<<"Enter temprature in celsius:"<<endl;
    cin>>celsius;

    farehneit = (celsius * 9.0/5.0) + 32.0;
    cout<<"Temprature in farehneit:"<<farehneit<<endl;

    return 0;
}