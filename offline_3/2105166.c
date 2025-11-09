#include<stdio.h>
int main()
{
    int r,c;
    printf ("enter your matrix dimensions(row cloumn)=");
    scanf("%d %d", &r, &c);
    int mat[100][100]={0},max=0,min=0,SUM=0,sum=0,count=0,unsafeR[100]={0},unsafeC[100]={0};
    printf("enter your matrix elements\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {

            scanf("%d", &mat[i][j]);
            if(mat[i][j]>max)
            {
                max=mat[i][j];
            }
            if(mat[i][j]<min)
            {
                min=mat[i][j];
            }
            SUM += mat[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (mat[i][j] == max || mat[i][j] == min)
            {
                unsafeR[i] = 1;
                unsafeC[j] = 1;
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (!unsafeR[i] && !unsafeC[j])
            {
                sum += mat[i][j];
            }
        }
    }
    if(2*sum<SUM)
        printf("\nThe matrix is unsafe");
    else
        printf("\nThe matrix is safe");
}
