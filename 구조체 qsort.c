#include <stdio.h>
#include <stdlib.h>

typedef struct{
    long long int num;
    int index;
    int com;
}number;

int ncompare(const void* a, const void* b){
    number A = *(number*)a;
    number B = *(number*)b;

    if(A.num > B.num)
        return 1;
    else
        return -1;
}

int icompare(const void* a, const void* b){
    number A = *(number*)a;
    number B = *(number*)b;

    if(A.index > B.index)
        return 1;
    else
        return -1;
}

int main()
{
    int n;
    scanf("%d", &n);
    number *num;
    num = (number*)malloc(n*sizeof(number));

    for(int i=0; i<n; i++){
        scanf("%lld", &num[i].num);
        num[i].index = i;
    }
    qsort(num, n, sizeof(num[0]), ncompare);
    num[0].com=0;
    for(int i=1; i<n; i++){
        if(num[i-1].num == num[i].num)
            num[i].com=num[i-1].com;
        else
            num[i].com=num[i-1].com+1;
    }
    qsort(num, n, sizeof(num[0]), icompare);
    for(int i=0; i<n; i++){
        printf("%d ", num[i].com);
    }
}
