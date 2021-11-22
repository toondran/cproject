#include "student.h"

extern int stdCount;  //�ܺκ��� ȣ��
void insert();
void listAll();
void select();
void remove();

int main() {
   
    while (true) {
        system("cls");     //ȭ�� �����

        //�޴� ���
        cout << "1. �л� ���" << endl;
        cout << "2. �л� ���" << endl;
        cout << "3. �л� �˻�" << endl;
        cout << "4. �л� ����" << endl;
        cout << "5. ����" << endl;
        cout << "�޴��� �����ϼ��� : ";
        int menu;
        cin >> menu;

        //���ڸ� �Է��� ��� ���� �߻� -> ���� ���۸� ����ְ�, 
        //�Է� ���ۿ� �ִ� '\n' �պκ��� ���ڸ� �����ش�
        if (cin.fail()) {    //���� �߻��� ���
            cin.clear();
            cin.ignore(1024, '\n');  
        }

        if (menu == MENU_EXIT)
            break;

        switch (menu) {
        case MENU_INSERT:
            // ũ�Ⱑ �ִ밡 �Ǹ� ��ϵ��� �ʵ��� ���´�
            if (stdCount == STUDENT_MAX)
                break;
            insert();    //����
            break;

        case MENU_LIST:
            listAll();   //���
            break;

        case MENU_SELECT:
            select();  //�˻�

            break;
        case MENU_DELETE:
            remove();     //����
            break;

        default:
            cout << "�޴��� �߸� �Է��߽��ϴ�." << endl;
            break;
        }

        system("pause");   //ȭ�� ����
    }

    return 0;
}