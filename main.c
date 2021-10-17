#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char nom[15],prenom[50],civ,situation[50],mail[50],cont[15];
int annee,age;

int main()
{
    printf("\t***** BIENVENUE SUR NOTRE PLATEFORME *****\n\n");
    printf("\tVeuillez remplir le questionnaire suivant :\n");
    printf("\tNom :");
    gets(nom);
    //scanf("%s",&nom);
    printf("\tPrenom :");
    gets(prenom);
   // scanf("%s",&prenom);
    printf("\tContact :");
    //scanf("%s",&cont);
    gets(cont);
    printf("\tMail :");
    gets(mail);
    //scanf("%s",&mail);
    printf("\tAnnee de naissance :");
    scanf("%d",&annee);
    age=2021-annee;
    if(age<20){
        printf("\tCandidature rejetee vous etes trop jeune\n");
    }
    else if(age>40){
        printf("\tCandidature rejetee vous etes trop vieux\n");

    }
    else{
        printf("\tCivilite :\n");
        do{
        printf("\t\t1-Monsieur\n\t\t2-Madame\n\t\t3-Mademoiselle\n\t\t\t");
        scanf("%s",&civ);

        }while((civ!='1')&&(civ!='2')&&(civ!='3'));
        printf("\tSituation matrimoniale :");
        scanf("%s",&situation);
        printf("\n\t\t\t Merci ");
        switch(civ)
        {
        case '1':
          {
              printf("Monsieur ");
              break;
          }
          case '2':
          {
              printf("Madame ");
              break;
          }
          case '3':
          {
              printf("Mademoiselle ");
              break;
          }



        }

        printf("%s %s\n",nom,prenom);

        printf("Vous avez %d ans, vous etes apte pour la suite \n",age);
        printf("Nous vous enverrons un email de confirmation a l'adresse %s \n ou un message sur le numero %s \n",mail,cont);

    }
    getch();
    return 0;
}
