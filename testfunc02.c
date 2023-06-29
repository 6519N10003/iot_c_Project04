#include <stdio.h>
#define line printf("---------------------------------\n") ;


void calsquareArea ( )
{
    double widhts, longs ;
    double areaSquare  ;
    line
        printf("Pic Square.1\n") ;
        printf("input widhts : ") ; scanf ("%lf",&widhts) ;
        printf("input longs : ") ; scanf ("%lf",&longs) ;
        areaSquare = widhts * longs ;
        printf("Area Square is : %.2lf \n ", areaSquare );
    line
}
void calTriangleArea ( )
{
    double bases ,highs ;
    double areaTriangle ;
    line
        printf("Pic Triangle.1\n") ;
        printf("input bases : ") ; scanf ("%lf",&bases) ;
        printf("input highs : ") ; scanf ("%lf",&highs) ;
        areaTriangle = bases * highs / 2 ;
        printf("Area Triangle is : %.2lf \n ", calTriangleArea );
    line
}

void main ()
{
    int i;
    line
    printf("    shape area\n") ;
    line

    for (i=1 ; i<=3 ; i++){
    calsquareArea () ;
    }

    for (i=1 ; i<=1 ; i++){
    calTriangleArea () ;
    }
}