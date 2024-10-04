 printf("Entrez le nom : "); 
   printf("%s",  reservation_list[nombre_reservation].name);
   printf("Entrez le prenom : "); 
   printf("%s", reservation_list[nombre_reservation].prenom);
   printf("Entrez le numero de telephone : "); 
   printf("%s", reservation_list[nombre_reservation].numero);
   printf("Entrez l'age : "); 
   printf("%s", reservation_list[nombre_reservation].age);
   printf("Entrez le statut (valide, reporte, annule, traite) : "); 
   printf("%s", &reservation_list[nombre_reservation].statut);
   
   printf("Entrez la date de reservation JJ-MM-AAAA : "); 
   printf("%d-%d-%d",reservation_list[nombre_reservation].jour ,reservation_list[nombre_reservation].mois ,reservation_list[nombre_reservation].annee );
   printf("votre reference est  : %d", reference ); 
   printf("\n");
}