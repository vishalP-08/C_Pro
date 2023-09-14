#include<stdio.h>
int main()
{       
        float principle, rate , time, si ;
        printf("Enter the Principle, Rate, Time :\n");
        scanf("%f%f%f",&principle,&rate,&time);

         si = (principle * rate * time)/100;

        printf("The interst of the product is : %f",si);

        return 0 ;
}