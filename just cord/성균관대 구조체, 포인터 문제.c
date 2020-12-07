#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct vector {
    int dim;
    double* data;
};

struct vector* __new__(const int dim, const double* data) {
    struct vector* temp = (struct vector*)calloc(1, sizeof(struct vector)); // calloc은 메모리 할당과 동시에 초기화 [malloc + memset]

    temp->dim = dim;
    temp->data = calloc(dim, sizeof(double));   // 포인터는 NULL로 초기화되므로 calloc으로 data에 대해 할당

    for (int i = 0; i < dim; i++)
        temp->data[i] = data[i];
    return temp;
};

void __del__(struct vector* v) {
    v = NULL;
}

struct vector* add(struct vector* x, struct vector* y) {
    struct vector* temp = (struct vector*)calloc(1, sizeof(struct vector));

    temp->dim = x->dim; // 같은 차원의 벡터를 더하므로 아무거나 상관 없음
    temp->data = calloc(temp->dim, sizeof(double));

    for (int i = 0; i < temp->dim; i++)
        temp->data[i] = x->data[i] + y->data[i];
    return temp;
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