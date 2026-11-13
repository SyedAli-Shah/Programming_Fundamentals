#include <stdio.h>

int calculateTotal(int *account, int size)
{
    int total=0;
    for (int i=0;i<size;i++)
    {
        total+=*(account+i);
    }
    return total;
}

int deposit(int balance, int amount)
{
    return balance+amount;
}

int withdraw(int balance, int amount)
{
    return balance-amount;
}

int processTransaction(int balance, int amount, int (*operation)(int,int))
{
    return operation(balance,amount);
}

int main ()
{
    int balance[]={15000,25000,18000,32000,12000};
    int a,b;
    int *p=balance;

    printf("Enter The Number of Customer of Which Value You Want TO Update (1-5): ");
    if (scanf("%d",&a)!=1 || a<1 || a>5)
    {
        printf("Invalid customer number.\n");
        return 1;
    }

    printf("Enter its updated Value: ");
    if (scanf("%d",&b)!=1 || b<0)
    {
        printf("Invalid balance.\n");
        return 1;
    }

    printf("The Original Balance of Customer %d is %d and its Address is %p\n",
           a,*(p+a-1),(void *)(p+a-1));
    *(p+a-1)=b;
    printf("The Updated Balance of Customer %d is %d and its Address is %p\n\n",
           a,*(p+a-1),(void *)(p+a-1));

    int transactions[2][3]=
    {
        {120000,150000,180000},
        {200000,170000,220000}
    };
    int (*x)[3]=transactions;
    int c[2]={0,0};

    for (int i=0;i<2;i++)
    {
        printf("Branch %d Transactions:\n",i+1);
        printf("Row Address: %p\n",(void *)(x+i));
        for (int j=0;j<3;j++)
        {
            printf("Transaction %d Value: %d, Address: %p\n",
                   j+1,*(*(x+i)+j),(void *)(*(x+i)+j));
            c[i]+=*(*(x+i)+j);
        }
        printf("\n");
    }

    for (int i=0;i<2;i++)
    {
        printf("The Total Transaction amount of branch %d is %d\n",i+1,c[i]);
    }

    int branch1[]={15000,23000,32000};
    int branch2[]={12000,21000,27000,35000};
    int *accounts[]={branch1,branch2};
    int accountSize[]={3,4};

    for (int i=0;i<2;i++)
    {
        printf("\nBranch %d Customer Balances:\n",i+1);
        for (int j=0;j<accountSize[i];j++)
        {
            printf("Customer %d Balance: %d, Address: %p\n",
                   j+1,*(*(accounts+i)+j),(void *)(*(accounts+i)+j));
        }
        printf("The Total Balance of branch %d is %d\n",
               i+1,calculateTotal(*(accounts+i),accountSize[i]));
    }

    int amount;
    printf("\nEnter deposit amount for Customer %d: ",a);
    if (scanf("%d",&amount)!=1 || amount<0)
    {
        printf("Invalid deposit amount.\n");
        return 1;
    }
    *(p+a-1)=processTransaction(*(p+a-1),amount,deposit);
    printf("Balance after deposit: %d\n",*(p+a-1));

    printf("Enter withdrawal amount for Customer %d: ",a);
    if (scanf("%d",&amount)!=1 || amount<0 || amount>*(p+a-1))
    {
        printf("Invalid withdrawal amount.\n");
        return 1;
    }
    *(p+a-1)=processTransaction(*(p+a-1),amount,withdraw);
    printf("Balance after withdrawal: %d\n",*(p+a-1));

    return 0;
}
