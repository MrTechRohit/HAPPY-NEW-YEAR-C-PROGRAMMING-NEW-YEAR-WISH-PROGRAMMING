//____________ WELCOME ALL OF YOU ON ROHIT TECH STUDY CHANNEL _____________//
//----------------- C++ PROGRAM TO WISH HAPPY NEW YEAR -------------------//

#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>

void Entry();
void Entry2();
void shoot();
void shootagain();
void area();
void explode(int,int,int);
void main()
{

int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");

Entry();
Entry2();
shoot();
getch();
closegraph();
}

void shoot()
{
int i=0;
int x=0,y=480,x1=15,y1=460;
while(i<350)
{
area();
line(x+i,y-i,x1+i,y1-i);
delay(50);
i=i+10;
cleardevice();
}
explode(x+350,y-350,5);
shootagain();
}
void shootagain()
{
int i=0;
int x=600,y=480,x1=585,y1=460;
while(i<250)
{
setcolor(15);
area();
line(x-i,y-i,x1-i,y1-i);
delay(30);
i=i+10;
cleardevice();
}
explode(x-300,y-300,5);
}

void explode(int x,int y,int r)
{
int k,j,interval=0;
for(k=0;k<2;k++)
{
interval=interval+50;
for(j=0;j<interval;j++)
{
area();
setcolor(BLACK);
setcolor(rand()/15);
// horizontal left and right
circle(x+j,y,r+k);
circle(x-j,y,r+k);
//vertical up and down
circle(x,y+j,r+k);
circle(x,y-j,r+k);
//slighten down
circle(x+j,y+j,r+k);
circle(x-j,y-j,r+k);
//slighten up
circle(x-j,y+j,r+k);
circle(x+j,y-j,r+k);
delay(30);
cleardevice();
}
}
}
void area()
{
//Area
setcolor(15);
line(0,350,600,350);

setcolor(2);
rectangle(0,350,100,150);
rectangle(40,350,60,300);

setcolor(9);
rectangle(10,170,30,200);
rectangle(70,170,90,200);

setcolor(10);
rectangle(10,230,30,260);
rectangle(70,230,90,260);

setcolor(12);
rectangle(100,350,180,250);

setcolor(11);
line(100,250,140,180);
line(180,250,140,180);

setcolor(13);
rectangle(110,280,130,300);
rectangle(150,280,170,300);
rectangle(130,350,160,330);

setcolor(14);
rectangle(180,350,350,300);
rectangle(190,310,220,330);
rectangle(340,310,310,330);

setcolor(4);
rectangle(370,350,440,150);
rectangle(385,350,405,300);

setcolor(2);
rectangle(380,170,400,200);
rectangle(410,170,430,200);

setcolor(11);
rectangle(380,230,400,260);
rectangle(410,230,430,260);

setcolor(11);
settextstyle(BOLD_FONT,HORIZ_DIR,1);
outtextxy(250,10,"HAPPY NEW YEAR");

setcolor(13);
settextstyle(TRIPLEX_SCR_FONT,HORIZ_DIR,3);
outtextxy(230,60,"GOOD BYE 2021");

setcolor(10);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(250,100,"WELCOME 2022");

setcolor(14);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(532,324,"ROHIT TECH STUDY");
}

void Entry2()
{
int i;
char a[5];
settextjustify(CENTER_TEXT, CENTER_TEXT);
settextstyle(DEFAULT_FONT,HORIZ_DIR,10);
setcolor(13);
for(i=10;i>=0;i--)
{
sprintf(a,"%d",i);
outtextxy(getmaxx()/2,getmaxy()/2,a);
delay(1000);

if(i==0)
break;
cleardevice();
}
cleardevice();
}

void Entry()
{

for(int r=0;r<2500;r++)
{
	setcolor(15);
	circle(170,300,10);
	settextstyle(10,0,4);

	setcolor(13);
	outtextxy(156,290,"0");

	setcolor(10);
	line(170,350,168,400);  // left
	line(170,350,180,400);  //right

	setcolor(14);
	 line(0,400,700,400);
	 line(157,320,147,350);
	 line(180,317,188,350);
	 settextstyle(2,0,7);
	if(r==30)
	{
	setcolor(10);
	outtextxy(250,295,"A NEW YEAR MEANS");
	outtextxy(250,320,"A NEW CHAPTER.");
	}
	if(r==370)
	{
	cleardevice();
	}
	if(r==800)
	{
	setcolor(11);
	outtextxy(250,295,"I HOPE 2022 IS AN INCREDIBLE");
	outtextxy(250,320,"PART OF YOUR STORY.");
	}
	if(r==1400)
	{
	cleardevice();
	}
	if(r==1800)
	{
	setcolor(13);
	outtextxy(250,295,"LETS GET STARTED 2022");
	}
	if(r==2400)
	{
	cleardevice();
	break;
	}
       }
      cleardevice();
}