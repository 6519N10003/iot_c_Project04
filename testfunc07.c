#include <stdio.h>

// function 4 ----- have parameter , has return

int sumNumber (int x , int y ){
    int z ;
    z = x + y ;
    return z ;
    
}
double circleArea (int r){
    return 3.1416 * r * r ;
}


void main ()
{
    double radius , area ;
    printf(" 10 + 20 = %d\n",sumNumber(10,20)) ;
    printf("---------------------------\n") ;
    printf("input radius : ") ;
    scanf("%lf", &radius) ;
    printf("Area of Circle is : %lf\n", circleArea(radius) );
   
}