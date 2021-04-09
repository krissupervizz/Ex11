//   Copyright 2021 Kris


#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_
#include <random>
#include <iostream>

class Cage{
    bool light;
 public:
    Cage* next;
    Cage* prev;
    Cage() : light(false), next(nullptr), prev(nullptr) {}
    explicit Cage(bool l) : light(l), next(nullptr), prev(nullptr) {}
    void setp(Cage* pr) {
        prev = pr;
    }
    void on() { light = true; }
    void off() { light = false; }
    bool get() const { return light; }
};

class Train{
    Cage* first;
    Cage* last;
 public:
    Train() : first(nullptr), last(nullptr) {}
    void AddCage(Cage* _cage);
    void CreateCages(unsigned int i);
    Cage* getlast() {
        return last;
    }
    void printall(int quantity) {
        Cage* a = first;
        for (int i = 0; i < quantity; i++) {
            std::cout<< i << "   " << ((*a).get() ? "on\n" : "off\n");
            a = a - 1;
        }
    }
    unsigned int CountLength();
};

#endif   //  INCLUDE_TRAIN_H_
