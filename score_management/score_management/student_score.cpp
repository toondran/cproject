#include "student.h"

Student studentArr[STUDENT_MAX] = {};  //�迭 ��ü ����
int stdCount = 0;      //�ε��� ��ȣ
int stdNumber = 1;     //�й�
char searchName[NAME_SIZE] = {};

void insert() {
    cout << "========= �л� ���� �߰� =========" << endl;
    //�̸�, �ּ�, ��ȭ��ȣ, ����, ����, ������ �Է¹ް�
    //�й�, ����, ����� ������ ���� �����

    cout << "�̸� : ";
    cin >> studentArr[stdCount].name;
    
    cin.ignore(1024, '\n');  //�ּҸ� �� �ٷ� �Է� ����

    cout << "�ּ� : ";
    cin.getline(studentArr[stdCount].address, ADDRESS_SIZE);

    cout << "��ȭ��ȣ : ";
    cin.getline(studentArr[stdCount].phone, PHONE_NUMBER_SIZE);

    cout << "���� : ";
    cin >> studentArr[stdCount].kor;

    cout << "���� : ";
    cin >> studentArr[stdCount].eng;

    cout << "���� : ";
    cin >> studentArr[stdCount].math;

    //���� ���
    studentArr[stdCount].total =
        studentArr[stdCount].kor +
        studentArr[stdCount].eng +
        studentArr[stdCount].math;

    //��� ���
    studentArr[stdCount].avg =
        (float)studentArr[stdCount].total / 3;

    //�й�
    studentArr[stdCount].number = stdNumber;
    stdNumber++;   //�й� 1����
    stdCount++;    //�ε��� 1����

    cout << "*** �л� �߰� �Ϸ� ***" << endl;
}

void listAll() {
    cout << "========= �л� ��� =========" << endl;
    //��ϵ� �л� ����ŭ �ݺ��ϸ� �л� ���� ���
    for (int i = 0; i < stdCount; i++) {
        cout << "�й� : " << studentArr[i].number << endl;
        cout << "�̸� : " << studentArr[i].name << endl;
        cout << "��ȭ��ȣ : " << studentArr[i].phone << endl;
        cout << "�ּ� : " << studentArr[i].address << endl;
        cout << "���� : " << studentArr[i].kor << endl;
        cout << "���� : " << studentArr[i].eng << endl;
        cout << "���� : " << studentArr[i].math << endl;
        cout << "���� : " << studentArr[i].total << endl;
        cout << "��� : " << studentArr[i].avg << endl << endl;
    }
}

void select() {
    cout << "========= �л� ���� �˻� =========" << endl;
    cin.ignore(1024, '\n');
    cout << "�˻��� �̸��� �Է��ϼ��� : ";
    cin.getline(searchName, NAME_SIZE);

    //��ϵǾ� �ִ� �л� ����ŭ �ݺ��ϸ� �л��� ã��
    for (int i = 0; i < stdCount; i++) {
        if (strcmp(studentArr[i].name, searchName) == 0) { 
            //����� �̸��� �˻� �̸��� ��ġ�ϸ� ���
            cout << "�й� : " << studentArr[i].number << endl;
            cout << "�̸� : " << studentArr[i].name << endl;
            cout << "��ȭ��ȣ : " << studentArr[i].phone << endl;
            cout << "�ּ� : " << studentArr[i].address << endl;
            cout << "���� : " << studentArr[i].kor << endl;
            cout << "���� : " << studentArr[i].eng << endl;
            cout << "���� : " << studentArr[i].math << endl;
            cout << "���� : " << studentArr[i].total << endl;
            cout << "��� : " << studentArr[i].avg << endl << endl;
            break;
        }
    }
}

void remove() {
    cout << "========= �л� ���� ���� =========" << endl;
    cin.ignore(1024, '\n');
    cout << "������ �̸��� �Է��ϼ��� : ";
    cin.getline(searchName, NAME_SIZE);

    for (int i = 0; i < stdCount; i++) {
        if (strcmp(studentArr[i].name, searchName) == 0) {
            for (int j = i; j < stdCount - 1; j++) {
                studentArr[i] = studentArr[i + 1];
            }
            stdCount--;   //�л� �� ����
            cout << "�л��� �����Ͽ����ϴ�." << endl;
            break;
        }
    }
}