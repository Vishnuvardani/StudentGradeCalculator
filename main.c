#include<stdio.h>

int main()
{
    int m1,m2,m3,total;
    float avg;
    char grade;

    printf("Enter three marks: ");
    scanf("%d%d%d",&m1,&m2,&m3);

    total=m1+m2+m3;
    avg=total/3.0;

    if(avg>=90)
        grade='A';
    else if(avg>=75)
        grade='B';
    else if(avg>=60)
        grade='C';
    else if(avg>=50)
        grade='D';
    else
        grade='F';

    printf("Total = %d\n",total);
    printf("Average = %.2f\n",avg);
    printf("Grade = %c\n",grade);

    return 0;
}