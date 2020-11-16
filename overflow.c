#include <stdio.h>
#include <stdlib.h>




int main()
{
	/*
	unsigned long mon_long = 70000;
	unsigned short mon_short = 70000;	//dépassement de capacité
	*/
	unsigned long mon_long = 65535;
	//unsigned short mon_short = 65535;	
	unsigned short mon_short = 0;	

	//mon_short += 10;	//dépasse de 9
	mon_short -= 10;	//65535, 65534, 65533, 65532, 65531, 65530, 65529, 65528, 65527, 65526

	
	

	printf("mon short = %d\n", mon_short );	
	printf("mon long = %d\n", mon_long );
	

	return 0;
}








 