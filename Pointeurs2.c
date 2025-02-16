#include <stdio.h>
#include <stdlib.h>

	// Fonctions sans pointeurs 
	

	void triple(int nombre)
{
	nombre *= 3; // Muliplier par 3 la valeur de la variable nombre
	
}
	int main () 
{
	int value = 10;
	triple(value); // Pas besoin de valeur de retour vu que c'est type void
	printf ("La valeur de value : %d\n", value);
	return 0;
}


	// Fonction avec pointeur

	void triple(int* nombre)
{
	*nombre *= 3;
}

	int main () 
{
	int value =10;  // On peut aussi faire int *pointeur =&value 
	triple (&value); // Et aussi  triple (pointeur)
	printf("La valeur de value :%d\n", value);
