/************************************
**File:MailCheckSource.c	
**Programozo: Gedeon Andras Adam
**email: gedeon.andras89@gmail.com
**Datum: 19.05.2019
**Neptun kod: EX5OJZ
**
**Ez a program kilistazza az ossze prim szamot adot intervallum kozott.
*************************************/
#include <stdio.h>
void main(int argc, char *argv[]) 
{
	//Deklaralas
	int min, max, a, i, z;
	
	//A beolvasott szamokat integerre kell alakitani
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	//Swap, ha az elsonek megadott ertek nagyob lenne mint a masodi, felcsereljuk
	if (min > max)
	{ 
		a = min;
		min = max;
		max = a;
	}
	//Az egy nem prim, es a negativokkal sem foglalkozunk
	while (min < 2)
	{
		min++;
	}
	
	printf("\n %d es %d kozott a kovetkezo primek vannak: ", min, max);

	while (min < max)
	{
		z = 0;
		/*for cikussal teszteljuk 2-tol, hogy oszthato-e barmivel az adott szamm. Ha igen kilepunk a ciklusbol es folytatjuk
		a kovetkezo szammal, ha nem, kiiratjuk mert pirm.*/
		for (i = 2; i <= min / 2; ++i)
		{
			if (min % i == 0)
			{
				z = 1;
				break;
			}
		}

		if (z == 0)
			printf("%d ", min);

		++min;
	}


}