#include <stdio.h>
int main() {
    int array[100][100],i,j,rows,columns;
    printf("ENTER THE NUMBER OF ROWS OF THE MATRIX\n");
    scanf("%d",&rows);
    printf("ENTER THE NUMBER OF COLUMNS OF THE MATRIX\n");
    scanf("%d",&columns);
    printf("\t ORDER OF THE MATRIX IS %d*%d \n\n",rows,columns);
    
    printf("Enter the elements\n");
   
    //Matrix of rows*columns;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
           scanf("%d",&array[i][j]); 
        }
    }
    printf("MATRIX FORMED\n");
    for(i=0;i<rows;i++)
    {
        printf("\n");
        for(j=0;j<columns;j++)
        {
           printf("%d\t",array[i][j]); 
        }
    }
    printf("\n");
    return 0;
}
