#include<iostream>
using namespace std;

int main(){

    int i, j, k, l, a, w, x, y, z;

    i=1;
    i = i++ + ++i;  //1 + 3
    cout<<"\nANS-1 : i is "<<i<<endl;

    j=1;
    k=2; 
    l = j + k + j++ + k++ + ++j + ++k;
    cout<<"\nANS-2 : j is "<<j<<", k is "<<k<<" and l is "<<l<<endl;

    a=0;
    a = a++ + --a + ++a - a--;
    //  0  +  0  +  1  -  1    
    cout<<"\nANS-3 : a is "<<a<<endl;

    w=1, x=2, y=3;
    z = w - x + y + w-- - x-- - y--;
      //1 - 2 + 3 + 1 - 2 - 3
    cout<<"\nAns-4 : w is "<<w<<", x is "<<x<< ", y is "<<y<<" and z is "<<z; 

    return 0;
}