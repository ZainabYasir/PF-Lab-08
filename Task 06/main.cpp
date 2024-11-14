#include<iostream>
using namespace std;
int main(){
char light;
cout<<"Enter a traffic light(R for Red,Y for Yellow,G for Green):";
cin>>light;
switch(light){
case 'R':
cout<<"Stop";
break;
case 'Y':
cout<<"Slow Down";
break;
case 'G':
cout<<"Go";
break;
default:
cout<<"Invalid input";
}
return 0;

}