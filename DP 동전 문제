#include <stdio.h>
int min(int a, int b){
    if(a<b)
        return a;
    else
        return b;
}
int main()
{
    int n,k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int dp[k+1];
    dp[0]=0;
    for(int i=1; i<=k; i++)
        dp[i]=99999999;
    for(int i=0; i<n; i++){
        for(int j=arr[i]; j<=k; j++){
            dp[j]=min(dp[j], dp[j-arr[i]]+1);
        }
    }
    for(int i=1; i<=k; i++){
        if(dp[i]==99999999)
            dp[i]=-1;
    }
    printf("%d\n", dp[k]);
}
