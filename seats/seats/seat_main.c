#include <stdio.h>

int main() {
    int customerNum;
    int columnNum;
    int rowNum;
  
    printf("���尴 �� �Է� : ");
    scanf_s("%d", &customerNum);

    printf("�¼� ���� �� �Է� : ");
    scanf_s("%d", &columnNum);

    if (customerNum % columnNum == 0) {
        rowNum = customerNum / columnNum;
    }
    else {
        rowNum = customerNum / columnNum + 1;
    }

    int i, j, seat;
    for (i = 0; i < rowNum; i++) {
        for (j = 1; j <= columnNum; j++) {
            seat = i * columnNum + j;
            printf("�¼�%d ", seat);
            if (seat == customerNum)
                break;
        }
        printf("\n");
    }

    system("pause");
    
    return 0;
}