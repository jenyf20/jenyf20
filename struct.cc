#include <iostream>

using namespace std;

typedef struct {

    double x;
    double y;
} Point;

int main {

    Point p;

    p.x = 10.0;
    p.y = 5.0;

    Point* pp 0 &p;
    Point q;
    q.x = 2.8;
    q.y = 12.89;

    print(p);


    return 0;
}