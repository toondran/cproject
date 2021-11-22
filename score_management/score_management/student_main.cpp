#include "student.h"

extern int stdCount;  //외부변수 호출
void insert();
void listAll();
void select();
void remove();

int main() {
   
    while (true) {
        system("cls");     //화면 지우기

        //메뉴 출력
        cout << "1. 학생 등록" << endl;
        cout << "2. 학생 목록" << endl;
        cout << "3. 학생 검색" << endl;
        cout << "4. 학생 삭제" << endl;
        cout << "5. 종료" << endl;
        cout << "메뉴를 선택하세요 : ";
        int menu;
        cin >> menu;

        //문자를 입력할 경우 에러 발생 -> 에러 버퍼를 비워주고, 
        //입력 버퍼에 있는 '\n' 앞부분의 문자를 지워준다
        if (cin.fail()) {    //에러 발생한 경우
            cin.clear();
            cin.ignore(1024, '\n');  
        }

        if (menu == MENU_EXIT)
            break;

        switch (menu) {
        case MENU_INSERT:
            // 크기가 최대가 되면 등록되지 않도록 막는다
            if (stdCount == STUDENT_MAX)
                break;
            insert();    //삽입
            break;

        case MENU_LIST:
            listAll();   //목록
            break;

        case MENU_SELECT:
            select();  //검색

            break;
        case MENU_DELETE:
            remove();     //삭제
            break;

        default:
            cout << "메뉴를 잘못 입력했습니다." << endl;
            break;
        }

        system("pause");   //화면 멈춤
    }

    return 0;
}