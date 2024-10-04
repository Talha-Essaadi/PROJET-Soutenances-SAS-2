




void Recherche_nom_case_4_case2 () {
    FakeData () ;
    char statut[50] ;
 printf("Entre le statut de réservations  : \n");
 scanf("%s", statut);

        int Trucking_Condition_Recherche_index = -3;
    for (int i = 0 ; i < nombre_reservation ; i++) {

         if ( strcmp(reservation_list[i].statut, statut) == 0) {
             
            Trucking_Condition_Recherche_index++;
                                    
                printf("le nom : %s\n", reservation_list[i].statut);
                
                printf("le prenom : %s\n", reservation_list[i].prenom);

                printf("le numero de telephone : %d\n", reservation_list[i].numero);

                printf("l'age : %d\n", reservation_list[i].age);
                
                
                printf("le statut  ; %s\n", reservation_list[i].statut);
                
                
                printf("la date de reservation JJ-MM-AAAA : %d-%d-%d\n",reservation_list[i].jour ,reservation_list[i].mois ,reservation_list[i].annee );
                
                printf("le reference   : %d", reservation_list[i].reference ); 
                printf("\n");
                printf("\n");
                printf("***********************************************************\n");
                        
                            
    }/////if
           

 }//for 


             
  
 

if (Trucking_Condition_Recherche_index == -3)  { 
 ////////***********
     printf("Réservation non trouvée.");
 }////else if

}//fonction

void Recherche_Case_4 () {
    FakeData () ;
    int choix ;
    printf("1.Recherche des réservations par nom : \n");
   printf("2. Recherche des réservations par statut : \n");
  printf("Choisissez une option : ");
  scanf("%d", &choix);

  
       

switch(choix) {
    case 1 :
    Recherche_nom_case_4 ();
    printf("number 1 case 5");
    break ;
    case 2 :
    Recherche_nom_case_4_case2 () ;
    printf("number 2 case 5");
    break ;

}//switch

}//fonction
////////////////////////////////////////////////////////////////////////////////////////////////

