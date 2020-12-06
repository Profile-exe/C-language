#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct vector {
    int dim;
    double* data;
};

struct vector* __new__(const int dim, const double* data) {
    static struct vector r_vector[100] = { 0, };
    static double temp[100][100] = { 0, };
    static int i = 0;
    for (int j = 0; j < dim; j++)
        temp[i][j] = data[j];
    r_vector[i].dim = dim;
    r_vector[i].data = temp[i];
    return &r_vector[i++];
}

void __del__(struct vector* v) {
    v = NULL;
}

struct vector* add(struct vector* x, struct vector* y) {
    static int i = 0;
    static struct vector s_vector[100] = { 0, };
    static double temp[100][100] = { 0, };
    for (int j = 0; j < x->dim; j++)    // 차원이 같은 벡터끼리 더하므로 x, y 어느것의 dim이든 상관 X
        temp[i][j] = x->data[j] + y->data[j];
    s_vector[i].dim = x->dim;           // 위와 마찬가지
    s_vector[i].data = temp[i];
    return &s_vector[i++];
}

struct vector* s_mult(double s, struct vector* v) {
    for (int i = 0; i < v->dim; i++)
        v->data[i] *= s;
    return v;
}

void print(struct vector* v) {
    const int dim = v->dim;
    printf("<");
    for (int i = 0; i < dim; ++i)
        printf("%.4lf,", v->data[i]);
    printf(">\n");
}

int main() {
    double data[3] = { 2, 3, 4 };
    struct vector* v_1 = __new__(3, data);  // 3차원, 요소는 data 안의 값
    print(v_1);     // <2.0000, 3.0000, 4.0000,>
    data[0] = 1;
    print(v_1);     // <2.0000, 3.0000, 4.0000,> v_1.data[0]이 1.0000이면 안됨 => data를 가리키고있으면 안됨
    struct vector* v_2 = __new__(3, data);   // v_2 = <1.0000, 3.0000, 4.0000>
    struct vector* added;
    if (s_mult(-1, v_2) == v_2) {   // 같은 v_2를 가리키고 있는지 확인
        print(v_2);
        struct vector* added = add(v_1, v_2);
        print(added);
        __del__(added);

    }
    __del__(v_1);
    __del__(v_2);
}