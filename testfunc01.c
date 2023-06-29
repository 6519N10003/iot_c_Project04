//git config --global user.name "S6519N10003"
//git config --global user.email "s6519n10003@sau.ac.th"

//git init
//git add .
//git commit -m "Version......"
//git remote ...........
//git push -u origin master

//-------------------------------------------

//git add .
//git commit -m "Version......"
//git push -u origin master

#include <stdio.h>
#define line printf("---------------------------------\n") ;

void main ()
{
    double widhts, longs , bases ,highs ;
    double areaSquare , areaTriangle ;

line
printf("    shape area\n") ;
line
printf("Pic Square.1\n") ;
printf("input widhts : ") ; scanf ("%lf",&widhts) ;
printf("input longs : ") ; scanf ("%lf",&longs) ;
areaSquare = widhts * longs ;
printf("Area Square is : %2lf ", areaSquare );
line
printf("Pic Square.2\n") ;
printf("input widhts : ") ; scanf ("%lf",&widhts) ;
printf("input longs : ") ; scanf ("%lf",&longs) ;
areaSquare = widhts * longs ;
printf("Area Square is : %2lf ", areaSquare );
line
printf("Pic Square.3\n") ;
printf("input widhts : ") ; scanf ("%lf",&widhts) ;
printf("input longs : ") ; scanf ("%lf",&longs) ;
areaSquare = widhts * longs ;
printf("Area Square is : %2lf ", areaSquare ) ;
line

}
