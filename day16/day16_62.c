#include <stdio.h>
int main() {
    int a[100], n, i, j, count, maxCount=0, element;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++) {
        count=1;
        for(j=i+1;j<n;j++) {
            if(a[i]==a[j])
                count++;
        }

        if(count>maxCount) {
            maxCount=count;
            element=a[i];
        }
    }

    printf("Element=%d Frequency=%d",element,maxCount);

    return 0;
}