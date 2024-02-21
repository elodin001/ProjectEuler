#include <stdio.h>

typedef long long ll;
ll fiboEvenSum(ll);

int main() {
    ll num = 4000000;
    printf("%lld", fiboEvenSum(num));
    return 0;
}

ll fiboEvenSum(ll n){
    ll prevFibo=1, currentFibo=2, evenSum=0;
    
    while (currentFibo <= n){
        if (currentFibo % 2 == 0)
            evenSum += currentFibo;
        ll tempCFibo = currentFibo;
        currentFibo = prevFibo + currentFibo;
        prevFibo = tempCFibo;
    }
    return evenSum;
}
