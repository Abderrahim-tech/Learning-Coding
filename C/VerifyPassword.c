#include <stdio.h>
#include <string.h>
char mp [10] = "azerty123";
char essai [10];
int i=0;
int main ()
{
do 
{
printf ("veillez entrer le mot de passe : ");
scanf ("%s",essai);
if (strcmp(mp,essai)==0)
{
printf ("le mot de passe est correct !\n");
}
else
{
printf ("mot de passe incorrect veillez réessayer \n");
}
i++;
} while ((i<3)&&(strcmp(mp,essai)!=0));
}
