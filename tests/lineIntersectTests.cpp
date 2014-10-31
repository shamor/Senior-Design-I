//lineIntersectTests.cpp

#include <iostream>
#include <stddef.h>
#include <stdio.h>
#include "../src/lineIntersect.cpp"
#include "opencv2/core/core.hpp"

using namespace cv;

int main()
{
	printf("Line Intersection Test.\nResults should be No, Yes, No.");
	
	vector<Vec2f> p1, p2;
	vector<Vec2f> q1, q2;
	
    p1 = [1][1], q1 = [10][1];
    p2 = [1][2], q2 = [10][2];
 
    doIntersect(p1, q1, p2, q2)? cout << "Yes\n": cout << "No\n";
 
    p1 = [10][0], q1 = [0][10];
    p2 = [0][0], q2 = [10][10];
    doIntersect(p1, q1, p2, q2)? cout << "Yes\n": cout << "No\n";
 
    p1 = [-5][-5], q1 = [0][0];
    p2 = [1][1], q2 = [10][10];
    doIntersect(p1, q1, p2, q2)? cout << "Yes\n": cout << "No\n";
 
    return 0;
}
