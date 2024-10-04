int RechercheCase_2 () {
    FakeData () ;
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
            start :
   printf("1. Modifier la réservation \n");
   printf("2. Supprimer la réservation\n");
  printf("Choisissez une option : ");
  scanf("%d", &choix);

switch(choix) {
    case 1 :
    /*
    Choisissez une option: 1
Entrez le nouveau nom: 
Entrez le nouveau prénom: 
Entrez le nouveau téléphone: 
Entrez le nouvel âge: 
Entrez le nouveau statut (validé, reporté, annulé, traité): 
Entrez la nouvelle date de réservation (dd-mm-yyyy): 

Réservation modifiée avec succès.
    */
   /*printf("Entrez le nouveau nom:\n");
   printf("Entrez le nouveau prénom: \n");
   printf("Entrez le nouveau téléphone:\n");
   printf("Entrez le nouvel âge: \n");
   printf("Entrez le nouveau statut (validé, reporté, annulé, traité):\n");
   printf("Entrez la nouvelle date de réservation (dd-mm-yyyy): \n");*/

    printf("Entrez le nouveau nom:"); 
   scanf("%s", &reservation_list[Trucking_Condition_and_index].name);
   printf("%s\n", reservation_list[Trucking_Condition_and_index].name);
   
    printf("Entrez le nouveau prénom: ");
   scanf("%s", &reservation_list[Trucking_Condition_and_index].prenom);
   printf("%s\n", reservation_list[Trucking_Condition_and_index].prenom);

   printf("Entrez le nouveau téléphone:"); 
   scanf("%d", &reservation_list[Trucking_Condition_and_index].numero);
   printf("%d\n", reservation_list[Trucking_Condition_and_index].numero);

   printf("Entrez le nouvel âge: "); 
   scanf("%d", &reservation_list[Trucking_Condition_and_index].age);
   printf("%d\n", reservation_list[Trucking_Condition_and_index].age);
   
   printf("Entrez le le nouveau statut (valide, reporte, annule, traite) : "); 
   scanf("%s", &reservation_list[Trucking_Condition_and_index].statut);
   printf("%s\n", reservation_list[Trucking_Condition_and_index].statut);
   
   printf("Entrez la nouvelle date de reservation JJ-MM-AAAA : "); 
   scanf("%d-%d-%d",&reservation_list[Trucking_Condition_and_index].jour ,&reservation_list[Trucking_Condition_and_index].mois ,&reservation_list[Trucking_Condition_and_index].annee );
   printf("%d-%d-%d\n",reservation_list[Trucking_Condition_and_index].jour ,reservation_list[Trucking_Condition_and_index].mois ,reservation_list[Trucking_Condition_and_index].annee );
   
   printf("Réservation modifiée avec succès.\n");

    printf("number : 1\n");
    break;
     case 2 :
    printf("number : 2\n");
    break;

     default :
        printf("le nombre est inccorect\n");
        goto start ;
        break;


}
}

  // if
 else  { 
 ////////***********
     printf("Réservation non trouvée.");
 }////else if
     
 }//// fonction recherche