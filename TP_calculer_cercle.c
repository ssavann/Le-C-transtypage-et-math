#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{

	//declaration des variables
	int rayon = 0;
	int diametre_cercle = 0;
	float circonference_cercle = 0.0, aire_cercle = 0.0;


	printf("Calcul de la circonference et l'aire d'un cercle");

	printf("Donnez le rayon d'un cercle: ");
	scanf("%d", &rayon);

	//calcul mathematique
	diametre_cercle = 2 * rayon;
	circonference_cercle = M_PI * (float)diametre_cercle;
	aire_cercle = M_PI * pow(rayon, 2); //rayon au carree

	//affichage des resultats
	printf("Cercle de rayon %d\n", rayon);
	printf("Diametre du cercle %d\n", diametre_cercle);
	printf("Circonference %f\n", circonference_cercle);
	printf("Aire du Cercle %f\n", aire_cercle);
	
	return 0;
}








 