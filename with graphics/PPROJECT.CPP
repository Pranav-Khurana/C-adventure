//LIST OF HEADER FILES USED
#include<fstream.h>
#include<graphics.h>
#include<string.h>
#include<conio.h>
#include<time.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>


//GLOBAL DECLARATION OF VARIABLES FOR MOUSE
union REGS in,out;

//GLOBALLY MAKING THE CURSOR VISIBLE
//---------------------------------------------------------------------------------
//INITIALISING MOUSE
void initmouse()
{
 in.x.ax=0;
 int86(0x33,&in,&out);
 if(out.x.ax!=0)
 { cout<<"unable to initialise"; }
}

//----------------------------------------------------------------------------------
//MOUSE DISPLAY
void showmouse()
{
 in.x.ax=1;
 int86(0x33,&in,&out);
}

//----------------------------------------------------------------------------------
//HIDING THE MOUSE
void hidemouse()
{
 in.x.ax=2;
 int86(0x33,&in,&out);
}


//--------------------------------------------------------------------------------
//CLASS FOR THE PROGRAM(administrator)
class ADMINISTRATOR
{
//********************************************************************************
//DATA MEMBERS
int plno, efare, xfare, page, ptktno;
char dest[50],from[50], pname[50], pgen[10], op;


public:

//*********************************************************************************
//MEMBER FUNCTION TO ADD NEW FLIGHT RECORDS
void inputf()
{

//THE DISPLAY WORK
setcolor(14);
rectangle(20,20,619,459);
setcolor(4);
rectangle(10,10,629,469);
setcolor(9);
setbkcolor(1);
setfillstyle(1,7);
bar3d(80,150,280,180,2,1);
bar3d(80,200,280,230,2,1);
bar3d(80,250,280,280,2,1);
bar3d(80,300,150,330,2,1);
bar3d(281,300,330,330,2,1);
settextstyle(1,0,2);
setcolor(1);
outtextxy(82,155," FLIGHT NO. :-");
outtextxy(82,205," EXECUTIVE FARE:-");
outtextxy(82,255," ECONOMIC FARE :-");
outtextxy(82,305," FROM ");
outtextxy(283,305," TO ");

//THE INPUT WORK
gotoxy(37,11);
cin>>plno;
gotoxy(37,14);
cin>>xfare;
gotoxy(37,17);
cin>>efare;
gotoxy(21,20);
gets(from);
gotoxy(44,20);
gets(dest);
}

//*********************************************************************************
//MEMBER FUNCTION TO EDIT DATA OF FLIGHT
void editf()
{
setcolor(15);
outtextxy(40,40,"DETAILS OF FLIGHT TO BE MODIFIED ARE");

//THE DISPLAY WORK
setcolor(14);
rectangle(20,20,619,459);
setcolor(4);
rectangle(10,10,629,469);
setcolor(9);
setbkcolor(1);
setfillstyle(1,7);
bar3d(80,150,280,180,2,1);
bar3d(80,200,280,230,2,1);
bar3d(80,250,280,280,2,1);
bar3d(80,300,150,330,2,1);
bar3d(281,300,330,330,2,1);
settextstyle(1,0,2);
setcolor(1);
outtextxy(82,155," FLIGHT NO. :-");
outtextxy(82,205," EXECUTIVE FARE:-");
outtextxy(82,255," ECONOMIC FARE :-");
outtextxy(82,305," FROM ");
outtextxy(283,305," TO ");

//DISPLAY OF EARLIER DATA
gotoxy(37,11);
cout<<plno;
gotoxy(37,14);
cout<<xfare;
gotoxy(37,17);
cout<<efare;
gotoxy(21,20);
puts(from);
gotoxy(44,20);
puts(dest);
getch();

//THE DISPLAY WORK
clearviewport();
setcolor(15);
outtextxy(40,40,"ENTER THE CHANGED FLIGHT DETAILS");
setcolor(14);
rectangle(20,20,619,459);
setcolor(4);
rectangle(10,10,629,469);
setcolor(9);
setbkcolor(1);
setfillstyle(1,7);
bar3d(80,150,280,180,2,1);
bar3d(80,200,280,230,2,1);
bar3d(80,250,280,280,2,1);
bar3d(80,300,150,330,2,1);
bar3d(281,300,330,330,2,1);
settextstyle(1,0,2);
setcolor(1);
outtextxy(82,155," FLIGHT NO. :-");
outtextxy(82,205," EXECUTIVE FARE:-");
outtextxy(82,255," ECONOMIC FARE :-");
outtextxy(82,305," FROM ");
outtextxy(283,305," TO ");

//THE INPUT WORK
gotoxy(37,11);
cin>>plno;
gotoxy(37,14);
cin>>xfare;
gotoxy(37,17);
cin>>efare;
gotoxy(21,20);
gets(from);
gotoxy(44,20);
gets(dest);
}

//********************************************************************************
//MEMBER FUNCTION TO RETURN FLIGHT NO.
int retplnof()
{
return plno;
}

//*********************************************************************************
//MEMBER FUNCTION TO RETURN TICKET NO.
int rettktno()
{
return ptktno;
}


//*********************************************************************************
//MEMBER FUNCTION TO SHOW FLIGHT RECORDS
void outputf(int a)
{

//THE DISPLAY WORK
setbkcolor(0);
setcolor(1);
rectangle(50,50,590,400);
floodfill(625,460,1);
setcolor(15);
line(130,50,130,400);
line(50,70,590,70);
line(250,50,250,400);
line(360,50,360,400);
line(480,50,480,400);
settextstyle(2,0,5);
setcolor(14);
outtextxy(54,52,"FLIGHT NO.");
outtextxy(174,52,"FROM");
outtextxy(304,52,"TO");
outtextxy(364,52,"EXECUTIVE FARE");
outtextxy(484,52,"ECONOMIC FARE");
gotoxy(10,a);
cout<<plno;
gotoxy(20,a);
puts(from);
gotoxy(35,a);
puts(dest);
gotoxy(50,a);
cout<<xfare;
gotoxy(65,a);
cout<<efare;
settextstyle(3,0,3);
outtextxy(55,405,"PRESS ANY KEY TO CONTINUE.......");
}

//********************************************************************************
//MEMBER FUNCTION TO GET BOOKING DETAILS
void enterdetails()
{
//FUNCTION VARIABLES
int r ;

//THE DISPLAY WORK
setcolor(14);
rectangle(20,20,619,459);
setcolor(4);
rectangle(10,10,629,469);
setcolor(9);
setbkcolor(1);
setfillstyle(1,7);
bar3d(80,150,320,180,2,1);
bar3d(80,200,320,230,2,1);
bar3d(80,250,320,280,2,1);
bar3d(80,300,320,330,2,1);
bar3d(80,360,320,390,2,1);
settextstyle(1,0,2);
setcolor(1);
outtextxy(82,155," PASSENGER NAME :-");
outtextxy(82,205," PASSENGER AGE :-");
outtextxy(82,255," PASSENGER GENDER :-");
outtextxy(82,305," TRAVEL CLASS(E/X) :-");
outtextxy(82,365," TICKET NUMBER IS :-");
settextstyle(2,0,5);
setcolor(15);
outtextxy(82,335," NOTE:- E FOR ECONOMIC CLASS, X FOR EXECUTIVE CLASS");

//TICKET GENERATOR
randomize();
r=random(999);
if(r==0)
{ r=999; }

//THE INPUT WORK
gotoxy(43,11);
gets(pname);
gotoxy(43,14);
cin>>page;
gotoxy(43,17);
gets(pgen);
gotoxy(43,20);
cin>>op;
ptktno=r;
gotoxy(43,24);
cout<<ptktno;


getch();
}

//*********************************************************************************************
//MEMBER FUNCTION FOR TICKET GENERATION(A)
char generatebook()
{
clearviewport();
setbkcolor(0);
setcolor(1);
rectangle(50,50,590,400);
floodfill(625,460,1);
setlinestyle(0,1,3);
setcolor(14);
rectangle(55,55,585,395);
setlinestyle(2,1,2);
setcolor(15);
rectangle(60,60,580,390);
line(60,120,580,120);
line(60,320,580,320);
gotoxy(10,6);
cout<<"TICKET NO. "<<ptktno;
gotoxy(15,13);
cout<<"PASSANGER NAME :"<<pname;
gotoxy(15,16);
cout<<"GENDER :";
puts(pgen);
gotoxy(15,19);
cout<<"AGE :"<<page;
return op;
}

//*********************************************************************************************
//MEMBER FUNCTION FOR TICKET GENERATION(B)
void generateflight(char fare)
{
setbkcolor(0);
setcolor(1);
rectangle(50,50,590,400);
floodfill(625,460,1);
setlinestyle(0,1,3);
setcolor(14);
rectangle(55,55,585,395);
setlinestyle(2,1,2);
setcolor(15);
rectangle(60,60,580,390);
line(60,120,580,120);
line(60,320,580,320);
gotoxy(55,6);
cout<<"FLIGHT NO. "<<plno;
gotoxy(15,10);
cout<<"FROM   "<<from<<"   TO   "<<dest;
if(fare=='E'||fare=='e')
{
gotoxy(35,23);
cout<<"FARE : Rs "<<efare<<"/-";
}
if(fare=='X'||fare=='x')
{
gotoxy(35,23);
cout<<"FARE : Rs "<<xfare<<"/-";
}
settextstyle(3,0,3);
outtextxy(55,405,"PRESS ANY KEY TO CONTINUE.......");
getch();
setlinestyle(0,0,0);

}

//**********************************************************************************
//MEMBER FUNCTION FOR MODIFICATION(PASSANGER)
void Spasmod()
{
setcolor(14);
rectangle(20,20,619,459);
setcolor(4);
rectangle(10,10,629,469);
setcolor(9);
setbkcolor(1);
setfillstyle(1,7);
bar3d(80,150,320,180,2,1);
bar3d(80,200,320,230,2,1);
bar3d(80,250,320,280,2,1);
bar3d(80,300,320,330,2,1);
settextstyle(1,0,2);
setcolor(1);
outtextxy(82,155," PASSENGER NAME :-");
outtextxy(82,205," PASSENGER AGE :-");
outtextxy(82,255," PASSENGER GENDER :-");
outtextxy(82,305," TRAVEL CLASS(E/X) :-");
settextstyle(2,0,5);
setcolor(15);
outtextxy(82,335," NOTE:- E FOR ECONOMIC CLASS, X FOR EXECUTIVE CLASS");

//THE INPUT WORK
gotoxy(43,11);
gets(pname);
gotoxy(43,14);
cin>>page;
gotoxy(43,17);
gets(pgen);
gotoxy(43,20);
cin>>op;


}




};

//--------------------------------------------------------------------------------
//FUNCTION TO SHOW FLIGHT RECORDS
void putdataf()
{
clearviewport();

//DECLARATION OF OBJECTS
fstream A;
ADMINISTRATOR S;

//VARIABLES USED
int x=6;

//VIEWING RECORDS OF FILE BEGINS(main programming c.)
A.open("flight.dat",ios::binary|ios::in);
while(A.read((char*)&S,sizeof(S)))
{
 S.outputf(x);
 x++;
}
A.close();
getch();
}

//--------------------------------------------------------------------------------
//FUNCTION FOR FLIGHT BOOKILNG DETAILS
void getdetails()
{
clearviewport();

//DECLARATION OF OBJECTS
fstream A,B;
ADMINISTRATOR S;

//VARIABLES USED
int i,no,c=0;

//CHANGING RECORDS ON FILE BEGINS(main programming b.)
A.open("flight.dat",ios::binary|ios::out|ios::in|ios::app);
B.open("customer.dat",ios::binary|ios::out|ios::in|ios::app);
setbkcolor(1);
setcolor(14);
rectangle(20,20,619,459);
setcolor(4);
rectangle(10,10,629,469);
settextstyle(3,0,3);
setcolor(15);
outtextxy(40,40,"ENTER FLIGHT NO. OF FLIGHT FOR BOOKING");
gotoxy(6,6);
cin>>no;
while(A.read((char*)&S,sizeof(S)))
{
 if(S.retplnof()==no)
 {
  cleardevice();
  S.enterdetails();
  B.write((char*)&S,sizeof(S));
  c=1;
 }
}
if(c==0)
{
 outtextxy(40,100,"NOT FOUND!!!!");
 outtextxy(40,130,"RECHECK THE FLIGHT NO. YOU ENTERED");
 outtextxy(40,160,"PRESS ANY KEY TO CONTINUE........");
 getch();
}
A.close();
B.close();
}





//--------------------------------------------------------------------------------
//FUNCTION FOR RESERVATION
void reservation()
{
clearviewport();

//DECLARATION OF OBJECTS
fstream A;
ADMINISTRATOR S;

//VARIABLES USED
int x=6;

//VIEWING RECORDS OF FILE BEGINS(main programming c.)
A.open("flight.dat",ios::binary|ios::in|ios::out);
while(A.read((char*)&S,sizeof(S)))
{
 S.outputf(x);
 x++;
}
A.close();
getch();
getdetails();
}

//--------------------------------------------------------------------------------
//FUNCTION TO GENERATE TICKET
void generate()
{
//VARIABLES USED
int no, pno, c=0 ;
char a;

clearviewport();
ADMINISTRATOR S;
fstream A,B;
A.open("flight.dat",ios::binary|ios::in|ios::out);
B.open("customer.dat",ios::binary|ios::in|ios::out);
setbkcolor(1);
setcolor(14);
rectangle(20,20,619,459);
setcolor(4);
rectangle(10,10,629,469);
settextstyle(3,0,2);
setcolor(15);
outtextxy(40,40,"ENTER TICKET NUMBER AND FLIGHT NUMBER RESPECTIVELY");
gotoxy(6,6);
cout<<"TICKET NO. :- ";
cin>>no;
gotoxy(6,7);
cout<<"FLIGHT NO. :- ";
cin>>pno;
while(A.read((char*)&S,sizeof(S)) || B.read((char*)&S,sizeof(S)))
  {   if(S.retplnof()==pno && S.rettktno()==no)
      { a=S.generatebook();
	S.generateflight(a);
	c++;
      }
  }
if(c==0)
{
 outtextxy(40,110,"NOT FOUND!!!!");
 outtextxy(40,140,"RECHECK THE DETAILS YOU ENTERED");
 outtextxy(40,170,"PRESS ANY KEY TO CONTINUE........");
 getch();
}
A.close();
B.close();
}

//-------------------------------------------------------------------------------------------
//FUNCTION TO MODIFY FLIGHT DETAILS
void flymod()
{
//VARIABLES USED
int x=6;

clearviewport();
ADMINISTRATOR S;
fstream A,B;
A.open("flight.dat",ios::binary|ios::out|ios::in);
B.open("customer.dat",ios::binary|ios::in|ios::out);
while(A.read((char*)&S,sizeof(S)))
{
 S.outputf(x);
 x++;
}

}




//-------------------------------------------------------------------------------------------
//FUNCTION TO MODIFY PASSENGER DETAILS
void pasmod()
{

clearviewport();
ADMINISTRATOR S;
fstream A,B;
A.open("flight.dat",ios::binary|ios::out|ios::in);
B.open("customer.dat",ios::binary|ios::in|ios::out);
while(B.read((char*)&S,sizeof(S)))
{
  int a=B.tellp()-sizeof(S);
  B.seekp(a,ios::beg);
  S.Spasmod();
  B.write((char*)&S,sizeof(S));
}
A.close();
B.close();
}



//--------------------------------------------------------------------------------
//FUNCTION TO MODIFY TICKET OR FLIGHT
void modification()
{
//VARIABLES USED
int no;

generate();
clearviewport();
setbkcolor(1);
setcolor(14);
rectangle(20,20,619,459);
setcolor(4);
rectangle(10,10,629,469);
settextstyle(3,0,2);
setcolor(15);
outtextxy(40,40,"CHOOSE THE DETAILS YOU WANT TO MODIFY");
gotoxy(6,6);
cout<<"1. CHANGE IN PASSANGER DETAILS";
gotoxy(6,7);
cout<<"2. CHANGE IN FLIGHT ";
gotoxy(10,10);
cout<<"ENTER YOUR OPTION :-";
cin>>no;
if(no==1)
{
pasmod();
}
/*
if(no==2)
{ flymod();  }
/*
if(no==3)
{
//deletion
reservation();
}

*/

}




//--------------------------------------------------------------------------------
//FUNCTION TO ADD NEW FLIGHT RECORDS
void getdataf()
{
clearviewport();

//DECLARATION OF OBJECTS
fstream A;
ADMINISTRATOR S;

//VARIABLES USED
int n;
int i;

//ADDING RECORDS ON FILE BEGINS(main programming a.)
A.open("flight.dat",ios::binary|ios::app);
setbkcolor(1);
setcolor(14);
rectangle(20,20,619,459);
setcolor(4);
rectangle(10,10,629,469);
settextstyle(3,0,3);
setcolor(15);
outtextxy(40,40,"ENTER NO. OF NEW FLIGHTS TO BE ADDED");
gotoxy(6,6);
cin>>n;
for(i=0;i<n;i++)
{
 cleardevice();
 S.inputf();
 A.write((char*)&S,sizeof(S));
}
A.close();
}


//--------------------------------------------------------------------------------
//FUNCTION TO EDIT FLIGHT RECORDS
void changedataf()
{
clearviewport();

//DECLARATION OF OBJECTS
fstream A;
ADMINISTRATOR S;

//VARIABLES USED
int n,c=0;

//CHANGING RECORDS ON FILE BEGINS(main programming b.)
A.open("flight.dat",ios::binary|ios::out|ios::in);
setbkcolor(1);
setcolor(14);
rectangle(20,20,619,459);
setcolor(4);
rectangle(10,10,629,469);
settextstyle(3,0,3);
setcolor(15);
outtextxy(40,40,"ENTER FLIGHT NO. OF FLIGHT TO BE EDITED");
gotoxy(6,6);
cin>>n;
while(A.read((char*)&S,sizeof(S)))
{
 if(S.retplnof()==n)
 {
  cleardevice();
  int a=A.tellp()-sizeof(S);
  A.seekp(a,ios::beg);
  S.editf();
  A.write((char*)&S,sizeof(S));
  c++;
 }
}
if(c==0)
{
 outtextxy(40,100,"NOT FOUND!!!!");
 outtextxy(40,130,"RECHECK THE FLIGHT NO. YOU ENTERED");
 outtextxy(40,160,"PRESS ANY KEY TO CONTINUE........");
 getch();
}
A.close();
}


//--------------------------------------------------------------------------------
//WELCOME FUNCTION
void welcome()
{
//VARIABLE USED IN FUNCTION
int x,y,z,i,j;
x=getmaxx();
y=getmaxy();

//RAINBOW FRAME LOOP
for(z=1;z<=800;z++)
{
 setcolor(z/90);
 if(z<=120)
 {
  arc(0,0,270,360,z);
  arc(x,y,90,180,z);
  setcolor(14);
  arc(0,0,270,360,80);
  arc(x,y,90,180,80);
 }
  setcolor(z/90);
 arc(x,y,90,100,z);
 arc(0,0,270,280,z);
 arc(x,y,170,180,z);
 arc(0,0,350,360,z);
}

// WELCOME OUTPUT(contains "Welcome to virtual airport"
for(j=1;j<3;j++)
{
 for(i=1;i<=15;i++)
{
setcolor(i);
settextstyle(0,0,3);
outtextxy(x/2-80,y/2,"W");
delay(25);
outtextxy(x/2-55,y/2,"E");
delay(25);
outtextxy(x/2-30,y/2,"L");
delay(25);
outtextxy(x/2-5,y/2,"C");
delay(25);
outtextxy(x/2+20,y/2,"O");
delay(25);
outtextxy(x/2+45,y/2,"M");
delay(25);
outtextxy(x/2+70,y/2,"E");
}
}
delay(500);
setcolor(0);
outtextxy(x/2-80,y/2,"W");
delay(50);
outtextxy(x/2-55,y/2,"E");
delay(50);
outtextxy(x/2-30,y/2,"L");
delay(50);
outtextxy(x/2-5,y/2,"C");
delay(50);
outtextxy(x/2+20,y/2,"O");
delay(50);
outtextxy(x/2+45,y/2,"M");
delay(50);
outtextxy(x/2+70,y/2,"E");
delay(200);
setcolor(15);
settextstyle(1,0,5);
outtextxy(x/2-30,y/2-100,"TO");
outtextxy(x/2-200,y/2-30,"AIRLINE RESERVATION");
outtextxy(x/2-80,y/2+20,"SYSTEM");
delay(2000);
clearviewport();
}



//-------------------------------------------------------------------------------------
//INVALID(a function generated at times of invalid input)
void invalid()
{
  clearviewport();
  setbkcolor(0);
  settextstyle(0,0,5);
  setcolor(4);
  outtextxy(10,30,"INVALID INPUT");
  sound(786);
  delay(500);
  nosound();
  clearviewport();
}



//-------------------------------------------------------------------------------------
//ACCESSCODE(a function for password)
int accesscode()
{
  //VARIABLE USED IN FUNCTION
  char code[4],name[30];
  int x=26,i;

  //DISPLAY CONTENT(display of the content for accesscode verification)
  cleardevice();
  setbkcolor(0);
  setcolor(3);
  rectangle(20,20,619,459);
  setcolor(4);
  rectangle(10,10,629,469);
  line(130,180,500,180);
  rectangle(130,150,500,300);
  setfillstyle(1,7);
  bar3d(130,150,500,180,10,2);
  setfillstyle(1,8);
  bar3d(130,180,500,300,10,0);
  setcolor(1);
  settextstyle(1,0,2);
  outtextxy(170,155,"ACCESSCODE   VERIFICATION " );
  setfillstyle(1,0);
  bar(200,200,450,230);
  bar(200,247,450,277);
  settextstyle(2,0,5);
  setcolor(15);
  outtextxy(130,210," NAME");
  outtextxy(126,258," PASSWORD");

  //INPUT AND WORKING OF ACCESSCODE(inputs name and accesscode password)
  gotoxy(26,14);
  gets(name);
  for(i=0;i<6;i++)
  {
    code[i]=getch();
    if(code[i]=='\r') //  NOTE:- \r stands for enter as \t stands for space and \n for next line
    {
      code[i]='\0';   //  NOTE:- \0 is null character
      break;
    }
    else
    {
     gotoxy(x,17);
     cout<<"*";
     x++;
    }
  }
  if(strcmpi(code,"time")==0)
  {
   cleardevice();
   return 1;
  }
  else
  {
   settextstyle(0,0,2);
   outtextxy(100,350,"INCORRECT ACCESSCODE !");
   delay(400);
   cleardevice();
   return 0;
  }
}


//------------------------------------------------------------------------------------
//MENU 3(for customer occupancy)
void cmenu()
{
//VARIABLES USED
int a=0,b,c=0,x,y;


//THE INFINTE LOOP 1 BEGINS
while(a!=1)
{
//MENU 2 DISPLAY
c=0;
initmouse();
showmouse();
clearviewport();
setbkcolor(1);
setcolor(11);
rectangle(2,4,637,100);
setfillstyle(2,11);
floodfill(10,10,11);
setcolor(4);
settextstyle(0,0,5);
outtextxy(50,40,"CUSTOMER MENU");
setcolor(4);
setfillstyle(1,7);
bar3d(80,150,380,180,2,1);
bar3d(80,200,380,230,2,1);
bar3d(80,250,380,280,2,1);
bar3d(80,300,380,330,2,1);
bar3d(80,350,380,380,2,1);
bar3d(80,400,380,430,2,1);
settextstyle(1,0,2);
setcolor(1);
outtextxy(82,155," RESERVATION");
outtextxy(82,205," MODIFICATION");
outtextxy(82,255," CANCELATION");
outtextxy(82,305," GENERATE YOUR TICKET");
outtextxy(82,355," GO TO MAIN MENU");
outtextxy(82,405," EXIT");

//THE INFINTE LOOP 2 BEGINS
while(c!=1)
{
in.x.ax=3;
int86(0x33,&in,&out);
b=out.x.bx;
x=out.x.cx;
y=out.x.dx;

//WORKING OF MENU 2
if(b==1 && x>80 && x<380)
{
if(y>150 && y<180)
 {
   setfillstyle(1,9);
   bar3d(80,150,380,180,2,1);
   setcolor(15);
   outtextxy(82,155," RESERVATION");
   delay(400);
   hidemouse();
   reservation();
   c=1;
 }
if(y>200 && y<230)
 {
   setfillstyle(1,9);
   bar3d(80,200,380,230,2,1);
   setcolor(15);
   outtextxy(82,205," MODIFICATION");
   delay(400);
   hidemouse();
   modification();
   c=1;
 }
if(y>250 && y<280)
 {
   setfillstyle(1,9);
   bar3d(80,250,380,280,2,1);
   setcolor(15);
   outtextxy(82,255," CANCELATION");
   delay(400);
   hidemouse();
   //function of customer to cancel
   c=1;
 }
if(y>300 && y<330)
 {
   setfillstyle(1,9);
   bar3d(80,300,380,330,2,1);
   setcolor(15);
   outtextxy(82,305," GENERATE YOUR TICKET");
   delay(400);
   hidemouse();
   generate();
   c=1;
 }
if(y>350 && y<380)
 {
   setfillstyle(1,9);
   bar3d(80,350,380,380,2,1);
   setcolor(15);
   outtextxy(82,355," GO TO MAIN MENU");
   delay(400);
   clearviewport();
   setbkcolor(0);
   hidemouse();
   c=1;
   a=1;
 }
if(y>400 && y<430)
 {
   setfillstyle(1,9);
   bar3d(80,400,380,430,2,1);
   setcolor(15);
   outtextxy(82,405," EXIT");
   delay(400);
   exit(0);
   getch();
 }


}
}
}
}




//------------------------------------------------------------------------------------
//MENU 2(for staff occupancy)
void bmenu()
{
//VARIABLES USED
int a=0,b,x,y,c=0;

//THE INFINITE LOOP 1 BEGINS
while(a!=1)
{
//MENU 2 DISPLAY
c=0;
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
outtextxy(80,40,"STAFF MENU");
setcolor(4);
setfillstyle(1,7);
bar3d(80,150,300,180,2,1);
bar3d(80,200,300,230,2,1);
bar3d(80,250,300,280,2,1);
bar3d(80,300,300,330,2,1);
bar3d(80,350,300,380,2,1);
bar3d(80,400,300,430,2,1);
settextstyle(1,0,2);
setcolor(1);
outtextxy(82,155," ADD NEW FLIGHT");
outtextxy(82,205," VIEW ALL FLIGHTS");
outtextxy(82,255," EDIT A FLIGHT");
outtextxy(82,305," CANCEL A FLIGHT");
outtextxy(82,355," GO TO MAIN MENU");
outtextxy(82,405," EXIT");


//THE INFINTE LOOP 2 BEGINS
while(c!=1)
{
in.x.ax=3;
int86(0x33,&in,&out);
b=out.x.bx;
x=out.x.cx;
y=out.x.dx;

//WORKING OF MENU 2
if(b==1 && x>80 && x<300)
{
if(y>150 && y<180)
 {
   setfillstyle(1,9);
   bar3d(80,150,300,180,2,1);
   setcolor(15);
   outtextxy(82,155," ADD NEW FLIGHT");
   delay(400);
   hidemouse();
   getdataf();
   c=1;
 }
if(y>200 && y<230)
 {
   setfillstyle(1,9);
   bar3d(80,200,300,230,2,1);
   setcolor(15);
   outtextxy(82,205," VIEW ALL FLIGHTS");
   delay(400);
   hidemouse();
   putdataf();
   c=1;
 }
if(y>250 && y<280)
 {
   setfillstyle(1,9);
   bar3d(80,250,300,280,2,1);
   setcolor(15);
   outtextxy(82,255," EDIT A FLIGHT");
   delay(400);
   hidemouse();
   changedataf();
   c=1;
 }
if(y>300 && y<330)
 {
   setfillstyle(1,9);
   bar3d(80,300,300,330,2,1);
   setcolor(15);
   outtextxy(82,305," CANCEL A FLIGHT");
   delay(400);
   hidemouse();
   //function of adminisrator to delete  canceldataf()
   c=1;
 }
if(y>350 && y<380)
 {
   setfillstyle(1,9);
   bar3d(80,350,300,380,2,1);
   setcolor(15);
   outtextxy(82,355," GO TO MAIN MENU");
   delay(400);
   clearviewport();
   setbkcolor(0);
   hidemouse();
   a=1;
   c=1;
 }
if(y>400 && y<430)
 {
   setfillstyle(1,9);
   bar3d(80,400,300,430,2,1);
   setcolor(15);
   outtextxy(82,405," EXIT");
   delay(400);
   exit(0);
   getch();
   c=1;
 }


}
}
}
}


//------------------------------------------------------------------------------------
//MENU 1(to know whether a customer or administrator)
void amenu()
{
//VARIABLES USED
int i,j,n;

randomize();

//THE INFINTE LOOP BEGINS
while(1)
{
//MENU 1 DISPLAY
clearviewport();
setbkcolor(0);
setcolor(3);
rectangle(20,20,619,459);
setcolor(4);
rectangle(10,10,629,469);
settextstyle(1,0,4);
setcolor(14);
outtextxy(60,150,"1) STAFF");
outtextxy(60,210,"2) CUSTOMER");
outtextxy(60,270,"3) EXIT");

//LOOP FOR CHANGING MENU COLOR
while(!kbhit())
{
 i=random(15)+1;
 setcolor(i);
 settextstyle(3,0,6);
 outtextxy(200,20,"MAIN MENU");
 j=random(15)+1;
 setcolor(j);
 line(22,80,617,80);
 delay(400);
}

//WORKING OF MENU 1
switch(getch())
{
case '1':
{
  settextstyle(1,0,4);
  setcolor(0);
  outtextxy(60,150,"1) STAFF");
  setcolor(15);
  settextstyle(1,0,5);
  outtextxy(60,150,"1) STAFF");
  delay(800);
  n=accesscode();
  if(n==1)
  { bmenu(); }
  break;
}
case '2':
{
  settextstyle(1,0,4);
  setcolor(0);
  outtextxy(60,210,"2) CUSTOMER");
  setcolor(15);
  settextstyle(1,0,5);
  outtextxy(60,210,"2) CUSTOMER");
  delay(800);
  cmenu();
  break;
}
case '3':
{
  settextstyle(1,0,4);
  setcolor(0);
  outtextxy(60,270,"3) EXIT");
  setcolor(15);
  settextstyle(1,0,5);
  outtextxy(60,270,"3) EXIT");
  delay(800);
  exit(0);
  getch();
  break;
}
default:
{
  invalid();
  break;
}
}
}



}








//-------------------------------------------------------------------------------------
//MAIN FUNCTION BEGINS
void main()
{
clrscr();

//INITIALIZING GRAPHICS
int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\turboc3\\BGI");

//CALLING OF FUNCTIONS(welcome,amenu)
welcome();
amenu();





getch();
}