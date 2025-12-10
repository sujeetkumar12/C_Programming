/*Basic salary of an employee is input through the keyboard. The DA is 25% of the basic salary while the
HRA is 15% of the basic salary. Provident Fund is deducted at the rate of 10% of the gross salary
(BS+DA+HRA). Program to calculate the Net Salary.*/

#include<stdio.h>
#include<math.h>
int main()
{
 float BS,DA,HRA,Net_salary;
 printf("Enter the basic salary of the employee\n");
 scanf("%f",&BS);
 DA=0.25*BS; // 25 percent of the basic salary
 HRA=0.15*BS; // 15 percent of the basic salary
 Net_salary=BS-(0.10*(BS+DA+HRA));
 printf("The net salary of the employee is: %f",Net_salary);
 return 0;
}