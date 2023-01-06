/* Fibenacci is a Sequence in which the next term is 
the sum of pervious two terms. Initial two terms are known*/

#include<iostream>
using namespace std;


void fib(int n){
    int t1;
    int t2;

    cout<<"\n\nEnter the First Value for the sequence -> ";
    cin>>t1;
    cout<<"Enter the Second Value for the sequence  -> ";
    cin>>t2;

    int nextTerm;
    
    for(int i=1; i<=n; i++){
        cout<<t1<<endl;
        nextTerm = t1+t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}


int main(){

    int n;
    cout<<"\nEnter the Length of fibenacci sequence -> ";
    cin>>n;

    fib(n);

    return 0;
}