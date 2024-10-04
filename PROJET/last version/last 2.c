
/*
ajouter case  1 : yes
modify case 2 : yes
supprimer case 2 : 50%
recherche par ID est le nom case 5 : no 
recherche on case  3 : yes 
statistique case 6 : yes
affichache tous les reservation dans case  7 : yes


*/
/*

/* work now on case 6 : 

learn : algorithme de tri

// output :

Choisissez une option: 6
Moyenne d'âge: 43.60
Patients (0-18 ans): 2
Patients (19-35 ans): 0
Patients (36+ ans): 8
Statut validé: 3
Statut reporté: 3
Statut annulé: 2
Statut traité: 2

*/



/* work now on case 2 : 50%

learn : 

// output :
Choisissez une option: 2
Entrez la référence de la réservation: 

1. Modifier la réservation
2. Supprimer la réservation
Choisissez une option: 1
Entrez le nouveau nom: 
Entrez le nouveau prénom: 
Entrez le nouveau téléphone: 
Entrez le nouvel âge: 
Entrez le nouveau statut (validé, reporté, annulé, traité): 
Entrez la nouvelle date de réservation (dd-mm-yyyy): 

Réservation modifiée avec succès.

else if :



*/






/*version : 4 case 1 and case 3
fake data : yes
affichage all data : yes
reference : yes  "just change varaible"
*/

/* Functios :
FakeData () : pour stocker fake data ,
Ajouter () : pour ajouter reservation ,
affichage () : pour afficher tous les reservation stocker ,
Recherche () : pour recherche with reverence ,
*/

/*
goto menu_list : pour afficher minu ,
vrable int x :  pour Choisissez une option dand menu ,
*/

/*changes

change varaible nombre_reservation = 10 ;
because  i add FakeData

*/
/*
case 1 : yes

Affichage dans case 3 : yes
*/
#include <stdio.h>
#include <string.h>
/////////////// GLOBAL VARAIBLES >>>>>>>>>>
int nombre_reservation = 10 ;
//int reference = 1011 ;
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
       int reference ;
  
};

struct reservations reservation_list[100];

/////////////////////


void FakeData () {

    
/*
1. Ali, Al-Zahrani, 0501234567, 28, 01-09-2024  
2. Sarah, Al-Ansari, 0562345678, 34, 15-08-2024  
3. Youssef, Al-Badr, 0539876543, 22, 20-10-2024  
4. Leila, Al-Hashemi, 0551122334, 30, 03-12-2024  
5. Khaled, Al-Harbi, 0598765432, 40, 18-11-2024  
6. Mariam, Al-Faris, 0512349876, 26, 27-07-2024  
7. Nasser, Al-Ghamdi, 0545647382, 45, 09-06-2024  
8. Fatima, Al-Sharif, 0523498712, 33, 12-04-2024  
9. Ibrahim, Al-Otaibi, 0582736451, 29, 25-05-2024  
10. Hind, Al-Qurashi, 0572364512, 38, 14-02-2024
*/

 // Reservation 1 :  

 strcpy(reservation_list[0].name,"Ali");


strcpy(reservation_list[0].prenom,"Al-Zahrani");



reservation_list[0].numero = 501234567;

reservation_list[0].age = 28;

strcpy(reservation_list[0].statut, "valide");  
reservation_list[0].jour = 01;
reservation_list[0].mois = 9;
reservation_list[0].annee = 2024;
reservation_list[0].reference = 1001;


 // Reservation 2 : 
 

strcpy(reservation_list[1].name,"Sarah");

strcpy(reservation_list[1].prenom,"Al-Ansari");

reservation_list[1].numero = 562345678;

reservation_list[1].age = 34;

strcpy(reservation_list[1].statut, "valide");   
reservation_list[1].jour = 15;
reservation_list[1].mois = 8;
reservation_list[1].annee = 2024;
reservation_list[1].reference = 1002;




 // Reservation 3 :  
 
//reservation_list[2].name = "Youssef";
//reservation_list[2].prenom = "Al-Badr";
strcpy(reservation_list[2].name,"Youssef");
strcpy(reservation_list[2].prenom, "Al-Badr");
reservation_list[2].numero = 539876543;
reservation_list[2].age = 22;
  
strcpy(reservation_list[2].statut, "valide");   
reservation_list[2].jour = 20;
reservation_list[2].mois = 10;
reservation_list[2].annee = 2024;
reservation_list[2].reference = 1003;


 // Reservation 4 :  
  
//reservation_list[3].name = "Leila";
//reservation_list[3].prenom = "Al-Hashemi";
strcpy(reservation_list[3].name, "Leila");
strcpy(reservation_list[3].prenom,  "Al-Hashemi");
reservation_list[3].numero = 551122334;
reservation_list[3].age = 30;

strcpy(reservation_list[3].statut, "valide");    
reservation_list[3].jour = 03;
reservation_list[3].mois = 12;
reservation_list[3].annee = 2024;
reservation_list[3].reference = 1004;

 // Reservation 5 :  
  
//reservation_list[4].name = "Khaled";
//reservation_list[4].prenom = "Al-Harbi";
strcpy(reservation_list[4].name, "Khaled");
strcpy(reservation_list[4].prenom,  "Al-Harbi");
reservation_list[4].numero = 598765432;
reservation_list[4].age = 40;
 
strcpy(reservation_list[4].statut, "valide");   
reservation_list[4].jour = 18;
reservation_list[4].mois = 11;
reservation_list[4].annee = 2024;
reservation_list[4].reference = 1005;

 // Reservation 6 :  
  
//reservation_list[5].name = "Mariam";
//reservation_list[5].prenom = "Al-Faris";
strcpy(reservation_list[5].name, "Mariam");
strcpy(reservation_list[5].prenom,  "Al-Faris");
reservation_list[5].numero = 512349876;
reservation_list[5].age = 26;

strcpy(reservation_list[5].statut, "valide");     
reservation_list[5].jour = 27;
reservation_list[5].mois = 07;
reservation_list[5].annee = 2024;
reservation_list[5].reference = 1006;

 // Reservation 7 : 
   
//reservation_list[6].name = "Nasser";
//reservation_list[6].prenom = "Al-Ghamdi";
strcpy(reservation_list[6].name, "Nasser");
strcpy(reservation_list[6].prenom,  "Al-Ghamdi");
reservation_list[6].numero = 545647382;
reservation_list[6].age = 45;
 
strcpy(reservation_list[6].statut, "valide");   
reservation_list[6].jour = 9;
reservation_list[6].mois = 06;
reservation_list[6].annee = 2024;
reservation_list[6].reference = 1007;

 // Reservation 8 :  
 
//reservation_list[7].name = "Fatima";
//reservation_list[7].prenom = "Al-Sharif";
strcpy(reservation_list[7].name, "Fatima");
strcpy(reservation_list[7].prenom,  "Al-Sharif");
reservation_list[7].numero = 523498712;
reservation_list[7].age = 33;
 
strcpy(reservation_list[7].statut, "valide");    
reservation_list[7].jour = 12;
reservation_list[7].mois = 04;
reservation_list[7].annee = 2024;
reservation_list[7].reference = 1008;

 // Reservation 9 :  
  
//reservation_list[8].name = "Ibrahim";
//reservation_list[8].prenom = "Al-Otaibi";
strcpy(reservation_list[8].name, "Ibrahim");
strcpy(reservation_list[8].prenom,  "Al-Otaibi");
reservation_list[8].numero = 582736451;
reservation_list[8].age = 29;
  
strcpy(reservation_list[8].statut, "valide"); 
reservation_list[8].jour = 25;
reservation_list[8].mois = 05;
reservation_list[8].annee = 2024;
reservation_list[8].reference = 1009;
 // Reservation 10 :  
 
//reservation_list[9].name = "Hind";
//reservation_list[9].prenom = "Al-Qurashi";
strcpy(reservation_list[9].name, "Hind");
strcpy(reservation_list[9].prenom,  "Al-Qurashi");
reservation_list[9].numero = 572364512;
reservation_list[9].age = 38;

strcpy(reservation_list[9].statut, "valide");     
reservation_list[9].jour = 14;
reservation_list[9].mois = 02;
reservation_list[9].annee = 2024;
reservation_list[9].reference = 1010;

//

    printf("\n");

} ;

////////////////   STOCKER LES DONNE ^^^^^^^

//////////////////// FONCTION AJOUTER >>>>>>>>>>
void Ajouter () {
    /*
    Entrez le nom: 
Entrez le prénom: 

    */
   printf("Entrez le nom : "); 
   scanf("%s", &reservation_list[nombre_reservation].name);
   printf("%s\n", reservation_list[nombre_reservation].name);
   
   printf("Entrez le prenom : "); 
   scanf("%s", &reservation_list[nombre_reservation].prenom);
   printf("%s\n", reservation_list[nombre_reservation].prenom);
   printf("Entrez le numero de telephone : "); 
   scanf("%d", &reservation_list[nombre_reservation].numero);
   printf("%d\n", reservation_list[nombre_reservation].numero);
   printf("Entrez l'age : "); 
   scanf("%d", &reservation_list[nombre_reservation].age);
   printf("%d\n", reservation_list[nombre_reservation].age);
   
   printf("Entrez le statut (valide, reporte, annule, traite) : "); 
   scanf("%s", &reservation_list[nombre_reservation].statut);
   printf("%s\n", reservation_list[nombre_reservation].statut);
   
   printf("Entrez la date de reservation JJ-MM-AAAA : "); 
   scanf("%d-%d-%d",&reservation_list[nombre_reservation].jour ,&reservation_list[nombre_reservation].mois ,&reservation_list[nombre_reservation].annee );
   printf("%d-%d-%d\n",reservation_list[nombre_reservation].jour ,reservation_list[nombre_reservation].mois ,reservation_list[nombre_reservation].annee );
   
  // reservation_list[nombre_reservation-1].reference = 
  //FakeData ();
  int z = nombre_reservation ;
  z = z - 1;
  int k = reservation_list[z].reference  ;
  k = k + 1 ;
   printf("votre reference est  : %d", k ); 
   printf("\n");
   
   reservation_list[nombre_reservation].reference = k ;

   nombre_reservation++;// increase one for stocker next valeur dans next element
  // reference++;
      
   //reservation_list[nombre_reservation].reference = k ;
}
////////////////////////// FONCTION AJOUTER ^^^^^^^^
////////////////////////^^^^CASE 1 ^^^///////////////////////////////
////////////Fake Data >>>>>>>>>>>>>>>
//////case 10 : >>>>>>>
////////////////////////////// Recherche >>>>>>
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
////////////////////////////// Recherche ^^^^^^^^

/////////////////// Fake Data ^^^^^^^^^^^
//// case 3 >>>>
void affichage () {
    FakeData () ;
   // printf("222222222222222\n");
    int loop_reservation =1 ;
    //////////////////////
     

    /////////////////////////
    for(int i = 0 ; i < nombre_reservation ; i++) {
         printf("reservation : %d\n",loop_reservation );
    //int affichage = nombre_reservation - 1 ;
   

   printf("le nom : %s\n", reservation_list[i].name);
   
   printf("le prenom : %s\n", reservation_list[i].prenom);

   printf("le numero de telephone : %d\n", reservation_list[i].numero);

   printf("l'age : %d\n", reservation_list[i].age);
   
 
   printf("le statut  ; %s\n", reservation_list[i].statut);
   
   
   printf("la date de reservation JJ-MM-AAAA : %d-%d-%d\n",reservation_list[i].jour ,reservation_list[i].mois ,reservation_list[i].annee );
   
   printf("le reference   : %d", reservation_list[i].reference ); 
   printf("\n");
   printf("\n");
   loop_reservation++;
    }
   
   
} 
///////////////////////////////Affichage ^^^^^^^^^^^^^6
//////////////////////////////
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
//////////////////////////////fonction  modifier ^^^^^^^^^^^^
///////////////////////////// RechercheCase_6 >>>>>>>>>>>>>>>>>
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
printf("Patients (36+ ans): %d\n", Trucking_36);
printf("Statut validé: %d\n",Trucking_valide);
printf("Statut reporté: %d\n", Trucking_reporte);
printf("Statut annulé: %d\n", Trucking_annule);
printf("Statut traité: %d\n", Trucking_traite);

 }
//////////////////////////// RechercheCase_6 ^^^^^^^^^^^^^^^

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
printf("7. afficher tous les reservations \n");
printf("0. Quitter\n");

printf("Choisissez une option : ");
scanf("%d", &x);





switch (x) {

    case 1 :
    Ajouter () ;
      
      goto menu_list ;
    break ;
    case 2 :
    RechercheCase_2 ();
   
     goto menu_list ;
    break ;
    case 3 :
        Recherche () ;
    
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
    RechercheCase_6 ();
    printf("***********\n");
    
     goto menu_list ;
    break ;
  
    case 0 :
    printf("Merci pour choisi us\n");
     return 0 ;
       case 9 :
    FakeData () ;
    
    printf("number 9\n");
    
     goto menu_list ;
    break ;
    break ;
    case 7 :
    
    affichage () ;
    
     goto menu_list ;
    break ;

    default :
        printf("le nombre est inccorect\n");
        goto menu_list ;


}


return 0 ;

}
