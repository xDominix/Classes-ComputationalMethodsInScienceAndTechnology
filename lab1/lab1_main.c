#include <stdio.h>
#include <gsl/gsl_ieee_utils.h>

int main ()
{
printf("---mantysa ---- cecha----\n");
  float f = 1e-32;
  while(f>0.0)
  {
	gsl_ieee_printf_float(&f);printf("\n");
  	f /= 2.0;
  }
  return 0;
}
