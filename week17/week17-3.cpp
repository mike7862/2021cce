///week17-3 step01-3 ��� �n�t�X while(�j��),�[�`
#include <stdio.h>
int main()
{
    int N=1234567892;

    int sum=0;
    while(N>0){///�٦���? �~���
        ///printf("%d => %d %d\n", N, N/10, N%10);///�ѤU�� �鱼��
        sum+=N%10;
        N=N/10;///�̭��n,��N���p �鱼��

    }
    printf("%d", sum );
}


