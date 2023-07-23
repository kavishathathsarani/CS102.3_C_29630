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
    return 0;
}
