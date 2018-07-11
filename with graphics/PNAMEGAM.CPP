#include<conio.h>
#include<graphics.h>
#include<iostream.h>
#include<dos.h>
#include<stdio.h>
#include<process.h>
void main()
{
clrscr();
int gdriver = DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\\turboc3\\BGI");
	setcolor(78);
	setbkcolor(5);
	setfillstyle(7,1);

//displaying moving pranav
sound(786);
bar3d(100,100,300,300,10,1);
outtextxy(140,200,"created by PRANAV");
delay(900);
clearviewport();
bar3d(150,150,350,350,10,1);
outtextxy(190,250,"created by PRANAV");
delay(900);
clearviewport();
bar3d(200,200,400,400,10,1);
outtextxy(240,300,"created by PRANAV");
delay(900);
clearviewport();
bar3d(250,250,450,450,10,1);
outtextxy(290,350,"created by PRANAV");
delay(900);
clearviewport();
bar3d(300,300,500,500,10,1);
outtextxy(340,400,"created by PRANAV");
delay(900);
clearviewport();
bar3d(350,350,550,550,10,1);
outtextxy(390,450,"created by PRANAV");
delay(900);
clearviewport();
bar3d(400,400,600,600,10,1);
outtextxy(440,500,"created by PRANAV");
delay(900);
clearviewport();
bar3d(450,450,650,650,10,1);
outtextxy(490,550,"created by PRANAV");
delay(900);
clearviewport();
nosound();

//heading display
REENTER:
setcolor(14);
setbkcolor(9);
settextstyle(4,0,3);
int a=getmaxx()/2-100,b=getmaxy()/2-50;
outtextxy(a,b,"Know your Name");
delay(1800);
clearviewport();

//game intro display
setcolor(1);
setbkcolor(11);
settextstyle(5,0,3);
a-=50;
outtextxy(a,b,"Enter your name letter by letter");
b+=20;
a-=50;
outtextxy(a,b,"after entering the no. of letters in your name");
delay(1500);

//information feeding
int letters,m;
char la,lb,lc,ld,card;
setbkcolor(BLACK);
setcolor(YELLOW);
a+=50;
b-=20;
outtextxy(a,b,"Enter your name letter by letter");
b+=20;
a-=50;
outtextxy(a,b,"after entering the no. of letters in your name");
gotoxy(3,18);
cout<<"Number of digits in your name is ";
cin>>letters;
gotoxy(3,20);
cout<<" Letters are :- ";
for(m=1;m<=letters;m++)
{ cin>>la;
  cout<<"\t\t  ";
  if(m==1||m==4||m>=7)
  lb=la;
  else if(m==2||m==5)
  lc=la;
  else if(m==3)
  ld=la;}
clearviewport();

//display of loading
int s=1;
for(int n=1;n<=10;n++)
{   gotoxy(30,15);
    cout<<"loading... "<<n*10<<" %";
    if(n<30)
    s=n*100;
    else if(n<70)
    s=n*50;
    else
    s=n*300;
    delay(s);
    clearviewport(); }

//calculations for result and display(card)
setbkcolor(BLUE);
settextstyle(4,0,3);
outtextxy(50,25,"Results");
gotoxy(3,6);
cout<<"YOUR LUCKY CARD IS ";
if(letters%3==0)
{
card=3;
cout<<card<<" (HEART)";
}
else if(letters%2==0)
{
card=4;
cout<<card<<" (DIOMAND)";
}
else if(letters%5==0)
{
card=5;
cout<<card<<" (CLUB)";
}
else
{
card=6;
cout<<card<<" (SPADE)";
}

//calculations for result and display(number)
gotoxy(3,8);
delay(500);
cout<<"YOUR LUCKY NUMBER IS "<<ld+la;

//calculations for results and display(colour)
delay(500);
gotoxy(3,10);
cout<<"YOUR LUCKY COLOUR IS ";
if(lb%17==0)
{cout<<"BLACK";
setbkcolor(BLACK);}
else if(lb%13==0)
{cout<<"YELLOW";
setbkcolor(14);}
else if(lb%11==0)
{cout<<"WHITE";
setbkcolor(15);}
else if(lb%9==0)
{cout<<"RED";
setbkcolor(4);}
else if(lb%7==0)
{cout<<"DARK GREY";
setbkcolor(8);}
else if(lb%6==0)
{cout<<"PINK";
setbkcolor(5);}
else if(lb%5==0)
{cout<<"LIGHT BLUE";
setbkcolor(9); }
else if(lb%4==0)
{cout<<"GREEN";
setbkcolor(2);}
else
{cout<<"GOLDEN";
setbkcolor(6);}


//calculations and result for display(letter)
delay(2000);
setbkcolor(1);
gotoxy(3,12);
delay(400);
cout<<"YOUR LUCKY LETTER IS "<<lc;

//design and output of design
int x,y,z,exop;
	x=getmaxx();
	y=getmaxy();
	for(z=1;z<=800;z++)
	{
		delay(30);
		setcolor(z/90);
		arc(x,y,0,180,z);
	}

//proceed/exit statement
a+=130;
b-=20;
settextstyle(1,0,2);
setcolor(3);
outtextxy(a*2,b*2,"Proceed:- 1");
b+=20;
outtextxy(a*2,b*2,"Exit:- 0");
gotoxy(1,1);
cin>>exop;
if(exop==0)
exit(0);
else if(exop==1)
clearviewport();
x/=2;
y/=2;

//luck meter
setbkcolor(3);
setcolor(14);
outtextxy(x-70,y-200,"LUCK METER");
for(z=100;z<=150;z++)
{
setcolor(z/100);
arc(x,y,0,180,z);
}
line(x-100,y,x+100,y);
setcolor(14);
settextstyle(1,0,1);
outtextxy(x-125,y-25,"0");
outtextxy(x+115,y-25,"100");
outtextxy(x-10,y-125,"50");
setcolor(14);


//working of luck meter
if(lb%17==0||lb%13==0)
{line(x,y,x+100,y-5);
 outtextxy(x-150,y+100,"Your Luck Percentage is 98 %");}
else if(lb%11==0||lb%9==0)
{line(x,y,x+80,y-75);
 outtextxy(x-150,y+100,"Your Luck Percentage is 75 %");}
else if(lb%7==0||lb%6==0)
{line(x,y,x,y-105);
 outtextxy(x-150,y+100,"Your Luck Percentage is 50 %");}
else if(lb%5==0,lb%4==0)
{line(x,y,x-80,y-75);
 outtextxy(x-150,y+100,"Your Luck Percentage is 25 %");}
else
{line(x,y,x-100,y-5);
 outtextxy(x-150,y+100,"Your Luck Percentage is 5 %");}
delay(7000);
clearviewport();

//reenter
int re;
setbkcolor(4);
setcolor(1);
settextstyle(4,0,3);
outtextxy(x-150,y-30,"Want to enter another name ?");
delay(500);
outtextxy(x-100,y,"If yes, enter 1");
delay(500);
outtextxy(x-125,y+30,"Else enter 0 and go");
cin>>re;
if(re==1)
{
clearviewport();
goto REENTER;
}
else
exit(0);
getch();
}



