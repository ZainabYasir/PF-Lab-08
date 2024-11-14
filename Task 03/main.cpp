#include<iostream>
using namespace std;
int main(){
char alpha;
cout<<"Enter an alphabet:";
cin>>alpha;
switch(alpha){
case 'A':
cout<<"A is a vowel";
break;
case 'a':
cout<<"a is a vowel";
break;
case 'E':
cout<<"E is a vowel";
break;
case 'e':
cout<<"e is a vowel";
break;
case 'I':
cout<<"i is a vowel";
break;
case 'i':
cout<<"i is a vowel";
break;
case 'O':
cout<<"O is a vowel";
break;
case 'o':
cout<<"o is a vowel";
break;
case 'U':
cout<<"U is a vowel";
case 'u':
cout<<"u is a vowel";
break;
default:
cout<<"Consonant";

}
return 0;
}