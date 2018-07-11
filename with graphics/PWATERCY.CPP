#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>

void enterexit(int cal=10)
{
int y=160,i,z=200;
settextstyle(1,0,3);
for(i=0;i<=30;i++)
{
setcolor(11);
setfillstyle(1,11);
pieslice(180,y-10,10,180,20);
pieslice(230,y,15,185,40);
pieslice(210,y,5,175,35);
pieslice(265,y,5,99,25);
pieslice(155,y,0,360,25);
pieslice(180,y,180,360,35);
pieslice(210,y+20,175,360,25);
pieslice(265,y,99,360,25);
pieslice(230,y,99,360,35);
fillellipse(230,y,78,20);

pieslice(250,z-10,10,180,20);
pieslice(300,z,15,185,40);
pieslice(280,z,5,175,35);
pieslice(335,z,5,99,25);
pieslice(225,z,0,360,25);
pieslice(250,z,180,360,35);
pieslice(280,z+20,175,360,25);
pieslice(335,z,99,360,25);
pieslice(300,z,99,360,35);
fillellipse(300,z,78,20);

if(cal==5)
{
setcolor(0);
outtextxy(180,y-20,"WATER");
outtextxy(250,z-20,"CYCLE");
delay(350);
}

if(cal==10)
{
setcolor(0);
outtextxy(160,y-20,"created by");
outtextxy(250,z-20,"PRANAV");
delay(350);
}

setfillstyle(1,0);
pieslice(180,y-10,10,180,20);
pieslice(230,y,15,185,40);
pieslice(210,y,5,175,35);
pieslice(265,y,5,99,25);
pieslice(155,y,0,360,25);
pieslice(180,y,180,360,35);
pieslice(210,y+20,175,360,25);
pieslice(265,y,99,360,25);
pieslice(230,y,99,360,35);
fillellipse(230,y,78,20);

pieslice(250,z-10,10,180,20);
pieslice(300,z,15,185,40);
pieslice(280,z,5,175,35);
pieslice(335,z,5,99,25);
pieslice(225,z,0,360,25);
pieslice(250,z,180,360,35);
pieslice(280,z+20,175,360,25);
pieslice(335,z,99,360,25);
pieslice(300,z,99,360,35);
fillellipse(300,z,78,20);

y-=8;
z+=10;
}

settextstyle(3,0,2);
}







void cloud()
{
setcolor(14);
outtextxy(150,30,"The Cycle Of Water Starts With Rain....");
setcolor(11);
setfillstyle(1,11);
int x=120,a;
for(a=0;a<3;a++)
{
pieslice(x-50,85,10,180,20);
pieslice(x,100,15,185,40);
pieslice(x-20,100,5,175,35);
pieslice(x+35,100,5,99,25);
pieslice(x-75,100,0,360,25);
pieslice(x-50,100,180,360,35);
pieslice(x-20,120,175,360,25);
pieslice(x+35,100,99,360,25);
pieslice(x,100,99,360,35);
fillellipse(x,100,78,20);
x+=200;
}
setcolor(10);
setfillstyle(9,10);
fillellipse(getmaxx()/2,getmaxy(),600,150);
}





void rain()
{
setcolor(9);
setfillstyle(1,1);
randomize();
int m,n,a,p;
for(a=0;a<=150;a++)
{
again:
m=random(400);
p=random(3);
if(m<135||p==0)
goto again;
n=random(650);
pieslice(n,m,0,360,p);
sound(1954);
delay(5);
nosound();
delay(50);
}
}





void riverframe()
{
setcolor(14);
outtextxy(getmaxx()/2-200,getmaxy()/2-80,"And Flowing Through River In The Sea It Drains.....");
setcolor(3);
setfillstyle(9,2);
fillellipse(100,getmaxy()-100,30,175);
fillellipse(50,getmaxy()-150,30,75);
setcolor(2);
setfillstyle(9,10);
fillellipse(getmaxx(),getmaxy(),230,170);
fillellipse(getmaxx()/2,getmaxy(),600,150);
setcolor(14);
setfillstyle(1,14);
pieslice(580,50,0,360,40);
setcolor(1);
setfillstyle(1,1);
fillellipse(0,getmaxy(),450,130);
setcolor(2);
setfillstyle(9,10);
fillellipse(0,getmaxy(),380,60);
setcolor(1);
setfillstyle(1,1);
fillellipse(getmaxx(),getmaxy(),300,150);
}





void river()
{
setcolor(3);
int m,n,p,i,j,a,b,c;
for(i=0;i<25;i++)
{
m=random(200);
p=random(20);
againa:
n=random(getmaxy());
if(n>395||n<370)
goto againa;
sound(8765);
arc(m,n,15,90,p);
delay(190);
nosound();
}
for(j=0;j<50;j++)
{
againb:
a=random(380);
b=random(getmaxy());
if(b>425||b<400)
{if(m<230)
{goto againb;
}}
c=random(20);
sound(8765);
arc(a,b,15,70,c);
delay(190);
nosound();
}
int k=300,l=150,u=0;
for(i=0;i<=50;i++)
{
u++;
setcolor(9);
ellipse(getmaxx(),getmaxy(),0,360,k,l);
ellipse(getmaxx(),getmaxy(),0,360,k-50,l-25);
ellipse(getmaxx(),getmaxy(),0,360,k-75,l-40);
delay(100);
setcolor(1);
ellipse(getmaxx(),getmaxy(),0,360,k,l);
ellipse(getmaxx(),getmaxy(),0,360,k-50,l-25);
ellipse(getmaxx(),getmaxy(),0,360,k-75,l-40);
if(u<=10)
{k-=6;
 l-=3;}
if(u>10||u<20)
{k+=2;
 l+=1;}
if(u==20)
{u=0;}
}
setcolor(0);
outtextxy(getmaxx()/2-200,getmaxy()/2-80,"And Flowing Through River In The Sea It Drains.....");
}








void vapour()
{
setcolor(14);
outtextxy(getmaxx()/2-200,getmaxy()/2-80,"Then In Gaseous State It Is The Time To Turn....");
setcolor(WHITE);
int i,m,n,p,o;
for(i=0;i<=25;i++)
{
again:
m=random(getmaxx());
n=random(getmaxy());
p=random(15);
if(m>500)
{if(n>100||n<450)
 {if(p!=0)
  {o=n+p;
   line(m,n,m,o);}}}
else
goto again;
delay(90);
}
delay(3500);
setcolor(0);
outtextxy(getmaxx()/2-200,getmaxy()/2-80,"Then In Gaseous State It Is The Time To Turn....");
setcolor(14);
outtextxy(getmaxx()/2-200,getmaxy()/2-80,"As The Heat Of Sun Will Make Water Burn.....");
delay(3500);
setcolor(0);
outtextxy(getmaxx()/2-200,getmaxy()/2-80,"As The Heat Of Sun Will Make Water Burn.....");
}







void cloudb()
{
setcolor(14);
outtextxy(getmaxx()/2-200,getmaxy()/2-80,"This Will Make Water Rise In The Sky.......");
int i,x=400;
for(i=0;i<=40;i++)
{
setcolor(11);
setfillstyle(1,11);
pieslice(x-50,85,10,180,20);
pieslice(x,100,15,185,40);
pieslice(x-20,100,5,175,35);
pieslice(x+35,100,5,99,25);
pieslice(x-75,100,0,360,25);
pieslice(x-50,100,180,360,35);
pieslice(x-20,120,175,360,25);
pieslice(x+35,100,99,360,25);
pieslice(x,100,99,360,35);
fillellipse(x,100,78,20);
delay(300);
setcolor(0);
setfillstyle(1,0);
pieslice(x-50,85,10,180,20);
pieslice(x,100,15,185,40);
pieslice(x-20,100,5,175,35);
pieslice(x+35,100,5,99,25);
pieslice(x-75,100,0,360,25);
pieslice(x-50,100,180,360,35);
pieslice(x-20,120,175,360,25);
pieslice(x+35,100,99,360,25);
pieslice(x,100,99,360,35);
fillellipse(x,100,78,20);
x-=5;
}
setcolor(0);
outtextxy(getmaxx()/2-200,getmaxy()/2-80,"This Will Make Water Rise In The Sky.......");
setcolor(14);
outtextxy(getmaxx()/2-200,getmaxy()/2-80,"In The Form Of Cloud It Will Fly.......");
x=195;
for(i=0;i<=60;i++)
{
setcolor(11);
setfillstyle(1,11);
pieslice(x-50,85,10,180,20);
pieslice(x,100,15,185,40);
pieslice(x-20,100,5,175,35);
pieslice(x+35,100,5,99,25);
pieslice(x-75,100,0,360,25);
pieslice(x-50,100,180,360,35);
pieslice(x-20,120,175,360,25);
pieslice(x+35,100,99,360,25);
pieslice(x,100,99,360,35);
fillellipse(x,100,78,20);
delay(300);
setcolor(0);
setfillstyle(1,0);
pieslice(x-50,85,10,180,20);
pieslice(x,100,15,185,40);
pieslice(x-20,100,5,175,35);
pieslice(x+35,100,5,99,25);
pieslice(x-75,100,0,360,25);
pieslice(x-50,100,180,360,35);
pieslice(x-20,120,175,360,25);
pieslice(x+35,100,99,360,25);
pieslice(x,100,99,360,35);
fillellipse(x,100,78,20);
x-=5;
}
setcolor(0);
outtextxy(getmaxx()/2-200,getmaxy()/2-80,"In The Form Of Cloud It Will Fly.......");
}



void main()
{
clrscr();
int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode,"C:/TurboC3/BGI");
int cal;
cal=5;
enterexit(cal);
clearviewport();
cloud();
delay(300);
rain();
delay(900);
clearviewport();
riverframe();
river();
vapour();
cloudb();
setcolor(14);
outtextxy(getmaxx()/2-200,getmaxy()/2-80,"To The Location Which Is Dry.......");
delay(4000);
setcolor(0);
outtextxy(getmaxx()/2-200,getmaxy()/2-80,"To The Location Which Is Dry.......");
setcolor(14);
outtextxy(getmaxx()/2-200,getmaxy()/2-80,"Then This All Will Start Again.....");
delay(4000);
setcolor(0);
outtextxy(getmaxx()/2-200,getmaxy()/2-80,"Then This All Will Start Again.....");
clearviewport();
cloud();
delay(4000);
rain();
clearviewport();
enterexit();
setcolor(14);
outtextxy(getmaxx()/2-100,getmaxy()/2,"THANK YOU !!!");
getch();
}