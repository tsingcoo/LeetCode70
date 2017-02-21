//
// Created by 王青龙 on 21/02/2017.
//

#include "solution.h"

int Solution::climStairs(int n) {
    int n0 = 0;
    int n1 = 1;
    int n2 = 2;
    if (n == 0) {
        return n0;
    } else if (n == 1) {
        return n1;
    } else if (n == 2) {
        return n2;
    }
    for (int i = 3; i <= n; ++i) {
        n0 = n1 + n2;
        n1 = n2;
        n2 = n0;
    }
    return n2;
}
