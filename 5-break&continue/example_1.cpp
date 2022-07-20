#include<iostream>
using namespace std;

int main(){
    int pocketmoney=3000;
    for(int date=1; date<=30; date++){
        if(date%2==0){
            continue;
        }
        if(pocketmoney==0){
            cout<<"\nNO MONEY LEFT :(\n";
            break;
        }
        cout<<"date-"<<date<<" GO OUT TODAY !!\n";
        pocketmoney = pocketmoney - 500;
    }
    return 0;
}