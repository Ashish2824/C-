#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<"*";
        }
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=n; j++){
            cout<<"*";
        }
        for(int j=1; j<=n; j++){
            cout<<" ";
        }



        for(int j=1; j<=n; j++){
            cout<<"*";
        }



        for(int j=1; j<=n; j++){
            cout<<" ";
        }   

            // C

        for(int j=1; j<n; j++){
            cout<<"*";
        }
        for(int j=1; j<=n+3; j++){
            if(i==3){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }


        for(int j=1; j<=n; j++){        //SPACE
            cout<<" ";
        }


        for(int j=1; j<=n; j++){
            
            cout<<"*";
        }




        for(int j=n; j>=1; j--){        //SPACE
            cout<<" ";
        }

            // O

        for(int j=1; j<n; j++){
            cout<<"*";
        }
        for(int j=1; j<=n+3; j++){
            if(i==3){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        for(int j=1; j<n; j++){
            cout<<"*";
        }

        cout<<endl;
    }
    return 0;
}