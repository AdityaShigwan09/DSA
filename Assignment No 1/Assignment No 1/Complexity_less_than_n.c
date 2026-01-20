#include <stdio.h>

int main() {
    long long x, n;
    long long result = 1;
    

    printf("Enter base (x) and exponent (n): ");
    scanf("%lld %lld", &x, &n);
	
	

    while (n > 0) {
        if (n % 2 == 1) {  
        }
            result *= x;   

        x *= x; 
        n /= 2; 
    }


    printf("%lld ^ %lld = %lld", x, n, result);

    return 0;
}

