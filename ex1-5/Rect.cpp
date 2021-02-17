//����� ���� - �����

# include "Rect.h" //���� �� ��� ����� �� ������
using namespace std; //�� ��� ������ �cout

void Rect::printArea()
{
	cout << length * width << endl;
}

int Rect::getLength()
{
	return length;
}

void Rect::setLength(int myLength)
{

	if (myLength > 0)
		this->length = myLength;
	else
		this->width = 5;

}

int Rect::getWidth()
{
	return width;
}

void Rect::setWidth(int myWidth)
{
	if (myWidth > 0)
		width = myWidth;
	else
		width = 5;
}

