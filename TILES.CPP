#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>

void main()

{

	int gd=DETECT,gm;

	int r[5],i,ch,color,sc=0;

	initgraph(&gd,&gm,"C://TURBOC3//BGI");

	randomize();

	r[1]=random(4);

	r[2]=random(4);

	r[3]=random(4);

	r[4]=random(4);

	printf("Welcome to PIANO TILES !!!\nTo play:\nType in the tile number\nwhich is colored\n");

	printf("Select the color of tile:\n1.Blue\n2.Green\n3.Yellow\n4.White\n");

	scanf("%d",&color);

	if(color==3)

	color=14;

	else if(color==4)

	color=15;

	while(1)

	{

	r[0]=random(4);

	setcolor(RED);

	line(320,0,320,480);

	line(370,0,370,480);

	line(420,0,420,480);

	line(220,0,220,480);

	line(270,0,270,480);

	line(220,96,420,96);

	line(220,192,420,192);

	line(220,288,420,288);

	line(220,384,420,384);

	setcolor(YELLOW);

	rectangle(135,427,175,437);

	line(175,452,175,412);

	line(175,412,195,432);

	line(175,452,195,432);

	setfillstyle(SOLID_FILL,color);

	for(i=0;i<5;i++)

	floodfill(245+50*r[i],48+96*i,RED);

	setcolor(RED);

	settextstyle(3,0,2);

	outtextxy(245,432,"1");

	outtextxy(295,432,"2");

	outtextxy(345,432,"3");

	outtextxy(395,432,"4");

	ch=getch();

	if(ch!=(r[4]+49))

	break;

	r[4]=r[3];

	r[3]=r[2];

	r[2]=r[1];

	r[1]=r[0];

	sc++;


       //	cleardevice();
	printf("score:%d",sc);


	}

	printf("\nYour Score: %d\n\n",sc);

	printf("GAME OVER!!");

	getch();

	closegraph();

}