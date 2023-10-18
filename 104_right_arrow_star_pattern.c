// C program to print the right arrow star pattern.
#include<stdio.h>
int main(){
    int n,k=0;
    printf("Enter the number of row: ");
    scanf("%d",&n);
    int num=(n+1)/2;
    for(int i=1; i<=n; i++){
        if(n%2==0){
            if(i<=num)
              k++;
            if(i>num+1)
              k--;  
        }
        else
           i<=num?k++:k--;
        for(int j=1; j<=num; j++){
            if(j>=k)
              printf("*");
            else
              printf(" ");
        }
        printf("\n");
    }
    return 0;
}