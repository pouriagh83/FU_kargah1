#include <stdio.h>

int main()
{
    int xa, ya, xb, yb, xc, yc, xd, yd;
    scanf("%d %d %d %d %d %d %d %d", &xa, &ya, &xb, &yb, &xc, &yc, &xd, &yd);
    if ((ya - yb)/(xa - xb) == -(xb - xc)/(yb - yc) && (yc - yd)/(xc - xd) == (ya - yb)/(xa - xb) && (yb - yc)/(xb - xc) == (ya - yd)/(xa - xd))
    {
        if((xa-xb)*(xa-xb) + (ya-yb)*(ya-yb) == (xb-xc)*(xb-xc) + (yb-yc)*(yb-yc))
            printf("Square");
        else
        printf("Rectangle");
    }
    else if((ya - yc)/(xa - xc) == -(xb - xd)/(yb - yd) && (ya - yb)/(xa - xb) != -(xb - xc)/(yb - yc) && (yb - yc)/(xb - xc) != -(xc - xd)/(yc - yd))
    {
        if((xa-xb)*(xa-xb) + (ya-yb)*(ya-yb) == (xc-xd)*(xc-xd) + (yc-yd)*(yc-yd))
        printf("Diamond");
        else
        printf("Kite");
    }
    else if((xa-xb)*(xa-xb) + (ya-yb)*(ya-yb) != (xb-xc)*(xb-xc) + (yb-yc)*(yb-yc) && (xa-xb)*(xa-xb) + (ya-yb)*(ya-yb) == (xc-xd)*(xc-xd) + (yc-yd)*(yc-yd) && (ya - yb)/(xa - xb) != -(xb - xc)/(yb - yc))
    printf("Parallelogram");
    else
    printf("None");
    
}
