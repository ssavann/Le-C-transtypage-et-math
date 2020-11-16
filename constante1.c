#include <stdio.h>
#include <stdlib.h>


int main()
{
	const float TAUX_CONVERSION = 1.14;
	float montant_euro = 0.0, montant_dollar = 0.0;

	printf("Donner un montant en euro: ");
	scanf("%f", &montant_euro);

	montant_dollar = montant_euro * TAUX_CONVERSION;
	printf("%f euros = %f dollar avec un taux de convertion = %f", montant_euro, montant_dollar, TAUX_CONVERSION);


	return 0;
}
 