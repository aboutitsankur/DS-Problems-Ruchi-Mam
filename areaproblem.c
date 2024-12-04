#include<stdio.h>
void main()
{
int r,area;
printf("Enter the radius of the Circle : ");
scanf("%d",&r);
area=2*r*r;
printf("The area of the biggest inscribed rectangle is %d",area);
}