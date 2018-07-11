#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

union REGS in,out;

//MOUSE INITIALISATION
void initmouse()
{
 in.x.ax=0;
 int86(0x33,&in,&out);
 if(out.x.ax!=0)
 { printf("unable to initialise"); }
}

//MOUSE DISPLAY
void showmouse()
{
 in.x.ax=1;
 int86(0x33,&in,&out);
}

//HIDING THE MOUSE
void hidemouse()
{
 in.x.ax=2;
 int86(0x33,&in,&out);
}

//FACTORIAL
void factorial()
{
 int i,n,f=1;
 clrscr();
 printf("\n\t\t\tFACTORIAL OF A NUMBER\n\n\tENTER A NUMBER:- ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 f=f*i;
 printf("\n\n\tFACTORIAL OF %d IS %d",n,f);
 getch();
}

//TRANSPOSE
void transpose()
{
int a[5][5],i,j,n,m;
clrscr();
printf("\n\n\tENTER THE ORDER OF MATRIX:-\n\t");
scanf("%d",&n);
printf("\t");
scanf("%d",&m);
printf("\n\tENTER THE MATRIX:- \n");
for(i=0;i<n;i++)
for(j=0;j<m;j++)
{
printf("\tMAT[%d][%d]: ",i,j);
scanf("%d",&a[i][j]);
}
printf("\n\tTRANSPOSE OF INPUTED MATRIX IS:- \n\n");
for(j=0;j<m;j++)
{ for(i=0;i<n;i++)
  printf("\t%d",a[i][j]);
  printf("\n");
}
getch();
}

//PRIME
void primeno()
{
 int ir,fr,i,j,count;
 clrscr();
 printf("\n\t\t\tPRIME NUMBERS\n\n");
 printf("\tENTER THE RANGE IN WHICH YOU WISH TO SEARCH PRIME NUMBERS\n\n\t FROM: ");
 scanf("%d",&ir);
 printf("\t TO: ");
 scanf("%d",&fr);
 printf("\n\n  PRIME NUMBERS ARE:-\n  ");
  for(i=ir;i<=fr;i++)
   {
    count=0;
    for(j=1;j<=i;j++)
     {
      if(i%j==0)
       count++;
     }
     if(count==2)
     printf("%d,",i);
    }
    getch();
}

//FIBONNACI
void fibonacci()
{
int i,a=0,b=1,c,n;
clrscr();
printf("\n\t\t\tFIBONACCI SERIES\n\n\tENTER NUMBER OF TERMS:- ");
scanf("%d",&n);
printf("\nFIBONACCI SERIES IS AS FOLLOWS:-\n");
for(i=1;i<=n;i++)
 {
  printf("%d,",a);
  c=a+b;
  a=b;
  b=c;
 }
getch();
}

//ODD SQUARE
void oddsquare()
{
int n,i,s=0;
clrscr();
printf("\n\tINPUT AN INTEGER VALUE:- ");
scanf("%d",&n);
for(i=1;i<=2*n;i+=2)
s+=(i*i);
printf("\n\n\tSUM OF SQUARE OF FIRST N ODD INTEGERS IS: %d",s);
getch();
}

//EXIT
void gexit(void)
{
int x=getmaxx()/2,y=getmaxy()/2,a;

setbkcolor(0);
setcolor(14);
settextstyle(4,0,4);
for(a=1;a<=35;a++)
{ outtextxy(x-150,y-100,"Created by PRANAV");
  delay(300);
  cleardevice();
  y+=10;   }
exit(0);
}

//MENU
void menu()
{
int b,x,y,c,gd=DETECT,gm;
while(1)
{
c=0;
initgraph(&gd,&gm,"C:/TurboC3/BGI");
initmouse();
showmouse();
clearviewport();
setbkcolor(1);
setcolor(11);
rectangle(2,4,637,100);
setfillstyle(2,11);
floodfill(10,10,11);
setcolor(4);
settextstyle(0,0,6);
outtextxy(130,40," MENU");
setcolor(4);
setfillstyle(1,7);
bar3d(80,150,500,180,2,1);
bar3d(80,200,500,230,2,1);
bar3d(80,250,500,280,2,1);
bar3d(80,300,500,330,2,1);
bar3d(80,350,500,380,2,1);
bar3d(80,400,500,430,2,1);
settextstyle(1,0,2);
setcolor(1);
outtextxy(82,155," FACTORIAL OF A GIVEN NUMBER ");
outtextxy(82,205," TRANSPOSE OF A MATRIX");
outtextxy(82,255," PRIME NUMBER IN GIVEN RANGE");
outtextxy(82,305," FIBONNACI SERIES");
outtextxy(82,355," SQUARE OF FIRST N ODD INTEGERS");
outtextxy(82,405," EXIT");

while(c!=1)
{
in.x.ax=3;
int86(0x33,&in,&out);
b=out.x.bx;
x=out.x.cx;
y=out.x.dx;

//WORKING OF MENU 2
if(b==1 && x>80 && x<500)
{
if(y>150 && y<180)
 {
   setfillstyle(1,9);
   bar3d(80,150,500,180,2,1);
   setcolor(15);
   outtextxy(82,155," FACTORIAL OF A GIVEN NUMBER");
   delay(400);
   hidemouse();
   closegraph();
   restorecrtmode();
   factorial();
   c=1;
 }
if(y>200 && y<230)
 {
   setfillstyle(1,9);
   bar3d(80,200,500,230,2,1);
   setcolor(15);
   outtextxy(82,205," TRANSPOSE OF A MATRIX");
   delay(400);
   hidemouse();
   closegraph();
   restorecrtmode();
   transpose();
   c=1;
 }
if(y>250 && y<280)
 {
   setfillstyle(1,9);
   bar3d(80,250,500,280,2,1);
   setcolor(15);
   outtextxy(82,255," PRIME NUMBER IN GIVEN RANGE");
   delay(400);
   hidemouse();
   closegraph();
   restorecrtmode();
   primeno();
   c=1;
 }
if(y>300 && y<330)
 {
   setfillstyle(1,9);
   bar3d(80,300,500,330,2,1);
   setcolor(15);
   outtextxy(82,305," FIBONNACI SERIES");
   delay(400);
   hidemouse();
   closegraph();
   restorecrtmode();
   fibonacci();
   c=1;
 }
if(y>350 && y<380)
 {
   setfillstyle(1,9);
   bar3d(80,350,500,380,2,1);
   setcolor(15);
   outtextxy(82,355," SQUARE OF FIRST N ODD INTEGERS");
   delay(400);
   hidemouse();
   closegraph();
   restorecrtmode();
   oddsquare();
   c=1;
 }
if(y>400 && y<430)
 {
   setfillstyle(1,9);
   bar3d(80,400,500,430,2,1);
   setcolor(15);
   outtextxy(82,405," EXIT");
   delay(400);
   hidemouse();
   cleardevice();
   gexit();
 }
}
}
}
}

//MAIN FUNCTION
void main()
{
menu();
}
