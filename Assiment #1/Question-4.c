# include <stdio.h>

int main()
{
    float area,radius;

    printf("Enter radius\n");
    scanf("%f",&radius);
    area = 3.14 * radius * radius;

    printf("area of circle is %f and the radius is %f",area,radius);
    getch();
    return 0;
}
