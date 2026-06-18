#include <stdio.h>
int main() {
    int a[100], n, key;
    int low=0, high, mid;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    scanf("%d",&key);

    high=n-1;

    while(low<=high) {
        mid=(low+high)/2;

        if(a[mid]==key) {
            printf("Found");
            return 0;
        }
        else if(a[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }

    printf("Not Found");
    return 0;
}