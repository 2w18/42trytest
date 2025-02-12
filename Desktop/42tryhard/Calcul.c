#include <stdio.h>
#include <stdlib.h>

int main () 
{       
	int resultat = 0, nombre1 = 0, nombre2 = 0, nombre3 = 0;

	// On demande les nombres 1 & 2 à l'utilisateur				
	
	
         printf("Entre le nombre1 : ");
	 scanf("%d", &nombre1);
	 printf("Entrez le nombre2 : ");
	 scanf("%d",&nombre2);
	 printf("Entrez le nombre3 : ");
	 scanf("%d",&nombre3);

	 // On fait le calcul		

	 resultat = nombre1 -  nombre2 - nombre3; 

	 // Et on affiche la soustraction à l'écran :					    
	 printf("%d - %d - %d  = %d\n", nombre1, nombre2, nombre3,  resultat);

	
   	int valeur1 =10;
	int valeur = 30
	int resultat;
	
	resultat = valeur1 + valeur2;
	printf("%d\n", resultat);

         return 0;	
}
