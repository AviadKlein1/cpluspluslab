//����� ���� - ����

#include <iostream> //������ ������� �� ����� ������ ��
//���� �����: ������ �� ����� ����/��� �� ��� ����� ������ ���. ��� �� ����� ������ ���
//������� ����� ���� ��� ���� �� �� �� ����� (���� ����� ��"� ��� ���� ����)

class  Rect {
	int length;
	int width;
public:
	void printArea();
	
	int getLength();
	void setLength(int myLength);
	
	int getWidth();
	void setWidth(int myWidth);
};  // end of Rect
