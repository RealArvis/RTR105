#include<stdio.h>
int main()
{
	if(1); //iekš () var būt "apaļā" nulle (kad visos bitos ir 0) vai nē vai bitu secība, kas satur vismaz vienu 1
	int a = 10;
	if (a > 7) // a>7 -> 0000 0000 0000 0000 0000 0000 0000 0001
		{
		  printf("Viena darbība, kas tiks izpildīta, ja \"nosacījums ir spēkā\".\n");
		  printf("Pirmā darbība\n");
		  printf("Otrā darbība\n");
		}
	if (a < 7)
		{
		  printf("Viena darbība, kas tiks izpildīta, ja \"nosacījums ir spēkā\".\n");
		  printf("Pirmā darbība\n");
		  printf("Otrā darbība\n");
		}
	else //else nesatur nosacījumu
		// else vienmēr pieder kādam if
		// - atrodas vienas darbības ; vai darbību bloka {;;;} attālumā no tā
		{
		  printf("Viena darbība, kas tiks izpildīta, ja \"nosacījums nav spēkā\".\n");
		  printf("Pirmā darbība\n");
		  printf("Otrā darbība\n");
		}
	return 0;
}
