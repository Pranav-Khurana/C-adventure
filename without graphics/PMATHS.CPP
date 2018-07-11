#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
clrscr();
long int a,m,b,r=0,s=0,i,c=0,d=0,p=1;
sound(123);
for(i=1;i<=80;i++)
{cout<<"*"; delay(25);}
cout<<endl;
nosound();
cout<<"\t\tEnter a number to (Max. 8 digit number should be entered)\n";
    delay(1000);
cout<<"\n\t\t(A) get its reverse.\n";
    delay(1500);
cout<<"\t\t(B) get the sum of its digits.\n";
    delay(1500);
cout<<"\t\t(C) get the product of its digits.\n";
    delay(1500);
cout<<"\t\t(D) know whether (i) number is even or odd.\n";
    delay(1500);
cout<<"\t\t\t\t (ii) reverse of number is even or odd.\n";
    delay(1500);
cout<<"\t\t(E) know whether (1) number is prime or composite.\n";
    delay(1500);
cout<<"\t\t\t\t (2) reverse of number is prime or composite.\n\n";
    delay(1000);
cout<<"\t\t The value entered by you is ";
cin>>a;
cout<<"\n\t\t";
for(i=1;i<=40;i++)
{ cout<<"_"; }
m=a;
for( ;a>0;a/=10)
{ b=a%10;
  s+=b;
  p*=b;
  r=r*10+b; }
cout<<"\n Answers:-";
cout<<"\t  (A) Reverse of ("<<m<<") is ";
    delay(1500);
cout<<r;
delay(1500);
cout<<"\n\t\t  (B) Sum of digit of ("<<m<<") is ";
    delay(1500);
cout<<s;
delay(1500);
cout<<"\n\t\t  (C) product of digit of ("<<m<<") is ";
    delay(1500);
cout<<p;
delay(1500);
if(m%2==0)
cout<<"\n\t\t  (D) (i) "<<m<<" is even. ";
else
cout<<"\n\t\t  (D) (i) "<<m<<" is odd. ";
delay(1500);
if(r%2==0)
cout<<" (ii) "<<r<<" is even.\n\t\t";
else cout<<" (ii) "<<r<<" is odd.\n\t\t";
delay(1500);
for(i=1;i<=m;i++)
{ if(m%i==0)
  c++; }
if(c==2)
cout<<"  (E) (1) "<<m<<" is prime number.\n\t\t      ";
else
cout<<"  (E) (1) "<<m<<" is composite number.\n\t\t      ";
delay(1500);
for(i=1;i<=r;i++)
{ if(r%i==0)
  d++; }
if(d==2)
cout<<"(2) "<<r<<" is prime number.\n\t\t";
else
cout<<"(2) "<<r<<" is composite number.\n\t\t";
for(i=1;i<=40;i++)
{ cout<<"_"; }
sound(123);
cout<<endl<<endl;
for(i=1;i<=80;i++)
{ cout<<"*"; delay(25);}
nosound();
cout<<"created by ";
delay(100);cout<<"P";
delay(100);cout<<"R";
delay(100);cout<<"A";
delay(100);cout<<"N";
delay(100);cout<<"A";
delay(100);cout<<"V";
getch();
}