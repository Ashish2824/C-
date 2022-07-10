#include<iostream>
using namespace std;

int main(){

    int hotel, ticket, extra;

    cout<<"Enter Hotel Expenses -> ";
    cin>>hotel;

    cout<<"Enter Plane Ticket Ticket -> ";
    cin>>ticket;

    cout<<"Enter your Extra Budget -> ";
    cin>>extra;


    int budget;
    budget = hotel+ticket+extra;

    if(budget>150000){
        cout<<"VISIT DUBAI";
    }
    else if (budget>50000){
        cout<<"GO TO GOA";
    }
    else{
        cout<<"TRAVEL TO HILL STATION";
    }
    
    return 0;
}