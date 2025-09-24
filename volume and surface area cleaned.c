#include<stdio.h>


int main()
{
float pi = 3.142;
float surface_area,height,radius,volume;


    printf("Enter height :");
    scanf("%f",&height);
    
    printf("Enter radius :");
    scanf("%f",&radius);
    
    volume=pi*radius*radius*height;
    surface_area=2*pi*radius*radius + 2*pi*radius*height;
    
    printf("\n volume is %.2f",volume);
    printf("\n surface_area is %.2f",surface_area);
    
    
    
    
    
    return 0;
}