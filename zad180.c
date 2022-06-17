/* Program treba izracunat : 1/1!+2/2!+3/3!+4/4!+....+N/N!  */

#include<stdio.h>

// funkcija da se izracuna faktorijel broja.
unsigned long factorial(int br)
{
    int i;
   
    unsigned long fact=1;

    
    for(i=br; i>=1; i--)
        fact= fact*i;

   
    return fact;
}

int main()
{
    int i,N;
    float sum;

    
    printf("\nUnesi vrijednost od N: ");
    scanf("%d",&N);

    
    sum=0.0f;

    
    for(i=1;i<=N;i++)
        sum = sum + ( (float)(i) / (float)(factorial(i)) );


    printf("\nUkuona suma je: %f\n",sum);

    return 0;
}
