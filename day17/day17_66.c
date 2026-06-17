#include <stdio.h>
int main() {
    int a[100], b[100];
    int n1,n2,i,j,flag;

    scanf("%d",&n1);
    for(i=0;i<n1;i++) scanf("%d",&a[i]);

    scanf("%d",&n2);
    for(i=0;i<n2;i++) scanf("%d",&b[i]);

    for(i=0;i<n1;i++)
        printf("%d ",a[i]);

    for(i=0;i<n2;i++) {
        flag=0;
        for(j=0;j<n1;j++) {
            if(b[i]==a[j]) {
                flag=1;
                break;
            }
        }
        if(!flag) printf("%d ",b[i]);
    }
    return 0;
}