#include "Queue.h"
#include <stdexcept>

Queue::Queue()
    : c()
{
    // Empty
}

Queue::Queue(const Queue& right)
    : c(right.c)
{
    // Empty
}

Queue& Queue::operator =(const Queue& right)
{
    c = right.c;

    return *this;

}

bool Queue::empty() const
{
    return c.empty();
}

double Queue::back() const
{
    if(c.empty()) 
    {
        throw std::out_of_range("read empty queue");
    }

    return c.back();
}

double Queue::front() const
{
    if(c.empty()) 
    {
        throw std::out_of_range("read empty queue");
    }

    return c.front();
}

int Queue::size() const
{
    return c.size();
}

void Queue::pop()
{
    // pop_front does not throw any exceptions per STL
    if(c.empty())
    {
        throw std::out_of_range("read empty queue");
    }
    c.pop_front(); // Queue FIFO, pop from front
}

void Queue::push(double value)
{
    c.push_back(value); // Queue FIFO, push to back
}

void Queue::swap(Queue& right)
{
    std::swap(c, right.c);
}
