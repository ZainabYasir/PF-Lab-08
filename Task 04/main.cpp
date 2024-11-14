#include<iostream>
using namespace std;
int main(){
char grade;
cout<<"Enter a grade(A,B,C or F):";
cin>>grade;
switch(grade){
    case 'A':
    cout<<"Excellent";
    break;
    case 'B':
    cout<<"Good";
    break;
    case 'C':
    cout<<"Satisfactory";
    break;
    case 'D':
    cout<<"Unsatisfactory";
    break;
    case 'F':
    cout<<"Fail";
    default:
    cout<<"Wrong input";
}
return 0;

}