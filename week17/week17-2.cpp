///week17-2 step01-2 ��� while(�j��)
#include <stdio.h>
int main()
{
    int N=20030101;///���ӼƦr,�C�@�ӳ���X��
    ///�l�� % �o��Ӧ��
    ///���k / �o��2003010

    while(N>0){///�٦���? �~���
        printf("%d => %d %d\n", N, N/10, N%10);///�ѤU�� �鱼��
        N=N/10;///�̭��n,��N���p �鱼��

    }

}

