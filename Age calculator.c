#include<stdio.h>
int main()
{
int d1,d2,m1,m2,y1,y2,r1,r2,r3,p1,p2,p3;
printf("Enter birthday day:\n");
scanf("%d",&d1);
printf("Enter birthday month:\n");
scanf("%d",&m1);
printf("Enter birthday year:\n");
scanf("%d",&y1);
printf("Enter current day:\n");
scanf("%d",&d2);
printf("Enter current month:\n");
scanf("%d",&m2);
printf("Enter current year:\n");
scanf("%d",&y2);
if(d1==d2&&m1==m2)
{
printf("Happy Birthday:)");
}
if((d1>31||d1<1)&&(d2>31||d2<1))
{
	printf("Invalid");
}

else
{
r3=y2-y1;
}
if(d2>d1)
{
r1=d2-d1;
}
else
{
m2=m2-1;
d2=d2+31;
r1=d2-d1;
}
if(m2>m1)
{
r2=m2-m1; 
}
else
{
y2=y2-1;
m2=m2+12;
r2=m2-m1;
}
printf("Your Age is %d year%d month %days\n",r3,r2,r1);
r2=11-r2;
r1=30-r1;
printf("Next birthday %d month %d day later.",m2,d2);
return 0;
}
