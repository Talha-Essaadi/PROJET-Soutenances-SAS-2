/*
goto menu_list : pour afficher minu ,
vrable int x :  pour Choisissez une option dand menu ,
*/

#include <stdio.h>
/////////////// GLOBAL VARAIBLES >>>>>>>>>>
int nombre_reservation = 0 ;
int reference = 1000 ;
///////////////////////// GLOBAL VARAIBLES ^^^^^^^^

struct reservations {
     char name[50];
      char prenom[50];
      int numero ;
       int age ;
       char statut[50];
       int jour ;
       int mois ;
       int annee ;
       
  
};

struct reservations reservation_list[100];




////////////////   STOCKER LES DONNE ^^^^^^^

//////////////////// FONCTION AJOUTER >>>>>>>>>>
void Ajouter () {
    /*
    Entrez le nom: 
Entrez le prénom: 

    */
   printf("Entrez le nom : "); 
   scanf("%s", &reservation_list[nombre_reservation].name);
   printf("Entrez le prenom : "); 
   scanf("%s", &reservation_list[nombre_reservation].prenom);
   printf("Entrez le numero de telephone : "); 
   scanf("%s", &reservation_list[nombre_reservation].numero);
   printf("Entrez l'age : "); 
   scanf("%s", &reservation_list[nombre_reservation].age);
   printf("Entrez le statut (valide, reporte, annule, traite) : "); 
   scanf("%s", &reservation_list[nombre_reservation].statut);
   
   printf("Entrez la date de reservation JJ-MM-AAAA : "); 
   scanf("%d-%d-%d",&reservation_list[nombre_reservation].jour ,&reservation_list[nombre_reservation].mois ,&reservation_list[nombre_reservation].annee );
   printf("votre reference est  : %d", reference ); 
   
   nombre_reservation++;// increase one for stocker next valeur dans next element
   reference++;
}
////////////////////////// FONCTION AJOUTER ^^^^^^^^


int main () {

int x ;
/*
1. Ajouter une reservation :

*/
menu_list :

printf("              \n");
printf("----- Systeme gerer les reservations de rendez-vous dentaires -----\n");
printf("1. Ajouter une reservation \n");
printf("2. Modifier ou supprimer une reservation \n");
printf("3. Afficher les details d'une reservation \n");
printf("4. Tri des reservations \n");
printf("5. Recherche des reservations \n");
printf("6. Statistiques \n");
printf("7. Quitter\n");
printf("Choisissez une option : ");
scanf("%d", &x);





switch (x) {

    case 1 :
    Ajouter () ;
      
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
    case 7 :
    printf("Merci pour choisi us\n");
     return 0 ;
    break ;

    default :
        printf("le nombre est inccorect\n");
        goto menu_list ;


}


return 0 ;

}


