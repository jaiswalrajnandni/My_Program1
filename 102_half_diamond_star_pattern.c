// C program to print the half diamond star pattern.
#include<stdio.h>
int main(){
    int n,k=0;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if(n%2==0){
          if(i<=n/2)
            k++;
          if(i>(n/2)+1) 
          k--; 
        }
        else
          i<=(n+1)/2?k++:k--;
        for(int j=1; j<=(n+1)/2; j++){
            if(j<=k)
              printf("*");
            else
              printf(" ");  
        }
        printf("\n");
    }
}

