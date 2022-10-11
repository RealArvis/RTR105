#include <stdio.h>
int main()
	{
	char a = 10;    //divas darbības - mainīgā deklarēšana (vietas piešķiršana atmiņā) un vērtības piešķiršanai
			//kur (vietas adrese) un cik daudz (atbilstoši datu tipam)?
			//1 byte: šī byte saturs nav zināms (0001 1110 vai 1100 1111 u.t.t.)
			//vērtības piešķiršana - a = 10
			//                           10 - vesela tipa konstante
			//                           int - vesela tipa konstantēm
			//                           double - reāla tipa konstantēm
			//1 byte: 0000 1010, kas atbilst dec. 10
			//char = 10; - mainīgā definēšana
			//mainīgā nosaukums (vārds) nevar saturēt atstarpes, nevar sākties ar skaitli
			//var būt ar mnemonisko nosaukumu, piem., cilindra_tilpums
	printf("a=%c\n",a);  //simbols
	printf("a=%d\n",a);  //decimālais skaitlis
	printf("a=%x\n",a);  //heksidecimālais skaitlis
	printf("a=%#o\n",a); //oktāls skaitlis
			//nedrīkst pārdeklarēt mainīgo - char a
	char b=250;
	//250 vietā redzam -6 - tell me why?
	//250 ()dec = 128(2^7) + 64(2^6) + 32(2^5) + 16(2^4) + 8(2^3) + 2(2^1) --> (bin) 1111 1010
	//char - signed char -> vecākais bits ir zīme				       (1)111 1010
	//                                                                           ^ -> 000 0101
	//                                                                          +1 -> 000 0001
	//                                                                                --------
	//                                                                                000 0110
	//                                                              0000 0110 (bin) -> 6 (dec)
	//                                                                    rezultāts = -6
	printf("\nb=%c\n",b);
	printf("b=%d\n",b);
	printf("b=%x\n",b);
	printf("b=%#o\n",b); //Ja gribi pēdiņas pēdiņās, tad " /" "
	return 0;
	}
