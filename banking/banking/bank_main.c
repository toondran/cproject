#include <stdio.h>
#include <stdbool.h>

int main() {
    bool sw = true;   //실행, 중단 
    //int sw = 1;     //bool 사용하지 않을 경우
    int balance = 0;  //잔고
    while (sw) {
        int selNo;  //선택
        int money;  //입.출금
        printf("===================================\n");
        printf(" 1.예금 | 2.출금 | 3.잔고 | 4.종료\n");
        printf("===================================\n");
        printf("선택> ");
        scanf_s("%d", &selNo);

        if (selNo == 1) {
            printf("예금액> ");
            scanf_s("%d", &money);
            balance += money;
        }
        else if (selNo == 2) {
            while (sw) {
                printf("출금액> ");
                scanf_s("%d", &money);
                if (money > balance) {
                    printf("잔액을 초과하였습니다. 다시 입력해 주세요\n");
                }
                else {
                    balance -= money; break;
                }
            }
        }
        else if (selNo == 3) {
            printf("잔고> %d\n", balance);
        }
        else if (selNo == 4) {
            sw = false;  //sw = 0
        }
        else {
            printf("지원되지 않는 기능입니다.\n");
        }
    }
    printf("프로그램 종료");

    return 0;
}
