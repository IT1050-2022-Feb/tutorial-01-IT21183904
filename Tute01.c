#include<stdio.h>
int main(void)
{
  int x,y,total=0;
  float avg;

  printf("Enter the first mark :");
  scanf("%d",&x);
  printf("Enter the second mark :");
  scanf("%d",&y);

  total= x+y;
  avg = total/2;

  printf("Average is :%.2f",avg);

}