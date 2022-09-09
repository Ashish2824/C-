#include<iostream>
using namespace std;
#include<math.h>        //<c.math>

int main(){

    int n;
    cout<<"Enter the Number -> ";
    cin>>n;

    int reverse = 0;

    while(n>0){
        int lastdigit = n%10;
        //The remainder of any number divided by 10 is equal to the last digit of the divided number
        reverse = reverse*10 + lastdigit;
        n = n/10;   //eg: 324/10 = 32.4, but because the n is int, it will become 32 instead of 32.4
    }

    cout<<reverse<<endl;
}