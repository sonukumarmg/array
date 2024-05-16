#include <stdio.h>
int main(){
        int n,a,f=0,b;
        printf("Enter the size of the array: ");
        scanf("%d",&n);
        int arr[n];
        for (int i=0;i<n;i++){
                printf("Enter element %d:",i+1);
                scanf("%d",&arr[i]);
        }
        printf("Enter element to be searched: ");
        scanf("%d",&a);
        for (int i=0;i<n;i++){
                if (arr[i]==a){
                        f=1;
                        b=i;
                }
        }
        if (f==1){
                printf("%d is present in the array with index %d\n",a,b);
        }
        else {
                printf("%d is not present in the array\n",a);
        }
        return 0;
}
