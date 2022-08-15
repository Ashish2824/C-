#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"\nENTER THE NUMBER OF YOUR CHOICE = ";
    cin>>n;
    cout<<endl;

// UPPER_PART

    for(int i=1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<"*";
        }

        int space = 2*(n-i);
        for(int j=1; j<=space; j++){
            cout<<" ";
        }

        for(int j = 1; j<=i; j++){
                cout<<"*";
            }
             cout<<endl;
    }


//LOWER_PART


    for(int i=n; i>=1; i--){
        for(int j = 1; j<=i; j++){
            cout<<"*";
        }

        int space = 2*(n-i);
        for(int j=1; j<=space; j++){
            cout<<" ";
        }

        for(int j = 1; j<=i; j++){
                cout<<"*";
            }
             cout<<endl;
    }




}



//if n is the input, the oupter pattern will be having
// 2*n rowns and columns.

// space = 2(n-row_no)      , in terms of "row no" and "n"
