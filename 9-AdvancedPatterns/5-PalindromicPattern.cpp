#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;

    for(int i=1; i<=n; i++){
        int j;
        for(j=1; j<=n-i; j++){
            cout<<"  ";
        }
        int k=i;
        // left the initialisation part of for loop, so it will continue from where we left it (i.e. j=n-i)
        for(;j<=n; j++){
            cout<<k--<<" ";
        }
        k = 2;
        for(; j<=n+i-1; j++){
            cout<<k++<<" ";
        }
        cout<<endl;

    }
    return 0;
    
}
