#include<stdio.h>

int main()

{
  int Minute,Hours;

  printf("Enter Time in HH:MM Format\n");

  scanf("%d:%d",&Hours,&Minute);

  printf("Hours = %d, Minute = %d",Hours,Minute);

  return 0;
}
