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

   if( ft_isalpha(var1) )
      printf("var1 = |%c| is an alphabet\n", var1 );
   else
      printf("var1 = |%c| is not an alphabet\n", var1 );
   if( ft_isalpha(var2) )
      printf("var2 = |%c| is an alphabet\n", var2 );
   else
      printf("var2 = |%c| is not an alphabet\n", var2 );
   if( ft_isalpha(var3) )
      printf("var3 = |%c| is an alphabet\n", var3 );
   else
      printf("var3 = |%c| is not an alphabet\n", var3 );
   if( ft_isalpha(var4) )
      printf("var4 = |%c| is an alphabet\n", var4 );
   else
      printf("var4 = |%c| is not an alphabet\n", var4 );
}

void check_isdigit()
{
  function("ft_isdigit");

  int var1 = 'd';
   int var2 = '2';
   int var3 = '9';
   int var4 = '+';

   if( ft_isdigit(var1) )
      printf("var1 = |%c| is a digit\n", var1 );
   else
      printf("var1 = |%c| is not a digit\n", var1 );
   if( ft_isdigit(var2) )
      printf("var2 = |%c| is a digit\n", var2 );
   else
      printf("var2 = |%c| is not a digit\n", var2 );
   if( ft_isdigit(var3) )
      printf("var3 = |%c| is a digit\n", var3 );
   else
      printf("var3 = |%c| is not a digit\n", var3 );
   if( ft_isdigit(var4) )
      printf("var4 = |%c| is a digit\n", var4 );
   else
      printf("var4 = |%c| is not a digit\n", var4 );
}

void check_ft_isascii()
{
  function("ft_isascii");
  char ch = '1';
  while(ft_isascii(ch))
  {
      printf(" Ascii value -------> [%d]\n",ch);
    ch++;
  }
}

void check_ft_isprint()
{
  function("ft_isprint");

  int var1 = 'd';
   int var2 = '\t';
   int var3 = '9';
   int var4 = ' ';

   if( ft_isprint(var1) )
      printf("var1 = |%c| is printable\n", var1 );
   else
      printf("var1 = |%c| is not printable\n", var1 );
   if( ft_isprint(var2) )
      printf("var2 = |%c| is printable\n", var2 );
   else
      printf("var2 = |%c| is not printable\n", var2 );
   if( ft_isprint(var3) )
      printf("var3 = |%c| is printable\n", var3 );
   else
      printf("var3 = |%c| is not printable\n", var3 );
   if( ft_isprint(var4) )
      printf("var4 = |%c| is printable\n", var4 );
   else
      printf("var4 = |%c| is not printable\n", var4 );
}

void check_ft_isalnum()
{
  function("ft_isalnum");

  int var1 = 'd';
   int var2 = '2';
   int var3 = '\t';
   int var4 = ' ';

   if( ft_isalnum(var1) ) {
      printf("var1 = |%c| is alphanumeric\n", var1 );
   } else {
      printf("var1 = |%c| is not alphanumeric\n", var1 );
   }

   if( ft_isalnum(var2) ) {
      printf("var2 = |%c| is alphanumeric\n", var2 );
   } else {
      printf("var2 = |%c| is not alphanumeric\n", var2 );
   }

   if( ft_isalnum(var3) ) {
      printf("var3 = |%c| is alphanumeric\n", var3 );
   } else {
      printf("var3 = |%c| is not alphanumeric\n", var3 );
   }

   if( ft_isalnum(var4) ) {
      printf("var4 = |%c| is alphanumeric\n", var4 );
   } else {
      printf("var4 = |%c| is not alphanumeric\n", var4 );
   }
}

void check_ft_toupper()
{
  function("ft_toupper");

  int i = -1;
  char str[] = "We Think Code Is AwesomeNess 123\n";
  printf("Input String-------->[%s]\n", str );

  while(str[++i])
    putchar (ft_toupper(str[i]));
}

void check_ft_tolower()
{
  function("ft_tolower");

  int i = -1;
  char str[] = "WE THINK CODE IS AWASOMENESS\n";
  printf("Input String-------->[%s]\n", str );

  while(str[++i])
    putchar (ft_tolower(str[i]));
}

void check_ft_puts()
{
  function("ft_puts");

  char str1[]= "weThinkcode";
  char str2[]= "Libftsam example";

  ft_puts(str1);
  ft_puts(str2);
}

void check_ft_strcat()
{
   function("ft_strcat");

   char src[] = "This is source";
   char dest[] = "This is destination";

   printf("src------->[%s]\n",src );
   printf("dest------->[%s]\n",dest );
   ft_strcat(dest, src);

   printf("Final destination string : |%s|\n", dest);

}

int main()
{
  check_ft_bzero();
  check_ft_isalpha();
  check_isdigit();
  check_ft_isascii();
  check_ft_isprint();
  check_ft_isalnum();
  check_ft_toupper();
  check_ft_tolower();
  check_ft_puts();
  check_ft_strcat();
  return 0;
}
