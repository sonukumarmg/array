#include <stdio.h>
int main(){
        int n,a;
        printf("Enter the size of the array: ");
        scanf("%d",&n);
        int arr[n],f=0;
        for (int i=0;i<n;i++){
                printf("Enter element %d:",i+1);
                scanf("%d",&arr[i]);
        }
        for (int i=0;i<n;i++){
                for (int j=i+1;j<n;j++){
                        if (arr[i]==arr[j]){
                                printf("%d is repeating\n",arr[i]);
                                i=i+1;
                                j=i+1;
                                f=1;
                        }
                }
        }
        if (f==0){
                printf("None of the elements are repeating\n");
        }
        return 0;
}