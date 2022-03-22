/*
Project:Payroll System
Author:Bridgith Majune
Date:22/3/2022
Complier:GCC
Language:C99
License:MIT
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variable Declaration
    char name[100],pin[10];
    int emp_no,hours;
    int normal_pay;
    float overtime_pay, tax, gross,net;
    const int rate = 1000;

    printf("\tGitonga\'s Factory Payroll system\n");

    //Capture Input
    printf("employee name:");
    gets(name);
    printf("KRA pin:");
    gets(pin);
    printf("Employment number:");
    scanf("%d",&emp_no);
    printf("Hours worked:");
    scanf("%d",&hours);

    //computations
    if(hours>40){
            normal_pay = rate*40;
            overtime_pay =
    (hours-40)*1.5*rate;
}
else{
    normal_pay = rate*hours;
    overtime_pay = 0;
}
gross = normal_pay +
overtime_pay;
tax = 0.3*gross;
net = gross - tax;

//output
 printf("Employment no:%d\n",emp_no);
 printf("Employee name:%s\n",name);
 printf("KRA pin: %s\n",pin);
 printf("Normal pay: %d\n",normal_pay);
 printf("Overtime pay: %.2f/n",overtime_pay);
 printf("Tax paid: %.2f\n",tax);
 printf("Net income: %.2f/n",net);
 return 0;
}
