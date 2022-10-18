#include <stdio.h>
int main()        //operācijas:   operands_1 operācijas operans_2
		//              (datu tips)          (datu tips)
		//			||
		//			\/
		//		operācijas_rezultāts
		//                 (datu tips)
		// parasti operācijas rezultāta datu tips ir "lielākais"
		//matemātiskās: +,-,*,/,% ++, --
		//		int i1 = 5  i2 = 6, ir;
		//		ir = i1 + i2;
		//		ir = ir + 10;
		//		ir += 10; // tas ir tas pats ir = ir + 10, tikai kompakti pierakstot
		//		ir++; ir = ir + 1; vai ir += 1;
		//attiecību: <, <=, >=, >, ==, !=
		//loģiskas: &&(un), ||(vai)
		//loģiskās pa bitiem: &, |, ^(xor), ~(noliegums)
		//bitu: >>, <<
	//Ko šodien pētīt: Kā strādā operācija?
	//                 Vai operācijā drīksy izmantot jebkuru datu tipu
	//                 Operāciju izpildīšanas secība? (to nosaka prioritāte; secības kontrolei var izmantot () )
	// / (int/int vai char/char), %, &, |, ^, !, &&, ||, <<, >>
{
	char c = 'A';
	int i1 = 2000, i2 = 1000;
	float f = 2.3;
	double d = -5.6e4;

	printf("%d (%ld bytes)*%d (%ld bytes) = %d (%ld bytes)\n", c,sizeof(c), i1,sizeof(i1), c*i1,sizeof(c*i1));
// >> pa labi << pa kreisi

	unsigned char ucl = 1; // 0000 0001
	c = 0;
	printf("\n%d (%ld bytes) << %d (%ld bytes)", ucl,sizeof(ucl), c,sizeof(c));
	printf(" = %d (%ld bytes)\n\n", ucl<<c,sizeof(ucl<<c)); //0000 0001
	c = 7;
	printf("\n%d (%ld bytes) << %d (%ld bytes)", ucl,sizeof(ucl), c,sizeof(c));
	printf(" = %d (%ld bytes)\n\n",(char)(ucl<<c),sizeof((char)(ucl<<c))); //0000 0001



	//0 no 7. pozīcijas ārā
								//0 0. iekšā

	return 0;
}
