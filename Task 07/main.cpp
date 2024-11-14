#include<iostream>
using namespace std;
int main(){
int month;
cout<<"Enter the month(1 for January,2 for February,3 for March,..,12 for December):";
cin>>month;
switch(month){
case 1:
case 2:
case 12:
cout<<"Winter";
break;
case 3:
case 4:
cout<<"Spring";
break;
case 5:
case 6:
case 7:
case 8:
case 9:
cout<<"Summer";
case 10:
case 11:
cout<<"Fall";
break;
default:
cout<<"Invalid input";

}
return 0;

}