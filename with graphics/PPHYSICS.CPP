#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<time.h>
#include<stdlib.h>

int marks=0;

void A(void)
{
int x=getmaxx()/2,y=getmaxy()/2;
setbkcolor(9);
settextstyle(3,0,3);
outtextxy(x-90,y,"PHYSICS GAME");
}

void B(void)
{
cout<<"\n\n\n\n\t\tGENERAL INSTRUCTIONS"
    <<"\n\n\t* There will be 5 MCQ's asked to you."
    <<"\n\n\t* 5 marks will be given for each correct answer."
    <<"\n\n\t* No marks will be deducted for incorrect answer."
    <<"\n\n\t* This is a time based game and the time limit is 2 minutes."
    <<"\n\n\t* Total marks = 25"
    <<"\n\n\n\n\n\n\t\t\tPress 'ENTER' key to start.......";
   m:
   if(!kbhit())
   goto m;
}

void C(void)
{
int pt,i,pa=34,pb=65,pc=87,pd=99;
char ans;
randomize();
cout<<"\t\t\tYOUR TIME STARTS NOW";
for(i=0;i<5;i++)
{
a:
pt=random(10);
if(pt==pa||pt==pb||pt==pc||pt==pd)
goto a;
switch(pt)
{
case 1:
cout<<"\n\n\n\tQ What is the value of least count of a commonly used vernier scale ?";
cout<<"\n\t (A) 0.01 cm\t\t(B) 0.1 cm\t\t(C) 1 cm \n";
break;
case 2:
cout<<"\n\n\n\tQ How is zero error taken into account for getting true reading\n\t  in vernier caliper ?";
cout<<"\n\t (A) True reading = zero error - observed reading";
cout<<"\n\t (B) True reading = observed reading - zero error";
cout<<"\n\t (C) True reading = observed reading - zero error with proper sign";
break;
case 3:
cout<<"\n\n\n\tQ What is the other name of screw gauge ?";
cout<<"\n\t (A) macrometer\t\t(B) micrometer\t\t(C)frequency-meter";
break;
case 4:
cout<<"\n\n\n\tQ Are the units of least count and pitch same in screw gauge ?";
cout<<"\n\t (A) yes\t\t\t(B) no";
break;
case 5:
cout<<"\n\n\n\tQ What is a spherometer ?";
cout<<"\n\t (A) Instrument used to measure diameter of spherical surface";
cout<<"\n\t (B) Instrument used to measure radii of curvature of spherical surface";
cout<<"\n\t (C) Instrument used to measure radius of spherical surface";
break;
case 6:
cout<<"\n\n\n\tQ What is the SI unit of mass ?";
cout<<"\n\t (A) gram\t\t(B) kilometer\t\t(C) kilogram";
break;
case 7:
cout<<"\n\n\n\tQ Is kilogram weight {kg wt.} a unit of force or mass ?\n\t  How is kg wt. related to newton {N} ?";
cout<<"\n\t (A) force, 1kg wt.=9.8N\n\t (B) force, 1kg wt.=1N\n\t (C) mass, 1kg wt.=9.8N";
break;
case 8:
cout<<"\n\n\n\tQ Could one make a perfect observation without any error ?";
cout<<"\n\t (A) yes\t\t\t(B) no";
break;
case 9:
cout<<"\n\n\n\tQ What would be the value of g at centre of earth ?";
cout<<"\n\t (A) 1\t\t(B) 9.8\t\t(C) 0";
break;
case 0:
cout<<"\n\n\n\tQ What is the approximate length of a second's pendulum ?";
cout<<"\n\t (A) 100 m\t\t(B) 100 cm\t\t(C) 1 m";
break;
}
cout<<"\n\n\n\t\t\tENTER THE CORRECT OPTION\n";
cin>>ans;
switch(pt)
{
case 1:
if(ans=='a'||ans=='A')
marks+=5;
break;
case 2:
if(ans=='c'||ans=='C')
marks+=5;
break;
case 3:
if(ans=='b'||ans=='B')
marks+=5;
break;
case 4:
if(ans=='a'||ans=='A')
marks+=5;
break;
case 5:
if(ans=='b'||ans=='B')
marks+=5;
break;
case 6:
if(ans=='c'||ans=='C')
marks+=5;
break;
case 7:
if(ans=='a'||ans=='A')
marks+=5;
break;
case 8:
if(ans=='b'||ans=='B')
marks+=5;
break;
case 9:
if(ans=='c'||ans=='C')
marks+=5;
break;
case 0:
if(ans=='b'||ans=='B')
marks+=5;
break;
}
clrscr();
if(i==0)
pa=pt;
if(i==1)
pb=pt;
if(i==2)
pc=pt;
if(i==3)
pd=pt;
}

}



void main()
{


clrscr();

  time_t first,second;

int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode,"C:/TurboC3/BGI");

A();
delay(5000);
clearviewport();
B();
restorecrtmode();
clrscr();
first=time(NULL);
C();
second=time(NULL);
if(difftime(second,first)>120)
{ cout<<"\n\n\n\t\ttime limit exceeded, DISQUALIFIED\n"; }
else
{ cout<<"\n\n\n\t\tMarks = "<<marks; }
getch();


}