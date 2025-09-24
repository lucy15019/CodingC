#include<stdio.h>

int main()
{
float principal;
float rate;
float time;
float amount;
int n;
float compound_interest;

    printf("Enter principal :");
    scanf("%f",&principal);
    
    printf("Enter rate :");
    scanf("%f",&rate);
    
    printf("Enter time :");
    scanf("%f",&time);
    
    printf("Enter n :");
    scanf("%d",&n);
    
    amount=principal*pow(1+rate/100/n,n*time);
    
    printf("amount is %.2f\n",amount);
    
    
    compound_interest=amount-principal;
    printf("compound_interest is %.2f\n",compound_interest); 
    
    return 0;
}