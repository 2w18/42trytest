#include <stdio.h>
#include <stdlib.h>
	
         /* int age = 17; 

	if (age == 67 || argent > 122222)
	{
	printf ("Vous êtes proche de la retraîte !\n");			
        }
	else if (age < 20 && age <=26 )
	{
	printf("Tu as encore le temps, va bosser !\n");
	}
	else 
	{
	printf("Vous avez l'âge d'être en retraite !\n");
	}
	return 0;

	if(1) 
	{
		printf("c'est vrai\n");
	}
	else
	{
		printf("c'est faux");
	}	

	return 0;

	int age = 20;
	int majeur = 0;
	
	majeur = age >= 18;
	printf("Majeur vaut : %d\n", majeur);

	return 0; 

	int majeur = 1, vaccin =1;

	if (majeur && vaccin)
	{
		printf("Vous êtes majeur !");
	}
	else
	{
		printf("Vous êtes mineur");
	
	return 0;


	int majeur =1;

	if (majeur == 1)
	{
		printf("Vous êtes majeur !");
	}
	else
	{
		printf("Vous êtes mineur");
	}


	return 0
}
 	

	int age = 23;

	switch(age)
{
        case 2:
	printf("Salut bebe !");
	break;
        case 6:
        printf("Salut enfant !");
        break;
        case 15:
        printf("Salut ado !");
        break;
        case 27:
        printf("Salut jeune !");
        break;
        case 45:
	printf("Salut l'ancien!");
	break;
        default:
	printf("No réponses");
	break;
}

	return 0;
}*/

	int main () {

	int Menu = 0,  choixMenu1 = 1, choixMenu2 = 2, choixMenu3 = 3, choixMenu4 = 4;

	printf("==Menu==\n, 1.Royal Cheese\n, 2.Mc Deluxe\n, 3.McBacon\n, 4.BigMac\n, Votre choix : ?");

	scanf("%d,%d,%d,%d\n", &choixMenu1,&choixMenu2, &choixMenu3, &choixMenu4);



	int choixMenu = 1;

	switch (choixMenu)
{ 	
	case 1: 
	printf("Tu as choisi le Royal Cheese");
	break;
	case 2:
	printf("Tu as choisi le Mc Deluxe");
	break;
	case 3:
	printf("Tu as choisi le Mc Bacon");
	break;
	case 4:
	printf("Tu as choisi le Big Mac");
	break;
	default:
	printf("No reponses");
	break;
}

	return 0;
}
	




