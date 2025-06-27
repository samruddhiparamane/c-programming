#include<stdio.h>
int main()
{
float length,breadth,height;
float doorwidth,doorheight,windowwidth,windowheight;
float wallarea,windowarea,doorarea,paintarea,roofarea;

printf("enter the dimensions of room length,breadth and height");
scanf("%f %f %f",&length,&breadth,&height);

printf("enter the dimensions of door width,height");
scanf("%f %f",&doorwidth,&doorheight);

printf("enter the dimensions of window width,height");
scanf("%f %f",&windowwidth,&windowheight);
 
wallarea=2*height*(length+breadth);
windowarea=2*(windowwidth*windowheight);
doorarea=doorwidth*doorheight;

paintarea=wallarea-windowarea-doorarea;
roofarea=length*breadth;

printf("area of the painted walls is: %.2f",paintarea);
printf("area of the roof is :%.2f",roofarea);

return 0;
}
