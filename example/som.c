#include<stdio.h>
 
int main()
{
   int a, b, somme,prod;
   
   printf("Entrez deux nombres à additionner\n");
   scanf("%d%d", &a, &b);
   
   somme = a + b;
   prod = a * b ;
   printf("La somme des deux nombres est = %d\n", somme);
   printf("Le produit des deux nombres est = %d\n", prod);
   
   return 0;
}