#include <stdio.h>
#include<string.h>
void reverseString (char *str1)
{
 int i, len, temp;
 len = strlen(str1);

 for(i=0; i< len/2; i++)
 {

 temp = str1[i];
 str1[i] = str1[len - i - 1];
 str1[len - i -1] = temp;
 }
 }
int main()
{
 char str[100];
 printf("------------------------------------------\n");
 printf("Mostrar uma String ao contrario em C: \n");
 printf("------------------------------------------\n");
 printf("entre com uma string:");
 gets(str);
 printf(" \n antes da reversão: %s \n", str);
 reverseString(str);
 printf ( "depois de reverter: %s",str);
}
