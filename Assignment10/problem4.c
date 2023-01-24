// wap to find the compound intrest using functions
#include<stdio.h>
#include<conio.h>
float ci(int p,float r);
void main()
{
int p;
float r,i;
printf("Enter the pricipal amount to find the compound interest of:");
scanf("%d",&p);
printf("\nEnter the rate:(r/100)");
scanf("%f",&r);
i=ci(p,r);
printf("\nThe interest for 1 yr: %f",i);
getch();
}

float ci(int p, float r)
{
float i;
i=(p*(1+r))-p;
return i;
}
