#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"\n*******COMPARING WITH 10 *******"<<endl;
    cout<<"Enter any number -> "<<endl;
    cin>>n;

    if(n>10) {
        cout<<"\nENTERED VALUE is MORE THAN 10";
    }
    else if(n<10) {
        cout<<"ENTERED VALUE is LESS THAN 10";
    }
    else{
        cout<<"ENTERED VALUE is EQUAL to 10";
    }
    return 0;
}