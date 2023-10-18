// C program to print the plus star pattern.
#include<stdio.h>
int main(){
    int n,k=0;
    printf("Enter the odd number only: ");
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
            if((j==num)||(i==num))
              printf("*");
            else
              printf(" ");
        }
        printf("\n");
    }
    return 0;
}