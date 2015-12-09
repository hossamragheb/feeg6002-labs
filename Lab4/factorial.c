#include <stdio.h>
#include <limits.h>  /* limits for integers */
#include <math.h>



long maxlong(void){
       
    return LONG_MAX;
}


double upper_bound(long n){
    double fact;
    if (n>5){
        fact = pow(n/2,n);
    }
    else{/* this part needs enhancement*/
        fact = 260;
    }
    
 
    return fact;
}

long factorial(long N){
    long factorial = 1;
    int i;

    if (N >= 1){
        if (upper_bound(N) > maxlong()){
        return -1;
        }
        for (i=1; i<=N; i++){
            factorial *= i;
        }

        return factorial;
    }

    if (N < 0){
        return -2;
    }


    
}

int main(void) {
    long i;

    /* The next line should compile once "maxlong" is defined. */
    printf("maxlong()=%ld\n", maxlong());

    /* The next code block should compile once "upper_bound" is defined. */

    
    for (i=-5; i<100; i++) {
        printf("upper_bound(%ld)=%g , Factorial=%ld \n", i, upper_bound(i),factorial(i));

    }
    
    return 0;
}