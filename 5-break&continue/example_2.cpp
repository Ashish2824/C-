#include<iostream>
using namespace std;

int main(){
    cout<<"ALL THE NUMBERS WHICH ARE NOT DIVISIBLE BY 3 (from 0 to 100) :\n";
    for(int i =0; i<=100; i++){
        if(i%3 == 0){
            continue;
        }
        cout<<i<<endl;
    }

    return 0;
}