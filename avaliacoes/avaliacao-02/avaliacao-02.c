#include <stdio.h>
int main() {
 
int i;
for(int i=5; i<100 ; i+= 5 ) {
  if(i%2 == 0)
    printf("%d\n", i);
}
return 0;
}
