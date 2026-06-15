#include <stdio.h>
int main() {
    int a[100], n, i, j=0, temp[100];

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
        if(a[i]!=0)
            temp[j++]=a[i];

    while(j<n)
        temp[j++]=0;

    for(i=0;i<n;i++)
        printf("%d ",temp[i]);

    return 0;
}