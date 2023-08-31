#include<stdio.h> 
void creation(); 
void deposit(); 
void withdraw(); 
void Lowbal(); 
int x=0,i=1001; 
struct bank
{
int no;
char name[20]; 
float bal;
float dep;
}s[100];
int main()
{
int ch; 
do
{
printf("\n ******************"); 
printf("\n BANKING PROCESS ");
printf("\n ******************");
printf("\n 1.Create New Account"); 
printf("\n 2.Cash Deposit");
printf("\n 3.Cash Withdraw"); 
printf("\n 4.Low Balance Enquiry"); 
printf("\n 5.Exit");
printf("\n Enter your Choice:"); 
scanf("\n %d",&ch); 
switch(ch)
{
case 1: creation(); 
break;
case 2: deposit(); 
break;
case 3: withdraw(); 
break;
case 4: Lowbal(); 
break;
case 5:
break;
default:printf("Choose a Valid option!!");
}
}
while(ch!=5);
}
void creation()
{
printf("\n ********************");
KGISL INSTITUTE OF TECHNOLOGY 
20IT54
711720205053
THEJASKUMAR.B
printf("\n NEW ACCOUNT CREATION");
printf("\n ********************"); 
printf("\n your account number is: %d",i); 
s[x].no=i;
printf("\n Enter your name:"); 
scanf("%s",s[x].name);
printf("\n your deposit is minimum Rs.500"); 
s[x].dep=500;
x++;i++;
}
void deposit()
{
int no,y=0,m=0;float xx;
printf("\n ******************"); 
printf("\n CASH DEPOSIT"); 
printf("\n ******************");
printf("\n Enter your Account Number:"); 
scanf("%d",&no);
for(y=0;y<i;y++)
{
if(s[y].no==no) 
m=y;
}
if(s[m].no==no)
{
printf("\n Account number:%d",s[m].no); 
printf("\n Name:%s",s[m].name);
printf("\n deposit:%f",s[m].dep); 
printf("\n Deposited amount:"); 
scanf("%f",&xx); 
s[m].dep+=xx;
printf("\n The balance in account is :%f",s[m].dep);
}
else
{
printf("\n Account Number is Invalid");
}
}
void withdraw()
{
int no,y=0,m=0; 
float xx;
printf("\n ***********************"); 
printf("\n cash withdraw");
printf("\n ***********************"); 
printf("\n Enter your Account Number:"); 
scanf("%d",&no);
for(y=0;y<i;y++)
{
if(s[y].no==no)
m=y;
}
if(s[m].no==no)
{
printf("\n account number:%d",s[m].no); 
printf("\n Name:%s",s[m].name);
printf("\n Deposit:%f",s[m].dep); 
printf("\n Withdraw amount:"); 
scanf("%f",&xx); 
if(s[m].dep<xx+500)
{
printf("\n Cannot Withdraw your accoumt has minimum balance");
}
else
{
s[m].dep=xx;
printf("\n The balance amount in account is :%f",s[m].dep);
}
}
else 
printf("Invalid");
}
void Lowbal()
{
int no,y=0;
float xx;
printf("\n ****************");
printf("\n Following Account Holder's Balance<1000"); 
printf("\n ****************");
for(y=0;y<x;y++)
{
if(s[y].dep< 1000)
{
printf("\n\n Account number:%d",s[y].no);printf("\n Name:%s",s[y].name);
}
}
}
