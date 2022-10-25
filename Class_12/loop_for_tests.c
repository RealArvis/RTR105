// cikla operatori
// while
// for
// do while

// NB! for( : : ) - for cikla iekavas vienmēr satur divus semikolus - ;

// for ( ; izteiksmei ; );
// for ( ; izteiksme ; )
// ; 
// for ( ; izteiksme ; ) {;;;}
// for ( ; izteiksme ; ) 
// {
// ;
// ;
// }
// aiz for (;;)  iekavām esošā darbība vai darbības tiks pildītas lidz rezultāts ir "true"
// "true" - izteiksmes rezultāta bitu secībā ir vismaz viens 1
// "false" vai "absolūtā nulle" - visi biti ar nulles stāvokli

#include <stdio.h>

int main()
{
	int a=10
	for(a=10; a>=0; a--)
	// darbība(s) pirms pirmā semikola tiek izpildītas tikai vienu reizi cikla sākumā
	// tālāk izteiksmes rezultāta aprēķins (jeb nosacījuma pārbaude)
	// cikla ķermeņa (iekš {}) darbību pildīšana
	// cikla mainīgo izmaiņa - aprakstīta aiz otrā ;
	// turpinājumā cikla izteiksmes (nosacījuma) rezultāta aprēķins
	}
		printf("a: %d\n", a);
		a--; //a = a-1, a -= 1
	{
	printf("a (pēc cikla): %d\n", a);

	return 0
}
