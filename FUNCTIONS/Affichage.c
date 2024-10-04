#include <stdio.h>
int nombre_reservation = 1 ;

void affichage () {
    int affichage = nombre_reservation - 1 ;
   
   printf("le nom : %s",  reservation_list[affichage].name);
  
   printf("le prenom : %s", reservation_list[affichage].prenom);
  
   printf("le numero de telephone : %s", reservation_list[affichage].numero);
  
   printf("l'age : %s", reservation_list[affichage].age);
  
   printf("le statut est : %s", reservation_list[affichage].statut);
   
  
   printf("la date de reservation JJ-MM-AAAA est : %d-%d-%d",reservation_list[affichage].jour ,reservation_list[affichage].mois ,reservation_list[affichage].annee );
   printf("le reference est  : %d", reference ); 
   printf("\n");
}

