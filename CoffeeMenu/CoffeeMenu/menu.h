//menu.h
#include <iostream>
#include <string>
using namespace std;

class Menu {
	string menuName;   //coffee
	string items[10];  //coffee ����
	int lastIndex;     //items[10] ������ ���� �ε��� ��ȣ
	string thanks;     //������ �λ縻

public:
	Menu(string menuName);  //������

	void createMenu(string menuName = "unnamed"); //�޴� ���
	void addItem(string item);  //���� �׸� ���
	int selectItem();           //���� �׸� ��ȣ

};