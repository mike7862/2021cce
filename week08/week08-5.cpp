///week08-5.cpp step03-2
#include <stdio.h>
int main()
{   ///�T����
    printf("1: *\n");///1��,1���P
    printf("1: **\n");///2��,2���P
    printf("1: ***\n");///3��,3���P
    printf("1: ****\n");///4��,4���P
    printf("1: *****\n");///5��,5���P
    printf("1: ******\n");///6��,6���P
    ///���׶V��,�{���V�h... ex. 40�h
    int n=6;
    for(int i=1; i<=n; i++){///���إX�Ӽh
        printf("%d: ", i);///��i��
        for(int k=1; k<=i; k++) printf("*");///��i��,i���P
        printf("\n");
    }
}

