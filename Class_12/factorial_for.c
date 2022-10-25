// 5! = 1*2*3*4*5 = 4! * 5
// 5! / 5 = 4!

// 0! = 1 (faktoriālu darbība ir saistīta ar skaitļu kopām
//         jautājums 0! - cik skaitļu kopas var uztaisīt no tukša kopas - 0 - kopas - [] - viena)

#include <stdio.h>
int main()
	{
	int i,n,fact;
	printf("Cienījamais lietotāj, lūdzu, ievadi vienu veselu skaitli:\n");
	scanf("%d", &n);

	i = 0;
	fact = 1;
	//for(i=0,fact=1;;)
	for(i=1 ; i<=n ; i++ )
		{
		fact = fact * i;
		printf("%3d! = %15d\n", i, fact);
		}
	return 0;
	}
