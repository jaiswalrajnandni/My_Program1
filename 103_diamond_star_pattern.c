// C program to print the diamond star pattern.
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
        for(int j=1; j<=n; j++){
            if(j>=(num+1)-k && j<=(num-1)+k)
              printf("*");
            else
              printf(" ");
        }
        printf("\n");
    }
    return 0;
}