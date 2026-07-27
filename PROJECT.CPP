#include<stdio.h>
#include<string.h>
int main()
{
float income,tax=0;
FILE*fp;
printf("\nenter your annual income:");
scanf("%f",&income);
if(income<=400000){
tax=0;}
else if(income<=800000){
tax=(income-400000)*0.05;}
else if(income<=1200000){
tax=20000+(income-800000)*0.10;}
else if(income<=1600000){
tax=60000+(income-1200000)*0.15;}
else if(income<=2000000){
tax=120000+(income-1600000)*0.20;}
else{
tax=200000+(income-2000000)*0.30;}
printf("\nannual income:Rs.%2f\n",income);
printf("TAX NEED TO PAY:Rs.%2f\n",tax);
fp=fopen("tax_bill.txt","w");
if(fp==NULL)
{
printf("error could not find the details try again.\n");
return 1;
}
fprintf(fp,"-----------Income Tax Report-------------\n");
fprintf(fp,"ANNUAL INCOME:Rs.%2f\n",income);
fprintf(fp,"TAX NEED TO PAY:Rs.%2f\n",tax);
fprintf(fp,"-----------------------------------------\n");
fprintf(fp,"----checked by officer ------------------\n");
fclose(fp);
printf("\nResult saved to tax_bill.txt");
return 0;
}
