void Recherche_nom () {
    char nom[50] ;
 printf("Entre le nom de réservations  : \n");
 scanf("%s", nom);

int Trucking_Condition_Recherche_index = -3;
    for (int i = 0 ; i < nombre_reservation ; i++) {

         if ( strcmp(reservation_list[i].name, nom) == 0) {
             
            Trucking_Condition_Recherche_index = i;
             break;
         
             
    }/////if
           

 }//for 

  /***Trucking***/  if (Trucking_Condition_Recherche_index != -3) {
             
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

}//fonction

void Recherche_Case_5 () {
    FakeData () ;
    int choix ;
    printf("1.Recherche des réservations par référence : \n");
   printf("2. Recherche des réservations par nom : \n");
  printf("Choisissez une option : ");
  scanf("%d", &choix);

  
       

switch(choix) {
    case 1 :
    Recherche ();
    printf("number 1 case 5");
    break ;
    case 2 :
    Recherche_nom ();
    printf("number 2 case 5");
    break ;

}//switch

}//fonction
////////////////////////////////////////////////////////////////////////////////////////////////


/////////////////// recherche id >>>>>>>>>>>>>>

///////////////// recherche id ^^^^^^^^^^^^
void Recherche () {
     int Find_reference ;
     printf("Entrez la référence de la réservation: ");
     scanf("%d", &Find_reference);
     
     int Trucking_Condition_Recherche_index = -3;
     for (int i = 0 ; i < nombre_reservation ; i++) {
         if (Find_reference == reservation_list[i].reference) {
             Trucking_Condition_Recherche_index = i;
             break;
    }/////if
    
     }  ////// for 
         
       /***Trucking***/  if (Trucking_Condition_Recherche_index != -3) {
             
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
/////////////copy and changr >>>>>>
int Trucking_valide = 0;
    int Trucking_reporte = 0;
    int Trucking_annule = 0;
    int Trucking_traite = 0;


     for (int i = 0 ; i < nombre_reservation ; i++) {
         if ( strcmp(reservation_list[i].statut, "valide") == 0) {//Trucking_valide
             Trucking_valide ++;
           
             }/////if

         else if (strcmp(reservation_list[i].statut, "reporte") == 0 ) {//Trucking_reporte
             Trucking_reporte ++;
           
             }/////if 

        else if (  strcmp(reservation_list[i].statut, "annule") == 0 ) {//Trucking_annule
             Trucking_annule ++;
           
             }/////if 
        else if (strcmp(reservation_list[i].statut, "traite") == 0) {//Trucking_traite
            Trucking_traite ++;
        }
    
     } 
///////////////////copy and change statut to name