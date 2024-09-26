#include <stdlib.h>
#include <stdio.h>

int main ()
{


	int number;

	printf("choisissez un nombre entier : \n");
	scanf("%d",&number);

	if(number==42)
	{
		printf("votre nombre est egal à 42\n");
    }
    else if(number < 42)

    {
    
    	printf("votre nombre est inferieur à 42\n");
    }
    else
    {
        printf("votre nombre est superieur à 42\n");
    }


     return 0;
 } 	