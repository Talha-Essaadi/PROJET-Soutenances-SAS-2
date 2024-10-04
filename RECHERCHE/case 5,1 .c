void Recherche_nom () {

}

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

}

}
