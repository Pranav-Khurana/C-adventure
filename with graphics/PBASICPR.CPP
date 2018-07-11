#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<dos.h>
void main()
{
clrscr();

//graphics mode entry
int gdriver = DETECT,gmode;
   initgraph(&gdriver,&gmode,"C:/TurboC3/BGI");

//declaration of variables
int x=getmaxx()/2,y=getmaxy()/2,ma,mb=1,mc=1,e;
int a,m,b,n,z,c,d,fa=0,fb=1,fc,fn,fi,rn,rr,rrev=0,sn,sr,ssum=0;
char ca;

//page 1
setbkcolor(9);
settextstyle(3,0,3);
textattr(15+BLINK);
outtextxy(x-200,y,"WANT TO SEE BASIC C++ PROGRAMS");
n=y+15;
for(b=1;b<=3;b++)
{ m=x-200; n+=2;
for(a=1;a<=14;a++)
{ delay(160);
  if(a==9)
  setcolor(1);
  else
  setcolor(a);
  outtextxy(m,n,"-");
  m+=30;
}}

//page 1 exit
delay(4000);
z=350;
for(a=1;a<=11;a++)
{
sound(876);
setcolor(a);
setfillstyle(a,a);
fillellipse(x,y,z,z);
z-=20;
nosound();
delay(900);
}
settextstyle(1,0,4);
setcolor(15);
outtextxy(x-120,y-50,"IF YES ENTER 1");
outtextxy(x-120,y+30,"IF NOT ENTER 0");
cin>>c;
clearviewport();

//page 1 exit working
AGAIN:
setbkcolor(4);
setcolor(9);
settextstyle(4,0,4);
if(c==0)
{
END:
setbkcolor(4);
setcolor(9);
settextstyle(4,0,4);
for(a=1;a<=35;a++)
{ outtextxy(x-150,y-100,"Created by PRANAV");
  delay(300);
  cleardevice();
  y+=10;   }
exit(0); }

//page 2
else
{
setcolor(1);
outtextxy(x-250,y-150,"Enter the code of program from");
outtextxy(x-250,y-120,"the option of programs given below");
setcolor(14);
settextstyle(3,0,2);
outtextxy(x-300,y-50,"1. Display Fibonacci Series (4)");
setcolor(15);
outtextxy(x-300,y-25,"2. Display Reverse of a no. (9)");
setcolor(13);
outtextxy(x-300,y,"3. Display Sum of digits of a no. (3)");
setcolor(12);
outtextxy(x-300,y+25,"4. Display Factorial of a no. (7)");
setcolor(9);
outtextxy(x-300,y+50,"5. Convert capital letters as small and vice versa (5)");
}

//page 3(fibonacci series)
cin>>d;
clearviewport();
setbkcolor(0);
if(d==4)
{  gotoxy(5,5);
   cout<<"Enter the no. of terms to display : ";
   cin>>fn;
   gotoxy(5,8);
   cout<<"Fibonacci series is as follows :-\n\n";
   cout<<"\t"<<fa<<"\n\t"<<fb<<"\n\t";
   for(fi=3;fi<=fn;fi++)
   { fc=fb+fa;
     cout<<fc<<"\n\t";
     fa=fb;
     fb=fc;  }
   delay(4000);
}

//page 3(reverse no.)
else if(d==9)
{  gotoxy(5,5);
   cout<<"Enter an integer : ";
   cin>>rn;
   while(rn>0)
   { rr=rn%10;
     rrev=rrev*10+rr;
     rn=rn/10;     }
   gotoxy(5,8);
   cout<<"Reverse = ";
   cout<<rrev;
   delay(4000);
}

//page 3(sum of digits)
else if(d==3)
{  gotoxy(5,5);
   cout<<"Enter an integer : ";
   cin>>sn;
   while(sn>0)
   { sr=sn%10;
     ssum=ssum+sr;
     sn/=10; }
   gotoxy(5,8);
   cout<<"Sum = "<<ssum;
   delay(4000);
}

//page 3(factorial)
else if(d==7)
{  gotoxy(5,5);
   cout<<"Enter an integer : ";
   cin>>ma;
   while(mb<=ma)
   { mc*=mb;
     mb++;   }
   gotoxy(5,8);
   cout<<"Factorial = "<<mc;
   delay(4000);
}

//page 3(alphabet)
else if(d==5)
{  gotoxy(5,5);
   cout<<"Enter an alphabet : ";
   cin>>ca;
   if(ca>=65&&ca<=90)
   {  ca+=32; }
   else if(ca>=97&&ca<=122)
   {  ca-=32; }
   gotoxy(5,8);
   cout<<"Answer = "<<ca;
   delay(4000);
}

//page 4
gotoxy(1,1);
clearviewport();
setbkcolor(1);
setcolor(14);
outtextxy(x-50,y,"Try another :- 1");
outtextxy(x-25,y+30,"Exit :- 0");
cin>>e;
clearviewport();
if(e==1)
{ goto AGAIN; }
else if(e==0)
{ goto END; }
getch();
}