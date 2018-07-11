#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
clrscr();
int a;
char b;
cout<<"  ";
for(a=1;a<=7;a++)
{ cout<<"Five Stars ";}
cout<<"\n\n\n\n\t\tEnter the first letter of your name\n\n"
<<"\t\t  First letter of your name is ";
cin>>b;
switch(b)
{
case'S':
case's':
cout<<"\n\n\t\t    SAURABH RAKHEJA  (SIR JI)";
break;
case'D':
case'd':
cout<<"\n\n\t\t    DEEPANSHU RAKHEJA  (DEPIKA)";
break;
case'A':
case'a':
cout<<"\n\n\t\t    ANANYA VERMA  (NANI)";
break;
case'j':
case'J':
cout<<"\n\n\t\t    JANAVI KHURANA  (JUNGLI)";
break;
case'p':
case'P':
cout<<"\n\n\t\t\t    PRANAV KHURANA ";
break;
default:
cout<<"\n\n\t\tYou are not a member of Five Stars";
}
cout<<"\n\n\n";
for(a=1;a<=80;a++)
{cout<<"*";}
cout<<"created by ";
delay(85);cout<<"P";
delay(85);cout<<"R";
delay(85);cout<<"A";
delay(85);cout<<"N";
delay(85);cout<<"A";
delay(85);cout<<"V";
getch();
}

