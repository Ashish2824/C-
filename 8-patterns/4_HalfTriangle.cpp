#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number (BIGGER THE NUMBER, BIGGER WILL BE THE TRIANGLE) -> ";
    cin>>n;

    cout<<"-------- TRIANGLE TYPE-1 --------"<<endl<<"\n";
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n;j++){
            if(j<=i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    cout<<"\n-------- TRIANGLE TYPE-2 --------"<<endl<<"\n";
    for(int i=1; i<=n; i++){
            for(int j=1; j<=n;j++){
                if(j<=n-i){
                    cout<<" ";
                }
                else{
                    cout<<"*";
                }
            }
            cout<<endl;
    }

}