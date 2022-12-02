#include <stdio.h>
#include <math.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int inputs[n], outputs[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &inputs[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(k + i >= n)
        {
            int temp = k;
           while(temp + i >= n)
           {
            temp -= n;
           }
           outputs[i + temp] = inputs[i];
        } 
          else 
              outputs[i + k] = inputs[i];
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ", outputs[i]);
    }
    
}
//5 3
// 2 >> 0
// 3 >> 1