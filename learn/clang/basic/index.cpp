/**
 * Created by alic(AlicFeng) on 17-7-23 from CLion.
 * Email is alic@samego.com
 */
//
#include <iostream>

using namespace std;

class Coordinate {
public:
    Coordinate(int x, int y) {
        // 设置X,Y的坐标
        m_iX = x;
        m_iY = y;
    }

public:
    int m_iX;
    int m_iY;
};

int main(void) {
    // 在堆上创建对象指针
    Coordinate *c = new Coordinate(3,5);
    // 打印坐标
    cout <<c->m_iX<<","<<c->m_iY << endl;
    // 销毁对象指针
    delete c;
    c = NULL;
    return 0;
}

