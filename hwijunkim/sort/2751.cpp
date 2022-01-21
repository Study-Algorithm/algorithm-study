#include <stdio.h>

void merge(int a[], int b[], int low, int mid, int high) {
    int i=low, j=mid+1, k;
    for(k=low;k<=high;k++) {
        if(i>mid) {
            b[k]=a[j++];
        }else if(j>high) {
            b[k]=a[i++];
        }else if(a[i]>a[j]) {
            b[k]=a[j++];
        }else {
            b[k]=a[i++];
        }
    }
    for(k=low;k<=high;k++) {
        a[k]=b[k];
    }
}

void sort2(int a[], int b[], int low, int high) {
    if(high <= low) {
        return;
    }
    int mid;
    mid=low+(high-low)/2;
    sort2(a, b, low, mid);
    sort2(a,b,mid+1,high);
    merge(a,b,low,mid,high);
}


void sort(int a[], int n)
{
    int b[1000005];
    sort2(a,b,0,n-1);
}

int main()
{
    int a[1000005], n, i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    for(i=0;i<n;i++) {
        printf("%d\n",a[i]);
    }
    return 0;
}
