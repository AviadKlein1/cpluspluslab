// ����� 1 - ����� 4
// ����� ������ ����
// ����� ������ - ���� ������, ������ ����� �����
#include <iostream>
using namespace std;

class  Rect {
//private:
    int length;
    int width;
public:
    void printArea()
    {
        cout << length * width << endl;
    }
    int getLength()
    {
        return length;
    }
    void setLength(int myLength)
    {
       
        if (myLength > 0)
            this->length = myLength;
        else
            this->width = 5;

    }
    int getWidth()
    {
        return width;
    }
    void setWidth(int myWidth)
    {
        if (myWidth > 0)
            width = myWidth;
        else
            width = 5;
    }
};  // end of Rect

int main() {
    Rect r;
    //r.length = 4;
    r.setLength(4); 
    cout << r.getLength();
    
    return 0;
}

