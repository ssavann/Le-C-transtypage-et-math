#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
	
	printf("PI = %f\n", M_PI);	//résultat: 3.14159 
	printf("cos(PI) = %f\n", cos(M_PI));	//résultat -1

	printf("valeur absolue de %f = %f\n", -42.1, fabs(-42.1));
	printf("valeur arrondi de %f = %f\n", -42.1, round(-42.1)); 	//valeur arrondie
	printf("valeur arrondi de %f = %d\n", -42.1, (int)round(-42.1)); 	//en nombre entier
	printf("entier inferieur de %f = %d\n", 42.1, (int)floor(42.1)); 	//en nombre entier
	printf("entier superieur de %f = %d\n", 42.1, (int)ceil(42.1)); 	//en nombre entier
	
	printf("4 ^ 2 = %d\n", (int)pow(4,2)); 	//4 puissance 2
	printf("racine carre de 4 = %d\n", (int)sqrt(4)); 	//racine carrée de
	
	return 0;
}








 