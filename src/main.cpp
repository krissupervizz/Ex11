//   Copyright 2021 Kris

#include "train.h"

int main() {
    Train tr;
    tr.CreateCages(10);
    unsigned int L = tr.CountLength();
    tr.printall(L);
    return 0;
}
