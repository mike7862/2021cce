///week14-2 step01-2
#include <stdio.h>
int a[2][3] = {///����i,�k��j
    {10, 20, 30},
    {40, 50, 60}
};
int main()
{
    for(int i=0;i<2;i++){///����i
        for(int j=0;j<3;j++){///�k��j
            printf("a[%d][%d]=%d ",i,j,a[i][j]);
        }            ///����i,�k��j
        printf("\n");
    }
}
