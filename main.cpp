#include <iostream>
#include <vector> //for structure testing approach
#include<bits/stdc++.h> //for INT_MAX
#include <ctime>
#include <cstdlib>

enum isTriangle{Equilateral, Right, Isosceles,Scalene, NotATriangle};


isTriangle whatType(int s1, int s2, int s3) {
 

    if (s1 == s2 && s2 == s3) {
        
    if (s1 <= 0 and s2 <= 0 and s3 <= 0) 
    
        return NotATriangle; // Triangles cannot be 0 sides
        
        else return Equilateral; // all sides equal
        
  } else if (s1 == s2 || s1 == s3 || s2 == s3) 
        return Isosceles;
        
    else if (s1 * s1 + s2 * s2 == s3 * s3 || s2 * s2 + s3 * s3 == s1 * s1 || s3 * s3 + s1 * s1 == s2 * s2) 
        return Right; // formula for right triangle

    else if (s1 + s2 == s3 or s2 + s3 == s1 or s3 + s1 == s2) 
    return NotATriangle;
    
    
    else if (s2 + s3 < s1) 
    return NotATriangle;
    
}









//For structure testing approach
class triangleSides {
public:
    int a,b,c;

    triangleSides(int _a, int _b, int _c) : a(_a), b(_b), c(_c) {}
};







//For structure testing approach
class triangleSideTest {
public:
    triangleSides sides;
    bool expectedResult;

    triangleSideTest(triangleSides _sides, bool _exp) : sides(_sides), expectedResult(_exp){}
};



int main() {
    
    using namespace std;


    //Random Implementation
    // EX03
    srand (time(NULL));
    int x,y,z = rand() % 200+1;

   
    isTriangle t = whatType(3,3,3);
    
    switch (t)
    {
    case Scalene: cout << " Your Triangle Is Scalene! " << endl;
        break;
    case Isosceles: cout << " Your Triangle Is An Isosceles! " << endl;
        break;
    case Equilateral: cout << " Your Triangle Is An Equilateral! " << endl;
        break;
    case NotATriangle: cout << " Your Triangle Is not A Triangle! " << endl;
    
    }

}



