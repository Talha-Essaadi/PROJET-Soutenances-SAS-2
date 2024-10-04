/*
goto menu_list : pour afficher minu ,
vrable int x :  pour Choisissez une option dand menu ,
*/

#include <stdio.h>
void Ajouter () {
    /*
    Entrez le nom: 
Entrez le prénom: 

    */
   printf("Entrez le nom : \n"); 
   printf("Entrez le prenom : \n"); 
   printf("Entrez le numero de telephone : \n"); 
   printf("Entrez l'age : \n"); 
   printf("Entrez le statut (valide, reporte, annule, traite) : \n"); 
   printf("Entrez la date de reservation JJ-MM-AAAA : \n"); 
   printf("votre reference est  : \n"); 
}

int main () {



int x ;
/*
1. Ajouter une réservation :
2. Modifier ou supprimer une réservation :
3. Afficher les détails d'une réservation :
4. Tri des réservations :
5. Recherche des réservations :
6. Statistiques :
*/
menu_list :

printf("              \n");
printf("----- Systeme gérer les réservations de rendez-vous dentaires -----\n");
printf("1. Ajouter une réservation \n");
printf("2. Modifier ou supprimer une réservation \n");
printf("3. Afficher les détails d'une réservation \n");
printf("4. Tri des réservations \n");
printf("5. Recherche des réservations \n");
printf("6. Statistiques \n");
printf("0. Quitter\n");
printf("Choisissez une option : ");
scanf("%d", &x);



char *T[100] ;
int i = 0 ;
switch (x) {

    case 1 :
    Ajouter () ;
      printf("number 1\n");
      goto menu_list ;
    break ;
    case 2 :
    printf("number 2\n");
     goto menu_list ;
    break ;
    case 3 :
    printf("number 3\n");
     goto menu_list ;
    break ;
    case 4 :
    printf("number 4\n");
     goto menu_list ;
    break ;
    case 5 :
    printf("number 5\n");
     goto menu_list ;
    break ;
    case 6 :
    printf("number 6\n");
     goto menu_list ;
    break ;
    case 0 :
    printf("Merci pour choisi us\n");
     return 0 ;
    break ;

    default :
        printf("le nombre est inccorect\n");
        goto menu_list ;


}


return 0 ;

}
