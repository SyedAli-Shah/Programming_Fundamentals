#include <stdio.h>
int main(){
    printf("Hello! Sir Welcome To ATM.\nEnter Your Choice.\n1.Balance Inquiry\n2.Cash Withdrawal\n");
    printf("3.Cash Deposit\n4.Pin Change\n");
    int choice;
    scanf("%d",&choice);
    float sav_acc_bal=45000.0,cu_acc_bal=15000.0,z;
    int pin_ca=1111,pin_sa=2222,x;
    switch (choice)
    case 1:
    {int y;
    printf("Which Account Balance Do you want to see?\n1.Current Account\n2.Saving Account\n");
    scanf("%d",&y);
    switch (y)
    case 1:
    {printf("Enter Current Account PIN:");
    scanf("%d",&x);
    if (pin_ca==x)
    {printf("Your Current Account Balance is %.2f\n",cu_acc_bal);}
    else {printf("You Entered wrong pin.\nPLease Try Again.\n");}
    break;}
    case 2:
    {printf("Enter Saving Account PIN:");
    scanf("%d",&x);
    if (pin_sa==x)
    {printf("Your Saving Account Balance is %.2f\n",sav_acc_bal);}
    else {printf("You Entered wrong Pin.\nPlease Try Again.\n");}
    break;}
    default:
    {printf("You Entered wrong Choice.");
    break;}
    break;}
    case 2:
    {int y;
    printf("From Which Account do you want to Withdraw Cash.\n1.Current Account\n2.Saving Account");
    scanf("%d",&y);
    switch (y)
    case 1:
    {printf("Enter Current Account PIN:");
    scanf("%d",&x);
    if (pin_ca==x)
    {printf("How much money do you want to withdraw:");
    scanf("%f",&z);
    if (z<=cu_acc_bal)
    {printf("Succesfully withdrawal Rs:%.2f\n",z);
    cu_acc_bal=cu_acc_bal-z;}
    else {printf("You don't Have Enough Balance.\n");}}
    else {printf("You Entered Wrong Pin.\nPlease Try Again.\n");}
    break;}
    case 2:
    {printf("Enter Saving Acount Pin:");
    scanf("%d",&x);
    if (pin_sa==x)
    {printf("How much money do you want to withdraw:");
    sccanf("%f",&z);
    if (z<=sav_acc_bal)
    {printF("Succesfully withdrawal Rs:%.2f\n");
    sav_acc_bal=sav_acc_bal-z;}
    else {printf("You don't Have Enough Balance.\n");}}
    else {printf("You Entered Wrong Pin.\nPlease Try Again.\n");}
    break;}}
    return 0;
}





