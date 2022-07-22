#include <iostream>
using namespace std;

int main() {

    float num1, num2;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;

    char opr;   //operator
    cout<<"Enter an operator : ";
    cin>>opr;

  switch (opr) {

      case '+':
        cout <<num1+num2<<endl;
        break;

    case '-':
        cout <<num1-num2<<endl;;
        break;

    case '*':
        cout <<num1*num2<<endl;
        break;

    case '/':
        cout <<num1/num2<<endl;
        break;
    
    default:
    cout<<"ENTER ANOTHER OPERATOR"<<endl;
  }
  return 0;
}

