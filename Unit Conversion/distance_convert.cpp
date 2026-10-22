#include<bits/stdc++.h>
using namespace std;

int main(){
    double cm;
    cout<<"Enter distance in centimeteres:"<<endl;
    cin>>cm;

    double meter = cm/100.0;
    double kilometer = cm/100000.0;

    cout<<"Distance in meters:"<<meter<<endl;
    cout<<"Distance in kilometeres:"<<kilometer<<endl;

    return 0;
}