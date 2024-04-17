#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the height of the pira");
    int n =0;
    scanf("%d",&n);
    int i =0;
    int row=1;
    int h =n-1;
    for(;i<n;i++)
    {
        for(int j=0;j<h;j++){
      //  printf(" ");

        }
        h--;
        for(int k=0;k<row;k++){
        printf("*");

        }
          row+=2;
        printf("\n");

        }
    }
