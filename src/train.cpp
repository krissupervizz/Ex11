//   Copyright 2021 Kris


#include "train.h"

void Train::AddCage(Cage* _cage) {
    if (nullptr == first) {
        _cage->next = _cage;
        _cage->prev = _cage;
        first = _cage;
        last = _cage;
    } else {
        last->prev = _cage;
        _cage->next = last;
        _cage->prev = first;
        first->next = _cage;
        last = _cage;
    }
}

void Train::CreateCages(unsigned int _length) {
    for (unsigned int i = 0; i < _length; i++) {
        AddCage(new Cage(std::rand() % 2));
    }
}

unsigned int Train::CountLength() {
    Cage* a = first;
    first->on();

    for (unsigned int step = 1; ; step++) {
        for (unsigned int i = 0; i < step; i++) {
            a = a->prev;
            a->off();
        }
        for (unsigned int i = 0; i < step; i++) {
            a = a->next;
        }
        if (!a->get())
            return step;
    }
}
