#include<conio.h>
#include<graphics.h>
#include<iostream.h>
#include<dos.h>
#include<stdio.h>
void main()
{
clrscr();
int gdriver = DETECT,gmode;
	initgraph(&gdriver, &gmode, "C:\\TC\\bgi");
int a;
for(a=0;a<=getmaxcolor();a++)
{ cout<<"\n\t"<<a;
  setbkcolor(a);
  delay(2000); }
getch();
}
