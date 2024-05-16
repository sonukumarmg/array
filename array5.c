#include <stdio.h>
int main(){
        int n;
        printf("Enter size of array: ");
        scanf("%d",&n);
        int arr[n];
        for (int i=0;i<n;i++){
                printf("Enter element %d: ",i+1);
                scanf("%d",&arr[i]);
        }
        int a,index,f=0;
        printf("Enter element to check whether it is present in array or not: ");
        scanf("%d",&a);
        for (int i=0;i<n;i++){
                if(arr[i]==a){
                        f=1;
                        index=i;
                }
        }
        if(f==1){
                printf("%d is present with index %d\n",a,index);
        }
        else{
                printf("%d is not present in the array",a);
        }
        return 0;
}