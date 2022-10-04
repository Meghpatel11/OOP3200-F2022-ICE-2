#include <iostream>

#include "Vector2.h"
#include "LineSegment.h"
#include <vector>

int main()
{
    // replace the following code (which is a sample) with 3 LineSegment objects instead

    std::vector<Vector2*> vector2s;

    for (int i = 0; i < 5; ++i)
    {
        vector2s.push_back(new Vector2(static_cast<float>(i), static_cast<float>(i)));

    }

    // ranged for loop
    for (const auto& vector2 : vector2s)
    {
        std::cout << vector2->to_string() << std::endl;
    }

    // created a four vector to make line segments
    Vector2 A = Vector2(2, 2);
    Vector2 B = Vector2(6, 6);
    Vector2 C = Vector2(10, 10);
    Vector2 D = Vector2(4, 4);

    // three line segments
    LineSegment line1 = LineSegment("line1",A,B);
    LineSegment line2 = LineSegment("line2",D,C);
    LineSegment line3 = LineSegment("line3",A,C);

    // Displays results
    std::cout << line1.to_string() << std::endl;
    std::cout << line2.to_string() << std::endl;
    std::cout << line3.to_string() << std::endl;

    

}

    
