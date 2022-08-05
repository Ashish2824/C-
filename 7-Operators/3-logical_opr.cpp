#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"\n******* DIVISIBILITY CHECK (3 and 7) *******"<<endl;
    cout<<"Enter any number -> "<<endl;
    cin>>n;

    if(n%3==0 && n%7==0) {
        cout<<"\nENTERED VALUE is DIVISIBLE BY BOTH 3 and 7";
    }
    else if(n%7==0) {
        cout<<"\nENTERED VALUE is DIVISIBLE BY 7";
    }
    else if(n%3==0) {
        cout<<"\nENTERED VALUE is DIVISIBLE BY 3";
    }
    else{
        cout<<"\nENTERED VALUE is NOT DIVISIBLE BY EITHER 3 or 7";
    }

}