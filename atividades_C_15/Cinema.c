/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
 int assentos [3][4] = {
    {0, 1, 0, 0},  // Fileira 0
    {1, 1, 0, 1},  // Fileira 1
    {0, 0, 1, 0}   // Fileira 2
 };
 
 int disponivel = 0;
 int ocupado =0;
 
 for(int i = 0; i < 3; i++) {
     for(int j = 0; j < 4; j++) {
         if(assentos [i][j] == 1) {
             disponivel++;
         } else {
             ocupado++;
         }
         
     }
 }
    printf(" Assentos disponiveis: %d", ocupado);
    printf("\n Assentos ocupados: %d", disponivel);
    return 0;
}