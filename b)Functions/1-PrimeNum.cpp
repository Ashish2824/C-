// print all the prime number between a and b

#include<iostream>
using namespace std;
#include<math.h>


bool isPrime(int num){
        for( int i=2; i<=sqrt(num); i++){
            if(num%i==0){
                return false;
            }
        }
        return true;
    }
    

int main(){
    int a, b;
    cout<<"Enter the first number -> ";
    cin>>a;
    cout<<"Enter the second number -> ";
    cin>>b;

   cout<<"Below are all the prime number b/w "<<a<<" and "<<b<<"\n";

    for(int i=a; i<=b; i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    
    return 0;
}