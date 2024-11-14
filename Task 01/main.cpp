#include<iostream>
using namespace std;
int main(){
int day;
cout<<"Enter a day(1 for Monday,2 for Tuesday,3 for Wednesday,4 for Thursday,5 for Friday,6 for Saturday,7 for Sunday):";
cin>>day;
switch(day){
case 1:
cout<<"Monday";
break;
case 2:
cout<<"Tuesday";
break;
case 3:
cout<<"Wednesday";
break;
case 4:
cout<<"Thursday";
break;
case 5:
cout<<"Friday";
break;
case 6:
cout<<"Saturday";
break;
case 7: 
cout<<"Sunday";
break;
default:
cout<<"Invalid Input";

}
return 0;
}
