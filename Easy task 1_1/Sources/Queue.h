//
// Created by Мария on 09.03.2020.
//

#include <string>

#ifndef EASY_TASK_1_1_QUEUE_H
#define EASY_TASK_1_1_QUEUE_H


class Queue {
public:
    Queue();
    Queue(int a);
    void Push(std::string b);
    int Size();
    int ContainedNumber();
    void Pop();
    std::string* Back();

private:
    int MaxSize = 30;
    int counter;
    std::string* queue;
};


#endif //EASY_TASK_1_1_QUEUE_H
