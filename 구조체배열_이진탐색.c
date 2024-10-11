#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char site[23];
    char pw[23];
}sitepw;

int compare(const void *x, const void *y){
    sitepw *a = (sitepw*)x;
    sitepw *b = (sitepw*)y;

    if(strcmp(a->site,b->site) > 0){
        return 1;
    }
    else{
        return -1;
    }
}

int main(){
    int n, m, start, end, mid;
    scanf("%d %d", &n, &m);
    char str[23];
    sitepw* mSite;
    mSite = (sitepw*)malloc(n*sizeof(sitepw));

    for(int i=0; i<n; i++){
        scanf("%s%s", mSite[i].site, mSite[i].pw);
    }
    qsort(mSite, n, sizeof(mSite[0]), compare);
    
    for(int i=0; i<m; i++){
        scanf("%s", str);
        start=0;
        end=n-1;
        mid=(start+end+1)/2;
        while(start <= end){
            if(strcmp(str, mSite[mid].site) == 0){
                printf("%s\n", mSite[mid].pw);
                break;
            }
            else if(strcmp(str, mSite[mid].site) < 0){
                end=mid-1;
                mid=(start+end)/2;
            }
            else{
                start=mid+1;
                mid=(start+end)/2;
            }
        }
    }
}
