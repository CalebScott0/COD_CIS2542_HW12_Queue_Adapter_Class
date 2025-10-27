#ifndef QUEUE_H
#define QUEUE_H

#include <deque>
#include <exception>

class Queue
{
public:
    Queue();
    Queue(const Queue& right);

    Queue& operator =(const Queue& right);

    bool empty() const;

    double back() const;
    double front() const;

    int size() const;

    void pop();
    void push(double value);
    void swap(Queue& right);

private:
        std::deque<double> c; // element container
};

#endif
