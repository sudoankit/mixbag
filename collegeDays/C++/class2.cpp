#include"classdef.h"

int main(){
    pt2d l(4,7);
    pt2d n(3,3);

    l.draw();
    n.draw();

    n.move(6,6);
    l.move(n);

    l.draw();
    n.draw();
}
