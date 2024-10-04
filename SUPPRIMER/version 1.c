

void supprime_reservation() {
         int etd_id; 
    int found = -1;
   printf("Entrez la référence de la réservation: ");
    scanf(" %d",&etd_id);

   for(int i=0 ; i< nombre_reservation ; i++){
        if(reservation_list[i].reference == etd_id){
            found = i;
            break;

        }
   }

   if(found!= -1){
        for ( int j = found ; j < nombre_reservation -1 ; j++){
               reservation_list[j] = reservation_list[j+1];
         }nombre_reservation--;
    }else{
            printf("Le reference est introvable!\n.");
        }

        printf("Suppression complete!");

}