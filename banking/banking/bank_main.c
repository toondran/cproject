#include <stdio.h>
#include <stdbool.h>

int main() {
    bool sw = true;   //����, �ߴ� 
    //int sw = 1;     //bool ������� ���� ���
    int balance = 0;  //�ܰ�
    while (sw) {
        int selNo;  //����
        int money;  //��.���
        printf("===================================\n");
        printf(" 1.���� | 2.��� | 3.�ܰ� | 4.����\n");
        printf("===================================\n");
        printf("����> ");
        scanf_s("%d", &selNo);

        if (selNo == 1) {
            printf("���ݾ�> ");
            scanf_s("%d", &money);
            balance += money;
        }
        else if (selNo == 2) {
            while (sw) {
                printf("��ݾ�> ");
                scanf_s("%d", &money);
                if (money > balance) {
                    printf("�ܾ��� �ʰ��Ͽ����ϴ�. �ٽ� �Է��� �ּ���\n");
                }
                else {
                    balance -= money; break;
                }
            }
        }
        else if (selNo == 3) {
            printf("�ܰ�> %d\n", balance);
        }
        else if (selNo == 4) {
            sw = false;  //sw = 0
        }
        else {
            printf("�������� �ʴ� ����Դϴ�.\n");
        }
    }
    printf("���α׷� ����");

    return 0;
}
