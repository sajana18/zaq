//ELECTRICITY BILL

#include<stdio.h>
int main()
{
    float units,charge,total;
    printf("enter the units: ");
    scanf("%f",&units);
    
    if(units<0)
    {
       printf("{invalid input\n");
       return 1;
       }
    
     if(units<=200)
    {
       charge=units*0.8+100;
    }
    else if(units<=300)
       {
         charge=200*0.8+(units-200)*0.9+100;
       }
    else
       {
         charge=200*0.8+100*0.9+((units-300)*1)+100;
       }
      //calculate the total amount
      total=charge+100;
      if(charge>400)
      {
          charge=charge+(charge*0.15);
      }
      
      //display the bill
      printf("...ELECTRICITY BILL...\n");
      printf("no. of units is:%f",units);
      printf("the total bill is:%f",charge);
      return 0;
 }
