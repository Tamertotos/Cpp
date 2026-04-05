#include <iostream>
#include <utility>


auto ord3 (double& a, double& b, double& c) -> void;
auto ord3 (double* a, double* b, double* c) -> void;
auto getMinMax (const double& a, const double& b , const double& c, const double*& pMin, const double*& pMax) -> void;
auto getMinMax (const double* a, const double* b , const double* c, const double** pMin, const double** pMax) -> void;
auto printOrd(const double* a, const double* b, const double* c) -> void;
auto printMinMax(const double* pmn, const double* pmx) -> void;

auto main() -> int {
    double a, b, c;
    const double *pMin, *pMax;

    a = 2; b=1; c=3;
    ord3(a,b,c);
    printOrd(&a,&b,&c);

    a = 3; b = 2; c = 1;
    ord3(&a,&b,&c);
    printOrd(&a,&b,&c);

    a = -1; b = -1; c = 1;
    ord3(&a,&b,&c);
    printOrd(&a,&b,&c);

    a= 2; b = 3; c =1;
    getMinMax(a,b,c,pMin,pMax);
    printMinMax(pMin,pMax);

    a =3; b =1; c =2;
    getMinMax(&a,&b,&c,&pMin,&pMax);
    printMinMax(pMin,pMax);

    a =3; b =3; c =-1;
    getMinMax(&a,&b,&c,&pMin,&pMax);
    printMinMax(pMin,pMax);

}

auto getMinMax (const double& a, const double& b , const double& c, const double*& pMin, const double*& pMax) -> void {
    pMin = &a;
    pMax = &a;
    if (b < *pMin) pMin = &b;
    if (b > *pMax) pMax = &b;
    if (c < *pMin) pMin = &c;
    if (c > *pMax) pMax = &c;
}

auto getMinMax (const double* a, const double* b , const double* c, const double** pMin, const double** pMax) -> void {
    *pMin = a;
    *pMax = a;
    if (*b < **pMin) *pMin = b;
    if (*b > **pMax) *pMax = b;
    if (*c < **pMin) *pMin = c;
    if (*c > **pMax) *pMax = c;
}

auto printMinMax(const double* pmn, const double* pmx) -> void {
    using std::cout; using std::endl;
    cout << "Min = " << *pmn << "; " << "Max = " << *pmx << endl;
}

auto ord3 (double& a, double& b, double& c) -> void {
    if (a > b ) std::swap(a,b);
    if (b > c) std::swap (b,c);
    if (a > b) std::swap (a,b);
}

auto ord3 (double* a, double* b, double* c) -> void {
    if (*a > *b ) std::swap(*a,*b);
    if (*b > *c) std::swap (*b,*c);
    if (*a > *b) std::swap (*a,*b);
}

auto printOrd(const double* a, const double* b, const double* c) -> void {
    using std::cout; using std::endl;
    cout << *a << " " << *b << " " << *c << endl;
}

