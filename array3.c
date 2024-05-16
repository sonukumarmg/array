#include <stdio.h>
int main(){
        int n,f;
        printf("Enter the size of the array: ");
        scanf("%d",&n);
        int arr[n];
        for (int i=0;i<n;i++){
                printf("Enter element %d:",i+1);
                scanf("%d",&arr[i]);
        }
        for(int i=0,j=n-1;i<j;i++,j--){
                if(arr[i]==arr[j]){
                        f=1;
                }
                else
                        f=0;
        }
        if(f==1)
        {
                printf("Elements in the given array is palindrome\n");
        }
        else
        {
                printf("Elements in the array is not palindrome\n");

        }
        return 0;
}