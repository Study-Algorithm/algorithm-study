#include <stdio.h>
int cnt[10005];
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d",&k);
        cnt[k]++;
    }
    for(i=1;i<=10000;i++) {
        for(j=0;j<cnt[i];j++) {
            printf("%d\n",i);
        }
    }
    return 0;
}