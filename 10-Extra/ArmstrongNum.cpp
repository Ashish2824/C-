/*Those numbers whose digits when cubed and then added 
together make that number are called Armstrong Numbers. 
Eg: 153 --> (1 + 125 + 27 = 153)*/

#include<iostream>
using namespace std;
#include<math.h>      //<c.math>

int main(){

    int n;
    cout<<"Enter the Number -> ";
    cin>>n;

    int sum = 0;
    int OrgNum = n;

    while(n>0){
        int lastdigit = n%10;
        //The remainder of any number divided by 10 is equal to the last digit of the divided number
        sum += pow(lastdigit,3);
        n = n/10;   //eg: 324/10 = 32.4, but because the n is int, it will become 32 instead of 32.4
    }

    if(sum == OrgNum){
        cout<<"Entered Number is ARMSTRONG NUMBER"<<endl;
    }
    else{
        cout<<"Entered Number is NOT a ARMSTRONG NUMBER"<<endl;
    }
    
    return 0;
}