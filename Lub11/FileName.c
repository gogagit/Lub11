#include <stdio.h>
#include <locale.h>
#define N 10
main() {
	task1();
}
task1() {
    setlocale(LC_ALL, "RUS");
	float A[N];
    float temp,srArf;
    float sum = 0;
    for (int i = 0; i < N; i++){
        printf("a[%d] = ", i + 1);
        scanf("%f", &temp);
        A[i] = temp;
    }
    for (int i = 0; i < N; i++) {
        printf("|%5.2d|%5.2f|%5.2f  \n", i + 1, A[i], A[i]*2);
        sum = sum + A[i];
    }
    srArf = sum/N;
    printf("Среднее арифметическое элементов массива = %f", srArf);
}