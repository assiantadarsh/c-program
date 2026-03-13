#include<stdio.h>
int main(){
printf("union bank of india\n");
char name ;
 int age ,contact_nu,customer_account_number,total_balance ,Credit,deposit ,Available_balance;
printf("enter your name:");
scanf("%s",& name);
printf(" enter your age:");
scanf("%d",& age);
printf(" enter your contact_nu:");
scanf("%d",& contact_nu);
printf(" enter your customer_account_number:");
scanf("%d",& customer_account_number);
printf("TOTAL AMOUNT IS : ");
scanf("%d",& total_balance);
printf("Credit:");
scanf("%d",& Credit);
printf("deposit :");
scanf("%d",& deposit);
Available_balance= total_balance + deposit - Credit;
printf("total available balance : %d\n",Available_balance);



printf("**********THANKYOU ******************");


return 0;


}