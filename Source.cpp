#include "Queue.h"
#include <exception>
#include <iostream>

void print(const Queue&);

int main()
{

    // Default constructor
    Queue A;

    // Testing one of the exceptions, as it is not explicitly part of assignment
    try
    {
        A.pop();
    }
    catch(const std::exception& e)
    {
        std::cout << std::endl;
        std::cout << "EXCEPTION: " << e.what() << std::endl;
    } 


    A.push(2.5);
    A.push(4.75);
    A.push(-1.25);

    std::cout << "Back of queue A: " << A.back() << std::endl;

    // Copy constructor
    Queue B(A);

    std::cout << "Queue B elements as they are popped: " << std::endl;
    while(!B.empty())
    {
        std::cout << B.front() << std::endl;
        B.pop();
    }


    for(int i = 0; i < 10; ++i)
    {
        B.push(i + 0.5);
    }

    std::cout << "Swapping B and A" << std::endl;
    B.swap(A);
    std::cout << "Front of B: " << B.front() << std::endl;
    std::cout << "Front of A: " << A.front() << std::endl;


    std::cout << "Size of A: " << A.size() << std::endl;
    std::cout << "Assigning A = B" << std::endl;

    // Copy assignment operator
    A = B;

    std::cout << "Front of B: " << B.front() << std::endl;
    std::cout << "Front of A: " << A.front() << std::endl;

    std::cout << "Size of B: " << B.size() << std::endl;
    std::cout << "Size of A: " << A.size() << std::endl;


    return 0;
}


