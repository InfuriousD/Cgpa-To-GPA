#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
float cgpa;
int ch;

//Getting CGPA
cout << "Enter your cgpa(Grade points out of 10)=";
cin >> cgpa;

//Choice for switch case
cout<<"1:USA,\n2:Germany,\n3:Canada,\nEnter your Choice=";
cin>>ch;

switch (ch)
{
case 1:
//Replace 10 by Highest Grade obtained
    cout << (cgpa/10)*4;
    break;

case 2:
//10 as Best possible grade & 4 as Least possible Grade

//Gpa is Germany is considered as 1 Best 5 lowest
  cout << 4*((10 - cgpa)/ (10 - 4));
  break;

//Canada System 
case 3:
if (cgpa>=8.5){
cout<<"4";
}
else if (cgpa>=6.4 && cgpa<=8.4)
{
    cout<<"3.7";
}
else if (cgpa>=5.8 && cgpa<=6.3)
{
    cout<<"3.3";
}
else if (cgpa>=5.3 && cgpa<=5.7)
{
    cout<<"2.7";
}
else if (cgpa>=4 && cgpa<=5.2)
{
    cout<<"2";
}
else{
    cout<<"Fail";
}
break;

default:
cout<<"Wrong Choice!";
    break;
}
return 0;
}
