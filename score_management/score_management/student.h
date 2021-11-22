#pragma once
#include <iostream>
using namespace std;

#define STUDENT_MAX 10       //�л��� �ִ밪
#define NAME_SIZE 32         //�̸� �ִ밪
#define ADDRESS_SIZE 128     //�ּ� �ִ밪
#define PHONE_NUMBER_SIZE 14 //��ȭ��ȣ �ִ밪

struct Student {
    char name[NAME_SIZE];
    char address[ADDRESS_SIZE];
    char phone[PHONE_NUMBER_SIZE];
    int  number;
    int  kor;
    int  eng;
    int  math;
    int  total;
    float  avg;
};

enum MENU {
    MENU_INSERT = 1, //����
    MENU_LIST,       //���
    MENU_SELECT,     //�˻�
    MENU_DELETE,     //����
    MENU_EXIT        //����
};

