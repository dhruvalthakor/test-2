#include <stdio.h>

int main()
{
    // Q.1 Write a Program to check whether a number is even or odd using the ternary operator.
 int A;
 printf("enter your number ");
 scanf("%d",&A);
 (A%2==0)? printf("This number is Even"): printf("This number is odd");
    
    // Q2 month system.
   int month;
   printf("enter month name ");
   scanf("%d",&month);
   switch(month){
       case 1:{
           printf("January");
           break;
       }
       case 2:{
           printf("February");
           break;
       }
       case 3:{
           printf("March");
           break;
       }
       case 4:{
           printf("April");
           break;
       }
       case 5:{
           printf("May");
           break;
       }
       case 6:{
           printf("June");
           break;
       }
       case 7:{
           printf("July");
           break;
       }
       case 8:{
           printf("August");
           break;
       }case 9:{
           printf("September");
           break;
       }case 10:{
           printf("October");
           break;
       }
       case 11:{
           printf("November");
           break;
       }case 12:{
           printf("December");
           break;
       }
       default:
       printf("invelid number");
       
    }
    
   // Q3 given a year like 2000 and you have to tell is it leap year or not you have to take input from user
     int year;
 printf("enter your year ");
 scanf("%d",&year);
 (year%4==0)? printf("This year is leap"): printf("This number is not leap");

    return 0;
}