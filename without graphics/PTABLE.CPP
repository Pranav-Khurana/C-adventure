#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
clrscr();
long double a,b,m=1;
for(a=1;a<=80;a++)
{ cout<<"="; }
cout<<"\n\tInsert the number of which you would like to see the table (max 999)\n"
<<"\n\t\t\tThe number entered by you is ";
cin>>b;
cout<<"\n\n\t\t\t\t";
sound(5432);
for(a=1;a<=17;a++)
{ cout<<"+";delay(85); }
cout<<endl;
for(a=1;a<=10;a++)
{ cout<<"\t\t\t\t+  ";
delay(85);
cout<<b<<"*"<<a<<"=";
delay(1000);
cout<<b*a;
delay(85);
cout<<"\t+\n";}
cout<<"\t\t\t\t";
for(a=1;a<=17;a++)
{ cout<<"+"; delay(85); }
cout<<"\n";
nosound();
/*for(a=1;a<=b;a++)
{ m*=a;}
cout<<"\n\t\t\t       Factorial of "<<b<<" is "<<m<<"\n\n"; */
for(a=1;a<=80;a++)
{ cout<<"="; }
cout<<"created by ";
delay(85);cout<<"P";
delay(85);cout<<"R";
delay(85);cout<<"A";
delay(85);cout<<"N";
delay(85);cout<<"A";
delay(85);cout<<"V";
getch();
}
