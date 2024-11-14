#include<iostream>
using namespace std;
int main(){
float B_balance;
cout<<"Balance:$"<<endl;
cin>>B_balance;
int dep_amount;
cout<<"Deposited amount:$"<<endl;
cin>>dep_amount;
int withdrawal_amount;
cout<<"Withdrawal amount:$"<<endl;
cin>>withdrawal_amount;
float A_balance;
cout<<"BAlance after deposit and withdrawal:$"<<B_balance+dep_amount-withdrawal_amount<<endl;
int menu;
cout<<"Enter 1 for deposit,2 for withdrawal,3 for check balance,4 for Exit:";
cin>>menu;
switch(menu){
case 1:
cout<<"Deposited amount:$"<<dep_amount;
break;
case 2:
cout<<"Withdrawal amount:$"<<withdrawal_amount;
break;
case 3:
cout<<"Check Balance:$"<<A_balance;
break;
case 4:
cout<<"Exit";
break;
default:
cout<<"Invalid";

}
return 0;
} 