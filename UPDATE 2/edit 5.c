void RechercheCase_2 () {
     int Find_ref ;
     printf("Entrez la référence de la réservation: ");
     scanf("%d", &Find_ref);
     
     int Trucking_Condition_and_index = -3;
     for (int i = 0 ; i < nombre_reservation ; i++) {
         if (Find_ref == reservation_list[i].reference) {
             Trucking_Condition_and_index = i;
             break;
    }/////if
    
     }  ////// for 
     
         int choix ;
        if (Trucking_Condition_and_index != -3) {
                            /*
                            1. Modifier la réservation
                2. Supprimer la réservation
                Choisissez une option:
                            */
            CASE_2 :
   printf("1. Modifier la réservation \n");
   printf("2. Supprimer la réservation\n");
  printf("Choisissez une option : ");
  scanf("%d", &choix);

switch(choix) {
    case 1 :
    printf("number : 1\n");
    break;
     case 2 :
    printf("number : 2\n");
    break;

     default :
        printf("le nombre est inccorect\n");
        goto CASE_2 ;


}
}

  // if
 else  { 
 ////////***********
     printf("Réservation non trouvée.");
 }////else if
     
 }//// fonction recherche