#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
clrscr();
int a;
char m;
cout<<"\n\n";
for(a=1;a<=80;a++)
{
sound(654);
cout<<"=";
delay(40);
nosound();
}
delay(1000);
cout<<endl;
cout<<"\tEnter an alphabet to check whether it is vowel or not\n\n";
delay(1000);
cout<<"\n\t\t\tYour entered value is ";
sound(564);
cin>>m;
nosound();
cout<<endl<<endl;
switch(m)
{
case'a':
case'A':
case'e':
case'E':
case'i':
case'I':
case'o':
case'O':
case'u':
case'U':
for(a=1;a<=25;a++)
{ cout<<"  *";
delay(85);
}
cout<<endl;
cout<<"  *\t\t\t  You entered a vowel\t\t\t\t  *\n";
delay(85);
for(a=1;a<=25;a++)
{ cout<<"  *";
delay(85);
}
cout<<endl
<<endl;
break;
default:
for(a=1;a<=25;a++)
{ cout<<"  *";
delay(85);
}
cout<<endl;
cout<<"  *\t\t\tYou did not entered vowel\t\t\t  *\n";
for(a=1;a<=25;a++)
{ cout<<"  *";
delay(85);
}
delay(100);
cout<<endl<<endl;
}
for(a=1;a<=80;a++)
{ cout<<"=";
delay(60);
}
sound(20);
cout<<"created by ";
delay(85);cout<<"P";
delay(85);cout<<"R";
delay(85);cout<<"A";
delay(85);cout<<"N";
delay(85);cout<<"A";
delay(85);cout<<"V";
nosound();
getch();
}