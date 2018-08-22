#include "libfts.h"

checkBzero()
{
  char str[] = "lehlohonolo";
  bzero(str, 4);
  ft_bzero(str, 4);
}

int main()
{

  return 0;
}
