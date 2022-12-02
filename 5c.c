#include <stdio.h>

int main()
{
    int sum, xor, a = -1, b = -1;
    scanf("%d %d", &sum, &xor);
    if(sum % 2 == 0)
    {
        for(int i = 0; i <= sum/2 + 1; i++){
        if ((((sum / 2) - i) ^ ((sum / 2) + i)) == xor)
        {
            a = (sum / 2) - i;
            b = (sum / 2) + i;
            break;
        }
        }
    }
    else
    {
        //17   8 9    8
        for(int i = 0; i < (sum / 2) + 1; i++)
        {
            if((((sum / 2) - i) ^ ((sum / 2) + 1 + i)) == xor){
                a = (sum / 2) - i;
                b = (sum / 2) + 1 + i;
                break;
            }
        }
    }
    if(a != -1)
       printf("%d %d", a, b);
    else
       printf("None");
}