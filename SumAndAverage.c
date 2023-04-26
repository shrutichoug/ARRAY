//Write a program to accept input from user in an array and display the sum and average


#include<stdio.h>
int main()
{

    int i; float n[5];float sum=0 ;
    for (i=0;i<5;i++)
    {
        printf ("Enter value %d \n", (i+1));
        scanf("%f", &n[i]); // Accepting user input
        sum=sum+n[i]; // sum of data entered or input
    }
    printf("The sum is %.2f\n", sum); // sum of the data
    printf("The average value is %.2f" ,sum/5); // average of the data

}