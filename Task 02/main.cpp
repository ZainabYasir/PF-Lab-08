#include<iostream>
using namespace std;
int main(){
int num1,num2;
char oper;
cout<<"Enter the two numbers:";
cin>>num1>>num2;
cout<<"Enter an operator:";
cin>>oper;
switch(oper){
case '+':
cout<<num1+num2;
break;
case '-': 
cout<<num1-num2;
break;
case '*':
cout<<num1*num2;
break;
case '/':
cout<<float(num1)/num2;
break;
default:
cout<<"Invalid Operator";

}
return 0;
}