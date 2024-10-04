 void RechercheCase_6 () {

FakeData () ;
/* work now on case 6 : 

learn : algorithme de tri

// output :

Choisissez une option: 6

Moyenne d'âge: 56565
Patients (0-18 ans): 26
Patients (19-35 ans): 67
Patients (36+ ans): 83
Statut validé: 31
Statut reporté: 33
Statut annulé: 26
Statut traité: 29

*/
//////////////////// calculer statut >>>>>>>>>>>
// (valide, reporte, annule, traite)
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
/////////////////// caculer statut ^^^^^^^^^^^^^^^^
 int Trucking_0_18 = 0;
    int Trucking_19_35 = 0;
    int Trucking_36 = 0;


     for (int i = 0 ; i < nombre_reservation ; i++) {
         if ( reservation_list[i].age >= 0 && reservation_list[i].age <= 18) {
             Trucking_0_18 ++;
           
             }/////if

         else if ( reservation_list[i].age >18 && reservation_list[i].age <= 35) {
             Trucking_19_35 ++;
           
             }/////if 

        else if ( reservation_list[i].age > 36  ) {
             Trucking_36 ++;
           
             }/////if 
    
     } 

     /////////////////////////////moyen age >>>>>>>>>>>
     int calculer_Moyenne_Age = 0 ;
     int Somme_Moyenne_Age = 0 ;
      for (int i = 0 ; i < nombre_reservation ; i++) {
        Somme_Moyenne_Age  = Somme_Moyenne_Age + reservation_list[i].age ;



        calculer_Moyenne_Age = Somme_Moyenne_Age / nombre_reservation ;

    
     } 
     //////////////////////////////moyene age^^^^^^^^^^^

printf("Moyenne d'âge: %d \n", calculer_Moyenne_Age);
printf("Patients (0-18 ans): %d\n", Trucking_0_18);
printf("Patients (19-35 ans): %d\n",Trucking_19_35);
printf("Patients (36+ ans): %d", Trucking_36);
printf("Statut validé: %d\n",Trucking_valide);
printf("Statut reporté: %d\n", Trucking_reporte);
printf("Statut annulé: %d\n", Trucking_annule);
printf("Statut traité: %d\n", Trucking_traite);

 }