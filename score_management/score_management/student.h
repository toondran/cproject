#pragma once
#include <iostream>
using namespace std;

#define STUDENT_MAX 10       //학생수 최대값
#define NAME_SIZE 32         //이름 최대값
#define ADDRESS_SIZE 128     //주소 최대값
#define PHONE_NUMBER_SIZE 14 //전화번호 최대값

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
    MENU_INSERT = 1, //삽입
    MENU_LIST,       //목록
    MENU_SELECT,     //검색
    MENU_DELETE,     //삭제
    MENU_EXIT        //종료
};

