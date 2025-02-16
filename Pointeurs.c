#include <stdio.h>
#include <stdlib.h>
/*
	int main () {

	int age =5;

	printf("Ton age est de %p\n", &age);

	return 0; 

}


	
	
	
	int*pointeursurDistance; // 1) signifie "Je crér un pointeur"
	pointeursurDistance = &distance; //2) signifie " pointeursurDistance" contient l'adresse de la variable age"
	

	int monPointeur = NULL;
	int distance = 67;
	int *pointeursurDistance = &distance; 


	int main () {
	
	
	int distance = 67;
	printf("La distance est la variable est %d\n", distance);
	printf("L'adresse de la variable est %p\n", &distance);
	
	int *pointeursurDistance;
	pointeursurDistance = &distance;


	printf("La valeur du pointeur est %p\n", pointeursurDistance);
	printf("La valeur contenue dans le pointeurs est %d\n", *pointeursurDistance);  le * demande la valeur de la variable dans l'adresse indiquée dans pointeursurDistance / Si on veut afficher l'adresse ("%p", pointeursurDistance) / L'adresse de la variable = valeur du pointeur
	
	return 0; 		  
	



	void triplePointeur (int *pointeursurDistance);

	int main () {
		int distance = 98;

		triplePointeur (&distance); // On envoie l'adresse de nombre à la fonction
		printf("%d", distance); // On affiche la variable nombre. La fonction a directement modifié la valeur de la variable car elle connaissait son adresse.
		
		return 0;


	}

	
	void triplePointeur (int* pointeursurDistance)
	{
		*pointeursurDistance  *= 3; // On multiplie par 3 la valeur de nombre
	}
	
	
	Ajouter un pointeur dans la fonction MAIN :

	void triplePointeur (int* pointeursurDistance);

	int main () {

		int distance = 55;
		int *pointeur = &distance; // pointeur prend l'adresse de distance
		
	triplePointeur(pointeur); // On envoie pointeur (l'adresse de distance) à la fonction
	printf("%d", *pointeur);  //  On affiche la valeur de distance avec *pointeur
				
	return 0;

}

 	void triplePointeur (int* pointeursurDistance)
	{
		*pointeursurDistance *=3; // On multiplie par 3 la valeur de distance
	} */		

	
	void triple(int*nombre)
        {






	SCAN F :

	int nombre = 0;
	scanf("%d\n", &nombre);

	int nombre = 0;
	int *pointeur = &nombre
	scanf("%d", pointeur);
