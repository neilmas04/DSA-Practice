#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter value of a and b"<<endl;
    cin>> a >> b;

     cout<<"Values before swapping"<<a<<" and "<<b<< endl;

    int temp = a;
    a = b;
    b = temp;

   
    cout<<"Values after swapping"<<a<< "and "<<b<< endl;
    
    return 0;

}