#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int a;
    int b;
}greed;

int compare(const void *A, const void *B){
    greed g1 = *(greed*)A;
    greed g2 = *(greed*)B;
    if(g1.b > g2.b)
        return 1;
    else if(g1.b == g2.b){
        if(g1.a > g2.a)
            return 1;
        else
            return -1;
    }
    else
        return 0;
}

int main()
{
    greed arr[100005];
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d", &arr[i].a, &arr[i].b);
    }
    qsort(arr, n, sizeof(greed), compare);

    int temp=0, cnt=0;
    for(int i=0; i<n; i++){
        if(arr[i].a >= temp){
            temp = arr[i].b;
            cnt++;
        }
    }
    printf("%d\n", cnt);
}
