#include <stdio.h>
#include <stdlib.h>

/*	Definir un tableau 

	
	int tableau [4];  si on utilise juste cette fonction, avec printf ("%d", tableau), cela nous renverra l'adresse où se trouve tableau, on obtient un pointeur */

//	tableau [0] = 23;
//	tableau [1] = 289; /* si on indique l'indice de la case tableau,on obtiendra la valeur
//	tableau [2] = 56;   printf("%d", tableau [2]) = 56 */
//	tableau [3] = 8;  /* tableau est un pointeur et on peut utiliser * pour savoir la 1êre				 valeur printf("%d", *tableau) = 23 ici. */

//	tableau [1]  renvoie la valeur de la seconde case (la première case étant 0) 
//	*(tableau +1) // Identique, cela renvoie la valeur contenue dans le seconde case


//	 printf("Case 1:  %d", tableau [0])
//	 printf("Case 2:  %d", tableau [1])
//	 printf("Case 3:  %d", tableau [2])
//	 printf("Case 4 :  %d", tableau [3]) 


	//	Tableau à taille dynamique

	
//	int taille = 7;  depuis une C99,on peut créer des tableaux avec une variable
//	int tableau [taille];  Mais interdit, nous devant utiliser une dimension fixe 
//			       C'est seulement possible avec l'allocation dynamique 
	

/*	int tableau [4], i = 0; // variable permettant de parcourir le tableau 
	
	tableau [0] = 17;	
	tableau [1] = 177;	
	tableau [2] = 12;	
	tableau [3] = 30;	
	
	// Pour eviter la repetition si je veux afficher les valeurs de chaque cases, j'utilise FOR
	for (i = 2 ; i < 4 ; i++)
{
	printf("%d\n", tableau [i]); // C'est i  qui va permettre de rendre le programme moins					lourd / i vaut successivement 0, 1, 3 et 3
}

	return 0;
} */
	
//	int main ()

//	int tableau [4], i = 0; 
//	int tableau [4] = {87, 67, 98}, i = 0;
//	int tableau[] = {0, 0, 0,0 }; // En fonction des valeurs entre les accolade, le progra						mme saura la taille du tableau

	// On initialise le talbeau 
//	for (i = 0 ; i < 4 ; i++)
//{
//	tableau [i] = 0;  On peut enlever cette variable car déclaré en 2ème ligne


//	for (i = 0 ; i < 4 ; i++)  Idem, l'initialisation a été faite plus haut
	
//	printf("%d\n", tableau [i]);

//}
//	return 0;
//}

/*	void affiche (int *tableau, int tailleTableau);

	int main ()
{
	int tableau [4] = {45, 56, 5};

	// on affiche le contenue du tableau
	affiche(tableau, 4);

}

	void affiche (int *tableau,  int tailleTableau) // int tableau[]
{
	int i;

	for (i = 0,; i < tailleTableau ; i++)
	{
		printf("%d\n", tableau[i]);
	
} */

//	Calculer la somme d'un tableau

      int sommeTableau(int tableau [], int tailleTableau);
	
	int main ()
{ 	
	int tableau [5] = {67, 78, 45};
	
	sommeTableau (tableau, 5);
	
	
	return 0;
	
} 

	int sommeTableau (int tableau[], int tailleTableau)
{
	int resultat = 0;
	{
	for (int i =0  ; i < tailleTableau; i++)

		resultat += tableau[i];
	}
		

	return resultat;


}
	/* Calculer la moyenne d'un tableau

	
	double moyenneTableau (int tableau [], int tailleTableau)
{
	int resultat = 0;
	for (i =0 ; i < tailleTableau; i++)
	{
		resultat += tableau [i];

	}

	return (double)somme/(double)tailleTableau;
}
*/
	
	

	

