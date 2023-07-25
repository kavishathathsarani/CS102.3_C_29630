#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1
    int i,j;
    int ary1[4][4]={8,17,9,6,5,2,11,18,7,27,28,0,4,1,3,10};
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(ary1[i][j]==5){
                    printf("The Element is at Array [%d][%d] array address \n",i,j);
            }
        }
    }
    //2
    int i,j;
    int array1[3][3] = {3,2,4,1,4,6,4,3,2};
    int array2[3][3] = {2,6,3,4,3,2,5,1,7};
    int sum[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",array1[i][j]);
        }
        printf("\t ");
        for(j=0;j<3;j++)
            {
                printf("%d ",array2[i][j]);
            }
        printf("\t ");
        for(j=0;j<3;j++)
            {
                printf("%d ",array1[i][j] + array2[i][j]);
            }
        printf("\n");
     }
    return 0;
}
