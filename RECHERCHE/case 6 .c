void Recherche () {
     //int Find_reference ;
     //printf("Entrez la référence de la réservation: ");
     //scanf("%d", &Find_reference);
     
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
 //}////else if
     
 }//// fonction recherche
/////////////////////
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

printf("Moyenne d'âge: %d \n", Trucking_0_18);
printf("Patients (0-18 ans): %d\n", Trucking_0_18);
printf("Patients (19-35 ans): %d\n",Trucking_19_35);
printf("Patients (36+ ans): %d", Trucking_36);
printf("Statut validé: \n");
printf("Statut reporté: \n");
printf("Statut annulé: \n");
printf("Statut traité: \n");

 }