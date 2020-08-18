#pragma once


#ifndef NEBULA_H
#define NEBULA_H


#include <tuple>
#include <queue>


class Nebula {
  public:
    int size;
    std::tuple<int, int> starting_point;

    int max_count;
    float reproduce_chance;
    bool quadratic;

    int count = 1;
    int current_generation = 1;

    Nebula(int size, int max_count, float reproduce_chance, bool quadratic = false);
    ~Nebula();
};


#endif
