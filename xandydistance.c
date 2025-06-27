#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,distance;
    printf("enter x and y coordinates of first point:(x1 y1)");
    scanf("%f %f",&x1,&y1);

    printf("enter x and y coordinates of second point:(x2 y2)");
    scanf("%f %f",&x2,&y2);

    distance=sqrt(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);

    printf("the distance between two points is: %.2f",distance);
    
    return 0;

}