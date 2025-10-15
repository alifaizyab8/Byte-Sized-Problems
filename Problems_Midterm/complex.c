#include<stdio.h>
void complex_sum(int real_a, int imag_a, int real_b, int iamg_b){
    int real_sum = real_a + real_b;
    int imag_sum = imag_a + iamg_b;
    if (imag_sum < 0)
        printf("%d - %di\n", real_sum, -imag_sum);
    else
        printf("%d + %di\n", real_sum, imag_sum);
    return 0;
}