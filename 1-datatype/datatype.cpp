#include<iostream>
using namespace std;

int main(){
    int ascii = 'a';
    cout<<ascii;

    int a;  //declaration
    //int is by default signed
    a = 12; //initialisation

    cout<<"\nsize of int -> "<<sizeof(a)<<endl;


    float b;
    cout<<"size of float -> "<<sizeof(b)<<endl;

    char c;
    cout<<"size of char -> "<<sizeof(c)<<endl;


    bool d;
    cout<<"size of bool -> "<<sizeof(d)<<endl;


    long int li;
    short int si;

    cout<<"size of short int -> "<<sizeof(si)<<endl;
    cout<<"size of long int -> "<<sizeof(li)<<endl;


    return 0;

}
