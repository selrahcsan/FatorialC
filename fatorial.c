#include <stdio.h>
#include <gmp.h>

int main(void){
  mpz_t fatorial;
  int numero = 40, i;

  mpz_init(fatorial);

  for(i=0; i <= numero; i++){
    i == 0 ? mpz_set_ui(fatorial, 1) : mpz_mul_ui(fatorial, fatorial, i);
    gmp_printf("%d! = %Zd\n", i, fatorial);
  }
  mpz_clear(fatorial);
  return 0;
}


