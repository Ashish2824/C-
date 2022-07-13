#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of your choice ->";
    cin>>n;

    while(n>=0){
        cout<<"Entered number is -> "<<n;
        cout<<"\n**************************************";
        cout<<"\nEnter the number of your choice ->";
        cin>>n;
    }

    cout<<"YOU HAVE ENTERED A NEGATIVE NUMBER";

    return 0;
}