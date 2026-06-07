#include <stdio.h>
#include <string.h>
typedef enum compte
{SAVINGS,CURRENT,FIXED_DEPOSIT}account_type;
account_type fct (char C[100])
{ int temp;
do {
printf ("veulliez choisir le type de votre compte : \n");
printf ("0-savings\n 1-current\n 2-fixed_deposit\n");
scanf ("%d",&temp);
}while((temp<0)||(temp>2));
switch (temp)
{
case 0 :{strcpy (C,"SAVINGS");break;}
case 1 :{strcpy (C,"CURRENT");break;}
case 2 :{strcpy (C,"FIXED_DEPOSIT");break;}
default : {printf ("erreur veulliez rechoisir");break;}
}
}
typedef struct bank
{
long int account_number;
char account_holder[50];
float balance;
char account[100];
}BankAccount;
int main ()
{
BankAccount T[10];
int n;
do{
printf ("veulliez saisir le nombre de comptes que vous voulez saisir sachant que les limites sont 3 et 10 \n");
scanf("%d",&n);
}while((n<3)||(n>10));
int i;
for (i=0;i<n;i++)
{
printf ("veulliez donner le numéro du compte :\n");
scanf ("%ld",&T[i].account_number);
printf ("veulliez saisir votre nom :\n");
scanf ("%s",T[i].account_holder);
fct (T[i].account);
printf ("veulliez donner le solde du compte \n");
scanf("%f",&T[i].balance);
}
printf ("les comptes avec le solde sup à 5000 :\n");
for (i=0;i<n;i++)
{
if (5000<T[i].balance) 
{
printf ("Account %d\n",i);
printf ("Number : %ld\n",T[i].account_number);
printf ("Holder : %s\n",T[i].account_holder);
printf ("Balance : %f\n",T[i].balance);
printf ("Type : %s\n",T[i].account);
}
}
float total=0;
for (i=0;i<n;i++)
{
total= total+T[i].balance;
}
printf ("Total Balance : %f\n",total);
return 0;
}
