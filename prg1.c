#include<stdio.h>
void main(){

int a[10],i,sum;
float avg;
printf("enter the 10 numbers :");

for(i=0;i<=9;i++)
scanf("%d",&a[i]);

for(i=0;i<=9;i++)
sum = sum +a[i];

avg=sum/10.0;

printf("sum of numbers is %f",avg);

}
