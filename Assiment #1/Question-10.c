#include<stdio.h>

int main()
{
    int day,month,year;

    printf("Enter day,month,year\n");
    scanf("%d/%d/%d",&day,&month,&year);
    printf("day = %d, month = %d,year = %d",day,month,year );
    getchar();
    return 0;
}
