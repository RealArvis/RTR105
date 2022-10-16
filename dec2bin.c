#include <stdio.h>
#include <stdlib.h>
char *decimal_to_binary(int);
char *decimal_to_binary(int dn)
{
  int i, j, temp;
  char *ptr;
  temp = 0;
  ptr = (char*)malloc(32+1);
  for (i = 31 ; i >= 0 ; i--)
  {
    j = dn >> i;
    if (j & 1)
      *(ptr+temp) = 1 + '0';
    else
      *(ptr+temp) = 0 + '0';
    temp++;
  }
  *(ptr+temp) = '\0';
  return  ptr;
}
int main()
{
  int dn;
  char *ptr;
  printf("Enter a natural number: ");
  scanf("%d", &dn);
  ptr = decimal_to_binary(dn);
  printf("Your entered natural number converted to binary is:\n %s\n", ptr);
  free(ptr);
  return 0;
}
 
