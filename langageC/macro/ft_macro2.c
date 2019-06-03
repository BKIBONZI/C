#include <stdio.h>

#define MAJEUR(age) if (age >=18) \
						printf("vous etes majeur\n");
						
int main(int argc, char **argv)
{
	MAJEUR(22);
	return(0); 
}
