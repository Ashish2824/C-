// print all the prime number between a and b

#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter the first number -> ";
    cin>>a;
    cout<<"Enter the second number -> ";
    cin>>b;

    cout<<"Below are all the prime number b/w "<<a<<" and "<<b;
    for(int num=a; num<=b; num++){
        int i;
        for(i=2; i<num; i++){
            if(num%i==0){
                break;
            }
        }
        if(i==num){
            cout<<"\n"<<num;
        }
    }
    
    return 0;
}