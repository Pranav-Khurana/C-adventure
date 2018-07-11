#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<iostream.h>
#include<process.h>
#include<stdlib.h>
void main()
{
clrscr();
void gexit();

//welcome
//_setcursortype(_NOCURSOR);
gotoxy(35,13);
textattr(14+BLINK);
cprintf("WELCOME!");
gotoxy(31,16);
textattr(2);
cprintf("created by Pranav");
delay(4500);
sound(454);
clrscr();
delay(500);
nosound();

//initializing graphics
int gdriver = DETECT,gmode;
   initgraph(&gdriver,&gmode,"C:/TurboC3/BGI");

//entry 1
int a,b,e,f;
a=getmaxx()/2;
b=getmaxy()/2;
setbkcolor(11);
setcolor(1);
settextstyle(10,0,1);
outtextxy(a-100,b-20,"Tic-Tac-Toe");
delay(1500);

//entry 2
int x,w,y,z,v,u,i,c,d;
x=a*2;y=b*2;w=0;z=u=180;v=360;c=90;d=270;
for(i=1;i<=15;i++)
{
setfillstyle(1,i);
pieslice(a,y,w,z,160);
pieslice(0,y,w,z,160);
pieslice(x,y,w,z,160);
pieslice(0,b,w,v,79);
pieslice(0,0,u,v,160);
pieslice(a,0,u,v,160);
pieslice(x,0,u,v,160);
pieslice(x,b,c,d,79);
w+=6;z-=6;u+=6;v-=6;c+=6;d-=6;
sound(876);
delay(20);
nosound();
delay(980);
}
delay(980);
setcolor(11);
outtextxy(a-100,b-20,"Tic-Tac-Toe");
setcolor(2);
delay(900);
settextstyle(4,0,4);
outtextxy(a-220,b-20,"Enter '1' to play & '0' to exit.");

//exit and start working
replay:
int ex,bb=50,g[5],j[4],ans[8],ansb[8],pp,em,draw;
cin>>ex;
if(ex==0)
{gexit();}
delay(200);
setfillstyle(3,4);
for(i=0;i<=30;i++)
 { bar(0,0,680,bb);
   bb+=15;
   delay(50);  }
setcolor(14);
setbkcolor(0);
clearviewport();

//game display
settextstyle(1,0,1);
setcolor(15);
outtextxy(50,50,"ENTER THE NUMBER ASSIGNED TO THE POSITION/LOCATION");
outtextxy(50,70,"WHERE YOU WISH TO PUT * OR 0");
settextstyle(4,0,4);
setfillstyle(1,1);
line(a,b-50,a,b+100);
line(a+50,b-50,a+50,b+100);
line(a-50,b,a+100,b);
line(a-50,b+50,a+100,b+50);
setcolor(2);
outtextxy(a-30,b-40,"1");
outtextxy(a-30,b+10,"2");
outtextxy(a-30,b+60,"3");
outtextxy(a+20,b-40,"4");
outtextxy(a+20,b+10,"5");
outtextxy(a+20,b+60,"6");
outtextxy(a+70,b-40,"7");
outtextxy(a+70,b+10,"8");
outtextxy(a+70,b+60,"9");

//the assignment loop
for(i=0;i<8;i++)
{ ans[i]=0;
  ansb[i]=0;
}

//THE for loop - part 1
gotoxy(1,1);
for(i=0;i<5;i++)
{
 cin>>g[i];
 switch(g[i])
   {
    case 1:
    setcolor(BLACK); outtextxy(a-30,b-40,"1");
    setcolor(14);outtextxy(a-30,b-40,"*");
    ans[0]+=1;ans[1]+=1;ans[2]+=1;
    break;
    case 2:
    setcolor(BLACK); outtextxy(a-30,b+10,"2");
    setcolor(14);outtextxy(a-30,b+10,"*");
    ans[0]+=1;ans[3]+=1;
    break;
    case 3:
    setcolor(BLACK); outtextxy(a-30,b+60,"3");
    setcolor(14);outtextxy(a-30,b+60,"*");
    ans[0]+=1;ans[4]+=1;ans[5]+=1;
    break;
    case 4:
    setcolor(BLACK); outtextxy(a+20,b-40,"4");
    setcolor(14);outtextxy(a+20,b-40,"*");
    ans[2]+=1;ans[6]+=1;
    break;
    case 5:
    setcolor(BLACK); outtextxy(a+20,b+10,"5");
    setcolor(14);outtextxy(a+20,b+10,"*");
    ans[1]+=1;ans[3]+=1;ans[5]+=1;ans[6]+=1;
    break;
    case 6:
    setcolor(BLACK); outtextxy(a+20,b+60,"6");
    setcolor(14);outtextxy(a+20,b+60,"*");
    ans[4]+=1;ans[6]+=1;
    break;
    case 7:
    setcolor(BLACK); outtextxy(a+70,b-40,"7");
    setcolor(14);outtextxy(a+70,b-40,"*");
    ans[2]+=1;ans[5]+=1;ans[7]+=1;
    break;
    case 8:
    setcolor(BLACK); outtextxy(a+70,b+10,"8");
    setcolor(14);outtextxy(a+70,b+10,"*");
    ans[3]+=1;ans[7]+=1;
    break;
    case 9:
    setcolor(BLACK); outtextxy(a+70,b+60,"9");
    setcolor(14);outtextxy(a+70,b+60,"*");
    ans[1]+=1;ans[4]+=1;ans[7]+=1;
    break;
    default:
    setcolor(4);
    outtextxy(a-50,b+100,"Wrong Input, Game Ends");
    delay(1000);
    setcolor(0);
    outtextxy(a-50,b+100,"Wrong Input, Game Ends");
    gexit();
   }

//THE for loop - part 2
 for(pp=0;pp<8;pp++)
 { if(ans[pp]==3)
   {  draw=5;
      outtextxy(a-50,b+100,"* Wins");
      goto exitloop2;
   }
 }
 if(i==4)
 {goto exitloop1;}
 setcolor(15);
 outtextxy(a-50,b+100,"Turn Passes");
 delay(3000);
 setcolor(0);
 outtextxy(a-50,b+100,"Turn Passes");
 cin>>j[i];

//THE for loop - part 3
 switch(j[i])
   {
    case 1:
    setcolor(BLACK); outtextxy(a-30,b-40,"1");
    setcolor(15);outtextxy(a-30,b-40,"0");
    ansb[0]+=1;ansb[1]+=1;ansb[2]+=1;
    break;
    case 2:
    setcolor(BLACK); outtextxy(a-30,b+10,"2");
    setcolor(15);outtextxy(a-30,b+10,"0");
    ansb[0]+=1;ansb[3]+=1;
    break;
    case 3:
    setcolor(BLACK); outtextxy(a-30,b+60,"3");
    setcolor(15);outtextxy(a-30,b+60,"0");
    ansb[0]+=1;ansb[4]+=1;ansb[5]+=1;
    break;
    case 4:
    setcolor(BLACK); outtextxy(a+20,b-40,"4");
    setcolor(15);outtextxy(a+20,b-40,"0");
    ansb[2]+=1;ansb[6]+=1;
    break;
    case 5:
    setcolor(BLACK); outtextxy(a+20,b+10,"5");
    setcolor(15);outtextxy(a+20,b+10,"0");
    ansb[1]+=1;ansb[3]+=1;ansb[5]+=1;ansb[6]+=1;
    break;
    case 6:
    setcolor(BLACK); outtextxy(a+20,b+60,"6");
    setcolor(15);outtextxy(a+20,b+60,"0");
    ansb[4]+=1;ansb[6]+=1;
    break;
    case 7:
    setcolor(BLACK); outtextxy(a+70,b-40,"7");
    setcolor(15);outtextxy(a+70,b-40,"0");
    ansb[2]+=1;ansb[5]+=1;ansb[7]+=1;
    break;
    case 8:
    setcolor(BLACK); outtextxy(a+70,b+10,"8");
    setcolor(15);outtextxy(a+70,b+10,"0");
    ansb[3]+=1;ansb[7]+=1;
    break;
    case 9:
    setcolor(BLACK); outtextxy(a+70,b+60,"9");
    setcolor(15);outtextxy(a+70,b+60,"0");
    ansb[1]+=1;ansb[4]+=1;ansb[7]+=1;
    break;
    default:
    setcolor(4);
    outtextxy(a-50,b+100,"Wrong Input, Game Ends");
    delay(1000);
    setcolor(0);
    outtextxy(a-50,b+100,"Wrong Input, Game Ends");
    gexit();
    }
 for(pp=0;pp<8;pp++)
 { if(ansb[pp]==3)
   {  draw=5;
      outtextxy(a-50,b+100,"0 Wins");
      goto exitloop2;
   }
 }
 setcolor(14);
 outtextxy(a-50,b+100,"Turn Passes");
 delay(3000);
 setcolor(0);
 outtextxy(a-50,b+100,"Turn Passes");
 exitloop1:
}
exitloop2:
if(draw!=5)
outtextxy(a-50,b+100,"Draw");
delay(5000);
clearviewport();
setcolor(1);
setbkcolor(14);
settextstyle(4,0,3);
outtextxy(a,b,"Play Again '1'");
outtextxy(a,b+50,"Exit '0'");
goto replay;
getch();
}

void gexit(void)
{
int x=getmaxx()/2,y=getmaxy()/2;
setbkcolor(0);
setcolor(14);
settextstyle(4,0,4);
for(int a=1;a<=35;a++)
{ outtextxy(x-150,y-100,"Created by PRANAV");
  delay(300);
  cleardevice();
  y+=10;   }
exit(0);
}

