#include<iostream>
using namespace std;
int main(){
    
    int num1,num2;
    cout << "Please Enter operand 1: ";
    cin >> num1 ;
    cout << "Please Enter operand 2: " ;
    cin >> num2 ;
    char op;
    cout << "Please Enter Operator (+,-,*,/) : " ;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
    
    case '-':
    cout << num1 << " - " << num2 << " = " << num1 - num2;
    break;
    
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;

    case '/':
        if(num2 != 0){
        cout << num1 << " / " << num2 << " = " << num1/num2;
        break;
        }
        else{
            cout<< "Dision by zero is not possible";
            break ;
        }
           
    default: 
        cout << "Invalid operator ";
    }
    return 0;
}