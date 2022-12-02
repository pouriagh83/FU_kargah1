#include <stdio.h>

int main(){
 int sum, xor, a = -1, b = -1, max = -1;
 scanf("%d %d", &sum, &xor);
 for(int i = 0; i <= sum; i++)
 {
    if(((sum - i) ^ (i)) == xor)
    {
            int multiply = (sum - i) * i;
     if(multiply > max)
     {
        max = multiply;
        int maxmin_check = (sum - i) > i;
        a = (1-maxmin_check)*i + maxmin_check*(sum - i);
        b = maxmin_check*i + (1-maxmin_check)*(sum - i);
     }
     
    }
 }
 if(a == -1)
 printf("None");
 else
 printf("%d %d", b, a);
 
}