#include "libfts.h"
void function(char *s)
{
  printf("---------------------------------------------------------\n");
  printf("%s\n", s );
  printf("---------------------------------------------------------\n");
}

void check_ft_bzero()
{
  function("ft_bzero");

  char str[4] = "jui";

	printf("str[0] = %d\n", str[0]);
	printf("str[1] = %d\n", str[1]);
	printf("str[2] = %d\n", str[2]);

	ft_bzero(str, 3);
	printf("After running ft_bzero\n");

	printf("str[0] = %d\n", str[0]);
	printf("str[1] = %d\n", str[1]);
	printf("str[2] = %d\n", str[2]);
}

void check_ft_isalpha()
{
  function("ft_isalpha");

  int var1 = 'd';
   int var2 = '2';
   int var3 = '\t';
   int var4 = ' ';

   if( ft_isalpha(var1) ) {
      printf("var1 = |%c| is an alphabet\n", var1 );
   } else {
      printf("var1 = |%c| is not an alphabet\n", var1 );
   }

   if( ft_isalpha(var2) ) {
      printf("var2 = |%c| is an alphabet\n", var2 );
   } else {
      printf("var2 = |%c| is not an alphabet\n", var2 );
   }

   if( ft_isalpha(var3) ) {
      printf("var3 = |%c| is an alphabet\n", var3 );
   } else {
      printf("var3 = |%c| is not an alphabet\n", var3 );
   }

   if( ft_isalpha(var4) ) {
      printf("var4 = |%c| is an alphabet\n", var4 );
   } else {
      printf("var4 = |%c| is not an alphabet\n", var4 );
   }
}

int main()
{
  check_ft_bzero();
  check_ft_isalpha();
  return 0;
}
