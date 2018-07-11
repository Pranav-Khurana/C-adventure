#include<string.h>
#include<process.h>
#include<stdio.h>
#include<conio.h>
#include<fstream.h>

class students
{
public:
 int no;
 char name[50];
 float marks;
 void in()
 {
  cout<<"ENTER ROLL NO. :- ";
  cin>>no;
  cout<<"ENTER YOUR NAME :- ";
  gets(name);
 }
  void ina()
 {
  cout<<"ENTER ROLL NO. :- ";
  cin>>no;
  cout<<"ENTER MARKS :- ";
  cin>>marks;
 }
 void out()
 {
  cout<<no<<"\t\t\t\t";
  puts(name);
  }
  void outa()
 {
  cout<<no<<"\t\t\t\t"<<marks<<"\n";
  }
  void outab()
  { cout<<no<<"\t\t\t\t";
   puts(name);
   cout<<"\t\t\t  "<<marks<<endl;
  }
};



fstream A;
students S;



void input()
{
int i,n;
A.open("project.dat",ios::binary|ios::app);
cout<<"NO. OF RECORDS YOU WOULD LIKE TO ENTER\n";
cin>>n;
cout<<"\nENTER RECORDS\n\n";
for(i=0;i<n;i++)
 {
  S.in();
  A.write((char*)&S,sizeof(S));
 }
A.close();
}


void output()
{
A.open("project.dat",ios::binary|ios::in);
cout<<"\nTHE RECORDS ARE AS FOLLOWS\n";
cout<<"\nROLL NO.\t\t\t  NAME\n";
while(A)
 {
 A.read((char*)&S,sizeof(S));
 S.out();
 }
A.close();
}

void search()
{
int x;
A.open("project.dat",ios::binary|ios::in);
cout<<"\nENTER ROLL NO YOU WOULD LIKE TO SEARCH\n";
cin>>x;
while(A.read((char*)&S,sizeof(S)))
{
if(S.no==x)
{
cout<<"\nSEARCH SUCCESSFUL\n\n";
cout<<"\nROLL NO.\t\t\t  NAME\n";
S.out();
goto OUT;
}
}
cout<<"\nSEARCH UNSUCCESSFUL\n\n";
OUT:
A.close();
}



void inputa()
{
int i,n;
A.open("marks.dat",ios::binary|ios::app);
cout<<"NO. OF RECORDS YOU WOULD LIKE TO ENTER\n";
cin>>n;
cout<<"\nENTER RECORDS\n\n";
for(i=0;i<n;i++)
 {
  S.ina();
  A.write((char*)&S,sizeof(S));
 }
A.close();
}


void outputa()
{
A.open("marks.dat",ios::binary|ios::in);
cout<<"\nTHE RECORDS ARE AS FOLLOWS\n";
cout<<"\nROLL NO.\t\t\t  MARKS\n";
while(A)
 {
 A.read((char*)&S,sizeof(S));
 S.outa();
 }
A.close();
}

void main()
{
int c,d;
clrscr();
while(1)
{
clrscr();
MAIN:
cout<<"\n\n\t\tMAIN MENU\n\n1. OPEN FILE A(for student info)\n2. OPEN FILE B(for student marks)\n4. EXIT";
cout<<"\n\nENTER YOUR CHOICE............ ";
cin>>c;
switch(c)
{
case 1:
clrscr();
cout<<"\n\n\t\tSUB MENU 1\n\n1. ADD RECORDS\n2. VIEW RECORDS\n3. SEARCH RECORDS\n4. EXIT";
cout<<"\n\nENTER YOUR CHOICE............ ";
cin>>d;
  switch(d)
  {
   case 1:
   clrscr();
   input();
   getch();
   break;
   case 2:
   clrscr();
   output();
   getch();
   break;
   case 3:
   clrscr();
   search();
   getch();
   break;
   case 4:
   cout<<"THANKS..............";
   getch();
   exit(0);
   default:
   goto MAIN;
  }
break;
case 2:
clrscr();
cout<<"\n\n\t\tSUB MENU 2\n\n1. ADD RECORDS\n2. VIEW RECORDS\n4. EXIT";
cout<<"\n\nENTER YOUR CHOICE............ ";
cin>>d;
  switch(d)
  {
   case 1:
   clrscr();
   inputa();
   getch();
   break;
   case 2:
   clrscr();
   outputa();
   getch();
   break;
   case 3:
   clrscr();
   search();
   getch();
   break;
   case 4:
   cout<<"THANKS..............";
   getch();
   exit(0);
   default:
   goto MAIN;
  }
break;
default:
cout<<"THANKS..............";
   getch();
   exit(0);
}
}
}