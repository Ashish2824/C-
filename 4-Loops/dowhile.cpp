#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of your choice ->";
    cin>>n;

    do{
        cout<<n;
        cout<<"\nEnter the number of your choice ->";
        cin>>n;
    }while (n>0);
    
    return 0;
}