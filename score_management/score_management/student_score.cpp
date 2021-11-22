#include "student.h"

Student studentArr[STUDENT_MAX] = {};  //배열 객체 생성
int stdCount = 0;      //인덱스 번호
int stdNumber = 1;     //학번
char searchName[NAME_SIZE] = {};

void insert() {
    cout << "========= 학생 정보 추가 =========" << endl;
    //이름, 주소, 전화번호, 국어, 영어, 수학은 입력받고
    //학번, 총점, 평균은 연산을 통해 계산함

    cout << "이름 : ";
    cin >> studentArr[stdCount].name;
    
    cin.ignore(1024, '\n');  //주소를 한 줄로 입력 받음

    cout << "주소 : ";
    cin.getline(studentArr[stdCount].address, ADDRESS_SIZE);

    cout << "전화번호 : ";
    cin.getline(studentArr[stdCount].phone, PHONE_NUMBER_SIZE);

    cout << "국어 : ";
    cin >> studentArr[stdCount].kor;

    cout << "영어 : ";
    cin >> studentArr[stdCount].eng;

    cout << "수학 : ";
    cin >> studentArr[stdCount].math;

    //총점 계산
    studentArr[stdCount].total =
        studentArr[stdCount].kor +
        studentArr[stdCount].eng +
        studentArr[stdCount].math;

    //평균 계산
    studentArr[stdCount].avg =
        (float)studentArr[stdCount].total / 3;

    //학번
    studentArr[stdCount].number = stdNumber;
    stdNumber++;   //학번 1증가
    stdCount++;    //인덱스 1증가

    cout << "*** 학생 추가 완료 ***" << endl;
}

void listAll() {
    cout << "========= 학생 목록 =========" << endl;
    //등록된 학생 수만큼 반복하며 학생 정보 출력
    for (int i = 0; i < stdCount; i++) {
        cout << "학번 : " << studentArr[i].number << endl;
        cout << "이름 : " << studentArr[i].name << endl;
        cout << "전화번호 : " << studentArr[i].phone << endl;
        cout << "주소 : " << studentArr[i].address << endl;
        cout << "국어 : " << studentArr[i].kor << endl;
        cout << "영어 : " << studentArr[i].eng << endl;
        cout << "수학 : " << studentArr[i].math << endl;
        cout << "총점 : " << studentArr[i].total << endl;
        cout << "평균 : " << studentArr[i].avg << endl << endl;
    }
}

void select() {
    cout << "========= 학생 정보 검색 =========" << endl;
    cin.ignore(1024, '\n');
    cout << "검색할 이름을 입력하세요 : ";
    cin.getline(searchName, NAME_SIZE);

    //등록되어 있는 학생 수만큼 반복하며 학생을 찾음
    for (int i = 0; i < stdCount; i++) {
        if (strcmp(studentArr[i].name, searchName) == 0) { 
            //저장된 이름과 검색 이름이 일치하면 출력
            cout << "학번 : " << studentArr[i].number << endl;
            cout << "이름 : " << studentArr[i].name << endl;
            cout << "전화번호 : " << studentArr[i].phone << endl;
            cout << "주소 : " << studentArr[i].address << endl;
            cout << "국어 : " << studentArr[i].kor << endl;
            cout << "영어 : " << studentArr[i].eng << endl;
            cout << "수학 : " << studentArr[i].math << endl;
            cout << "총점 : " << studentArr[i].total << endl;
            cout << "평균 : " << studentArr[i].avg << endl << endl;
            break;
        }
    }
}

void remove() {
    cout << "========= 학생 정보 삭제 =========" << endl;
    cin.ignore(1024, '\n');
    cout << "삭제할 이름을 입력하세요 : ";
    cin.getline(searchName, NAME_SIZE);

    for (int i = 0; i < stdCount; i++) {
        if (strcmp(studentArr[i].name, searchName) == 0) {
            for (int j = i; j < stdCount - 1; j++) {
                studentArr[i] = studentArr[i + 1];
            }
            stdCount--;   //학생 수 감소
            cout << "학생을 삭제하였습니다." << endl;
            break;
        }
    }
}