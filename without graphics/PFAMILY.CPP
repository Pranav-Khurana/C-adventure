#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
clrscr();
int a;
char m,n;
for(a=1;a<=80;a++)
{sound(9900); cout<<"^";  delay(85); nosound(); }
cout<<"\n NOTE:-This is only applicabe on khurana's and their maiyka and sasural (real)\n";
cout<<"\n\tEnter the first letter of your name and surname.\n\n"
<<"\t\t  First letter of your surname is ";
cin>>m;
cout<<"\n\t\t  First letter of your name is ";
cin>>n;
if(m=='K'||m=='k')
{ if(n=='P'||n=='p'||n=='R'||n=='r'||n=='J'||n=='j'||n=='G'||n=='g')
  cout<<"\n\n\n\t\tYou are a member of Khurana family";
  else
  cout<<"\n\n\n\t\tYou are a member of Kathuria family";
}
else if(m=='C'||m=='c')
cout<<"\n\n\n\t\t\tYou are a member of Chitkara family";
else if(m=='S'||m=='s')
cout<<"\n\n\n\t\t\tYou are a member of Sachdeva family";
else if(m=='A'||m=='a')
cout<<"\n\n\n\t\t\tYou are a member of Arora family";
cout<<endl<<endl;
for(a=1;a<=80;a++)
{ cout<<"~"; }
cout<<"created by ";
delay(85);
cout<<"P";
delay(85);
cout<<"R";
delay(85);
cout<<"A";
delay(85);
cout<<"N";
delay(85);
cout<<"A";
delay(85);
cout<<"V";
getch();
}


