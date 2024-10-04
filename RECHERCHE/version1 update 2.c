#include <stdio.h>


void Recherche () {
     int Find_reference ;
     printf("Entrez la référence de la réservation: ");
     scanf("%d", &Find_reference);
     
     int Trucking_Condition_Recherche_index = 0;
     for (int i = 0 ; i < nombre_reservation ; i++) {
         if (Find_reference == reservation_list[i].reference) {
             Trucking_Condition_Recherche_index = i;
             break;
    }/////if
    
     }  ////// for 
         
       /***Trucking***/  if (Trucking_Condition_Recherche_index != 0) {
             
   printf("le nom : %s\n", reservation_list[Trucking_Condition_Recherche_index].name);
   
   printf("le prenom : %s\n", reservation_list[Trucking_Condition_Recherche_index].prenom);

   printf("le numero de telephone : %d\n", reservation_list[Trucking_Condition_Recherche_index].numero);

   printf("l'age : %d\n", reservation_list[Trucking_Condition_Recherche_index].age);
   
 
   printf("le statut  ; %s\n", reservation_list[Trucking_Condition_Recherche_index].statut);
   
   
   printf("la date de reservation JJ-MM-AAAA : %d-%d-%d\n",reservation_list[Trucking_Condition_Recherche_index].jour ,reservation_list[Trucking_Condition_Recherche_index].mois ,reservation_list[Trucking_Condition_Recherche_index].annee );
   
   printf("le reference   : %d", reservation_list[Trucking_Condition_Recherche_index].reference ); 
   printf("\n");
   printf("\n");
 
  }// if
 else  { 
 ////////***********
     printf("Réservation non trouvée.");
 }////else if
     
 }//// fonction recherche
////////////////////////////// Recherche ^^^^^^^^ 

