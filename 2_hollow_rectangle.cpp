#include<iostream>
using namespace std;

int main(){
    
    int col, row;

    cout<<"Enter the number of rows of the rectangle -> ";
    cin>>row;
    cout<<"Enter the number of columns of the rectangle -> ";
    cin>>col;

    cout<<"\n";
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            if(i==1 || i==row || j==1 || j==col){
                cout<<"*";
            }
            // else if(j==1 || j==col){
            //     cout<<"*";
            // }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

}
