#include <stdio.h>
#define M 4
#define N 4
main() {
    int a[N][M];
    int i, j, s, min, stroka;
 
    for (i = 0; i < M; i++) {
        for (j = 0; j < M; j++) {
            printf("arr[%d][%d]=", i, j);
            scanf_s("%d", &a[i][j]);                               //����� �������
        }
    }

    for (i = 0; i < M; i++) {
        for (j = 0; j < M; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");                                               //������ ��� �������������

    min = 0;                                                    //����������� ������� 
   stroka = 0;                                                  //������
    for (i = 0; i < N; i++) { 
        s = 0;
        for (j = 0; j < M; j++) {

            s += a[i][j];                                     //����� ��������� � �������
        }
            printf("%d\t", s);
            if (s < min) {
               min = s;                          
                stroka = i;
            }
        
    }
    printf("\n %d \n", stroka + 1);
   
}


