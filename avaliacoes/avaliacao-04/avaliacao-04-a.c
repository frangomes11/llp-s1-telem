#include <stdio.h>
#include <math.h>
int squareFunction (int a,int b, int c){
 int z;
 float delta, x1,x2;
 printf ("-----------\n");
 printf ("%d\n%d\n%d\n",a,b,c);
 delta = pow(b,2)- ( 4 *a*c);

 printf("%.2f",delta);
 if (delta < 0){
 printf("\n Não ha raizes reais");
 }
 else if (delta== 0){
 x1 = (-b+sqrt(delta))/(2*a);
 printf("\n a raiz");
 printf("\n%.2f",x1);
 }
 else if (delta > 0) {
 x1 = ( -b+sqrt(delta))/(2*a);
 x2 = (-b -sqrt(delta))/(2*a);
 printf("\n as raizes sao:");
 printf("\n x1= %.2f", x1);
 printf("\n x2= %.2f", x2);
 }
 return delta;
}

 int main ()
 {
 int x, y, z;
 float raizes;
 printf (" digite 3 numeros inteiros:");
 scanf("%d%d%d", &x,&y,&z);
 raizes = squareFunction (x, y, z);
 return 0;
 }
