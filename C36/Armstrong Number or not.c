#include <stdio.h>

int main() {
   int n, temp, sum = 0, r;
   printf("Enter the number: ");
   scanf("%d", &n);

   temp = n;

   while(n > 0) {
    r = n % 10;
    sum = sum + (r * r * r);
    n = n / 10;
   }
   if(temp == sum) {
        printf("%d is an Armstrong Number", temp);
   }
   else {
    printf("%d is not an Armstrong Number", temp);
   }
   return 0;
}
