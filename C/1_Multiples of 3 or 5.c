#include <stdio.h>

int main() {
    int num = 1000, sum = 0;
    
    for (int i=1; i < num; i++){
        if (i % 3 == 0 || i % 5 ==0)
            sum += i;
    }
    printf("%d", sum);
    
    return 0;
}
