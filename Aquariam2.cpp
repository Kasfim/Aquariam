#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

int main()

{

    int gd=DETECT,gm;

    initgraph(&gd,&gm,"C:\\TC\\BGI");
    int i=0,x=200,y=266,z=332;

    while(i<310 && !kbhit()) // while loop for animation

    {
        setcolor(15);

// Grass

ellipse(500,342,90,220,8,25);
ellipse (503,339,120,220,7,25);//grass1 ellipse(492,382,320,75,8,25);
ellipse(496,382,320,85,8,27);

ellipse(200,342,90,220,8,25);
 ellipse (203,339,120,220,7,25); //grass2
 ellipse(192,382,320,75,8,25);
 ellipse(196,382,320,85,8,27);

 ellipse(490,342,90,220,8,25);
 ellipse(493,339,120,220,7,25); //grass3
 ellipse(482,382,320,75,8,25);
 ellipse(486,382,320,85,8,27);

// fish 1
line(150+i,250,190+i,290); line(150+i,250,90+i,310); line(90+i,270,150+i,330); line(190+i,290,150+i,330); line(90+i,310,90+i,270);
circle(170+i,290,6);
 arc(190+i,290,135,225,40);

setfillstyle(1,GREEN); // fish1 tail
floodfill(91+i,290,WHITE);

 setfillstyle(1,RED); // fish1 body1
 floodfill(150+i,251,WHITE);

 setfillstyle(1,YELLOW); // fish1 body2 floodfill (160+i,290, WHITE);
        line(150 + i, 250, 190 + i, 290);
        line(150 + i, 250, 90 + i, 310);
        line(90 + i, 270, 150 + i, 330);
        line(190 + i, 290, 150 + i, 330);
        line(90 + i, 270, 90 + i, 310);
        circle(170 + i, 290, 3);
// fish 2

        arc(400 - i, 150, 50, 320, 30);
        line(420 - i, 128, 450 - i, 160);
        line(420 - i, 173, 450 - i, 130);
        line(450 - i, 160, 450 - i, 130);
        circle(380 - i, 150, 3);
        arc(380 - i, 150, 270, 90, 20);
        setfillstyle(1,RED); //fish2 tail
        floodfill(449-i,145,WHITE);

        setfillstyle(1,RED); //fish2 body1
        floodfill(410-i,150,WHITE);

        setfillstyle(1,BLACK); //fish2 body2
        floodfill (390-i,150, WHITE);

//oxygen tank

        line(50,300,80,300);
        line(80,300,80,370);
        line(50,370,80,370);

        line(80,305,90,305);
        line(80,310,90,310);
        line(90,305,90,310);

//Bubble
        circle(100,x+105,5);
        setfillstyle(1,BLUE);
        floodfill(100,x+105,WHITE);

if(x==0)
            x=200;
        else
            x-=2;

        if(y<=200)

        {
            circle(110,y+105,5);
            setfillstyle(1,BLUE);
            floodfill(108,y+105,WHITE);
        }
        if(y==0)

            y=200;

        else

            y-=2;

        if(z<=200)

        {
            circle(104,z+105,5);
            setfillstyle(1,BLUE);
            floodfill(105,z+105,WHITE);
        }

if(y==0)

            y=200;

        else

            y-=2;

        if(z<=200)

        {
            circle(104,z+105,5);
            setfillstyle(1,BLUE);
            floodfill(105,z+105,WHITE);
        }

        if(z==0)

            z=200;

        else

            z-=2; //End of Bubble

// fish tank body


        line(50, 10, 550, 10);
        line(50, 10, 10, 100);
        line(550, 10, 590, 100);
        line(10, 100, 590, 100);

        setfillstyle (9,RED);
        floodfill (52,12,15);

//border of tank
        line(50,100,50,400);
        line(550,100,550,400);
        line(50,400,550,400);
        setfillstyle (11,CYAN);
        floodfill (52,102,15);

        setfillstyle(1,6);
        floodfill (70,310,WHITE);
        floodfill (81,308,WHITE);

// Grass color
        setfillstyle(1,2);
        floodfill(495,342, WHITE); //grass1
        floodfill (485,342, WHITE); //grass2
        floodfill (195,342, WHITE); //grass3

//Stones

        setcolor(BLUE);
        ellipse(100,390,0,360,20,10);
        setfillstyle(1,8);
        floodfill (103,390,BLUE);
        ellipse(125,370,0,360,25,10);
        setfillstyle(1,5);
        floodfill (125,370,BLUE);
        ellipse (150,390,0,360,25,10);
        setfillstyle(1,3);
        floodfill (150,390,BLUE);
        ellipse(170,375,0,360,15,5);
        setfillstyle(1,8);
        floodfill (170,375,BLUE);
        circle (180,390,10);
        setfillstyle(1,9);
        floodfill (180,390,BLUE);
        ellipse(200,380,0,360,10,15);
        setfillstyle(1,10);
        floodfill (200,380,BLUE);
        circle(220,390,10);
        setfillstyle(1,11);
        floodfill (220,390,BLUE);
        ellipse (250,380,0,360,20,15);
        setfillstyle(1,12);
        floodfill (250,390,BLUE);


        ellipse (290,390,0,360,20,10);
        setfillstyle(1,13);
        floodfill (290,390,BLUE);
        ellipse(315,370,0,360,25,10);
        setfillstyle(1,14);
        floodfill (315,370,BLUE);
        ellipse(340,390,0,360,25,10);
        setfillstyle(1,7);
        floodfill (340,390,BLUE);
        ellipse(360,375,0,360,15,5);
        setfillstyle(1,18);
        floodfill (360,375,BLUE);
        circle(370,390,10);
        setfillstyle(1,17);
        floodfill (370,390,BLUE);
        ellipse(390,380,0,360,10,15);
        setfillstyle(1,18);
        floodfill (390,380,BLUE);
        circle(410,390,10);
        setfillstyle(1,19);
        floodfill(410,390,BLUE);
        ellipse(440,380,0,360,20,15);
        setfillstyle(1,20);
        floodfill (440,380,BLUE);

ellipse(480,390,0,360,20,10);
        setfillstyle(1,21);
        floodfill(480,390,BLUE);
        ellipse (505,370,0,360,25,10);
        setfillstyle(1,22);
        floodfill (505,370,BLUE);
        ellipse(530,390,0,360,21,10);
        setfillstyle(1,23);
        floodfill (530,390,BLUE);

if(i==309)

            i=0;

        else

            i++;

        delay(10);

        cleardevice();

    }

    getch();

    closegraph();

}



