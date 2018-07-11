#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<io.h>
#include<process.h>
#include<graphics.h>
void main()
{
clrscr();
int x,n=3,m,s=1;
char a,b,c,d,e=3,f;
int gdriver = DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\\TurboC3\\BGI");
	setbkcolor(12);
	setcolor(WHITE);
	sound(1117);
	rectangle(getmaxx()/2-100,getmaxy()/2-20,getmaxx()/2+20,getmaxy()/2+40);
	delay(700);
	nosound();
	setcolor(RED);
	rectangle(getmaxx()/2-115,getmaxy()/2-35,getmaxx()/2+35,getmaxy()/2+55);
	delay(700);
	setcolor(YELLOW);
	sound(8870);
	rectangle(getmaxx()/2-130,getmaxy()/2-50,getmaxx()/2+50,getmaxy()/2+70);
	delay(700);
	nosound();
	setcolor(9);
	rectangle(getmaxx()/2-145,getmaxy()/2-65,getmaxx()/2+65,getmaxy()/2+85);
	delay(700);
	setcolor(YELLOW);
	sound(8870);
	rectangle(getmaxx()/2-160,getmaxy()/2-80,getmaxx()/2+80,getmaxy()/2+100);
	delay(700);
	nosound();
	setcolor(RED);
	rectangle(getmaxx()/2-175,getmaxy()/2-95,getmaxx()/2+95,getmaxy()/2+115);
	delay(700);
	setcolor(WHITE);
	sound(1117);
	rectangle(getmaxx()/2-190,getmaxy()/2-110,getmaxx()/2+110,getmaxy()/2+130);
	delay(700);
	nosound();
	setcolor(BLUE);
	outtextxy(getmaxx()/2-95,getmaxy()/2,"Brain in Pain:");
	outtextxy(getmaxx()/2-95,getmaxy()/2+20," a brainy game");
	delay(4000);
	cleardevice();
	setbkcolor(8);
cout<<"\n created by PRANAV\n";
for(m=1;m<=80;m++)
{cout<<"*";delay(65);}
cout<<"\n\n\t\t     Brain in Pain: a brainy game \t\t     Life "<<e<<e<<e;
cout<<"\n\n\t\t\t   **************\n\t\t\t   * Start :- 1 *\n\t\t\t   * Exit  :- 2 *\n\t\t\t   **************";
cout<<"\n\nEnter your option :";
cin>>x;
if(x==2)
exit(0);
else if(x==1)
restart:
setbkcolor(0);
cout<<"\n";
for(m=1;m<=80;m++)
{ sound(1765); cout<<"_"; delay(35); nosound();delay(100); }
cout<<"\n\t\t\t   Level 1\n";
cout<<"\n Q1 Which is the hottest planet among these?";
cout<<"\n    (a) Earth\t\t(b) Venus\t\t(c) Mercury\t\t\n";
cout<<"\n Q2 Ram is 2 years old. His sister is half of his age. What will be the age of \t    sister when Ram will be 10 years old?";
cout<<"\n    (a) 5    \t\t(b) 2    \t\t(c) 9\n";
delay(1000);
cout<<"\n\t\t   Enter the Answers(part)";
cout<<"\n Ans.1 :- ";
cin>>a;
cout<<"\n Ans.2 :- ";
cin>>b;
delay(1500);
setbkcolor(8);
for(m=1;m<=80;m++)
{ sound(1765); cout<<"_"; delay(35); nosound();delay(100); }
if(a=='b'&&b=='c')
{ sound(867);
  cout<<"\n\t\t\t      PASS";
  nosound();
  cout<<"\n\n\t\t\t     Life ";
  for(m=0;m<n;m++)
  cout<<e;
  cout<<"\n\n\t\t\t*****************\n\t\t\t* Next Lvl :- 1 *\n\t\t\t* Exit :- 2     *\n\t\t\t*****************";
}
else
{ sound(876);
  cout<<"\n\t\t\t      FAIL";
  nosound();
  cout<<"\n\n\t\t\t     Life ";
  for(m=0;m<n;m++)
  cout<<e;
  cout<<"\n\n\t\t\t****************\n\t\t\t* Restart :- 3 *\n\t\t\t* Exit :- 2    *\n\t\t\t****************";
}
cout<<"\n\n Enter your option :";
cin>>x;
if(x==2)
exit(0);
else if(x==3)
{--n;
 if(n>=0)
 goto restart;
 else
 cout<<"\n\n\t\t You fail, can't restart again \n\t\t            marks = 0";
 exit(0);}
else if(x==1)
setbkcolor(0);
for(m=1;m<=80;m++)
{ sound(1765); cout<<"_"; delay(35); nosound();delay(50); }
cout<<"\n\t\t\t   Level 2\n";
cout<<"\n Q3 What will be next term in series:\n      AAA, ABA, BAB, BBB......."
    <<"\n    (a) BCC\t\t\t(b) BCB\t\t\t(c) CBC\n"
    <<"\n Q4 How TAMILNADU will be written in code if MUMBAI is written as MIMIMI?"
    <<"\n    (a) MNUMNUMNU \t\t(b) TLATLATLA \t\t(c) ALDALDALD\n"
    <<"\n Q5 X and Y are to brothers.B is A's brother but A is mother of X, what is B \t    to Y?"
    <<"\n    (a) Uncle     \t\t(b) Father     \t\t(c) Mother";
delay(1000);
cout<<"\n\n\t\t     Enter the answers(part)"
    <<"\n Ans.3 :- ";
cin>>a;
cout<<"\n Ans.4 :- ";
cin>>b;
cout<<"\n Ans.5 :- ";
cin>>c;
delay(1500);
setbkcolor(BLUE);
for(m=1;m<=80;m++)
{ sound(1765); cout<<"_"; delay(35); nosound(); delay(75);}
if(a=='b'&&b=='a'&&c=='a')
{ sound(867);
  cout<<"\n\t\t\t      PASS";
  nosound();
  cout<<"\n\n\t\t\t     Life ";
  for(m=0;m<n;m++)
  cout<<e;
  cout<<"\n\n\t\t\t*****************\n\t\t\t* Next Lvl :- 1 *\n\t\t\t* Exit :- 2     *\n\t\t\t*****************";
}
else
{ sound(876);
  cout<<"\n\t\t\t      FAIL";
  nosound();
  cout<<"\n\n\t\t\t     Life ";
  for(m=0;m<n;m++)
  cout<<e;
  cout<<"\n\n\t\t\t****************\n\t\t\t* Restart :- 3 *\n\t\t\t* Exit :- 2    *\n\t\t\t****************";
}
cout<<"\n\n Enter your option :";
cin>>x;
if(x==2)
exit(0);
else if(x==3)
{--n;
 if(n>=0)
 goto restart;
 else
 cout<<"\n\n\t\t You fail, can't restart again \n\t\t     marks = 0";
 exit(0);}
else if(x==1)
setbkcolor(0);
for( m=1;m<=80;m++)
{ sound(1765); cout<<"_"; delay(35); nosound(); delay(30);}
cout<<"\n\t\t\t          Level 3\n";
cout<<"\n Q6 Which of the following is similar to:- (7,21,28) ?"
    <<"\n    (a) (10,14,25)\t\t(b) (4,8,12)  \t\t(c) (9,27,36)\n"
    <<"\n Q7 Which of the following is a palindrome?"
    <<"\n    (a) NAMAN     \t\t(b) NANAM     \t\t(c) MANAN\n"
    <<"\n Q8 In which of these this game has been made?"
    <<"\n    (a) Java      \t\t(b) MysQl     \t\t(c) C++\n"
    <<"\n Q9 Fill the blank in series:- SCD,TEF,UGH,___,WKI....."
    <<"\n    (a) UJI\t\t\t(b) VIJ\t\t\t(c) IJT\n"
    <<"\nQ10 Which of the following is not a care sensitive language?"
    <<"\n    (a) MysQl     \t\t(b) C++\t\t\t(c) Java";
delay(1000);
cout<<"\n\n\t\t     Enter the answers(part)"
    <<"\n Ans.6 :- ";
cin>>a;
cout<<"\n Ans.7 :- ";
cin>>b;
cout<<"\n Ans.8 :- ";
cin>>c;
cout<<"\n Ans.9 :- ";
cin>>d;
cout<<"\n Ans.10 :- ";
cin>>f;
delay(1500);
setbkcolor(9);
for(m=1;m<=80;m++)
{ sound(1765); cout<<"_"; delay(35); nosound();delay(30); }
if(a=='c'&&b=='a'&&c=='c'&&d=='b'&&f=='a')
{ sound(867);
  cout<<"\n\t\t\t      CONGRATULATIONS!"
      <<"\n\t\t\t       GAME COMPLETE";
  nosound();
  s=n*5+5;
  cout<<"\n\n  You Scored "<<s<<" out of 20";
  cout<<"\n  Thanks for Playing.\n\n\n\n\n";
  delay(5000);
  close(0);
}
else
{ sound(876);
  cout<<"\n\t\t\t      FAIL";
  nosound();
  cout<<"\n\n\t\t\t     Life ";
  for(m=0;m<n;m++)
  cout<<e;
  cout<<"\n\n\t\t\t****************\n\t\t\t* Restart :- 3 *\n\t\t\t* Exit :- 2    *\n\t\t\t****************";
  cout<<"\n\n Enter your option :";
}
cin>>x;
if(x==2)
exit(0);
else if(x==3)
{--n;
 if(n>=0)
 goto restart;
 else
 cout<<"\n\n\t\t You fail, can't restart again \n\t\t     marks = 0";
 exit(0);}
getch();
}
