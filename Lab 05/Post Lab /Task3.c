#include <stdio.h>
int main(){
    int appointment,doctor_available,registration_completed;
    printf("Do you have an Appointment.\n1 for Yes.\n0 for No.\n");
    scanf("%d",&appointment);
    printf("Is Doctor Available ?\n1 for Yes.\n0 for No.\n");
    scanf("%d",&doctor_available);
    printf("Is Your Registration Completed ?\n1 for Yes.\n0 for No.\n");
    scanf("%d",&registration_completed);
    if (appointment==1)
    {if (doctor_available==1)
    {if (registration_completed==1)
    {printf("You can go and meet the Doctor.");}
    else {printf("You can not meet the doctor because you don't have your registration completed yet.");}}
    else {printf("You can not meet the doctor because the doctor isn't available.");}}
    else {printf("You can not Meet the doctor because you don't have appointment.");}
    return 0;
}