#include <stdio.h>
int main(){
        int a,n;
        printf("Enter the size of the array: ");
        scanf("%d",&n);
        int arr[n],brr[n];
        for (int i=0;i<n;i++){
                printf("Enter element %d:",i+1);
                scanf("%d",&arr[i]);
        }
        for (int i=n-1;i>=0;i--){
                a=arr[i];
                brr[n-(i+1)]=a;
        }
        for (int i=0;i<n;i++){
                printf("%d\n",brr[i]);
        }
        return 0;
}