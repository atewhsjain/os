#include<stdio.h>

#define FP 14
typedef int32_t fp_t;
typedef int64_t dfp_t;

fp_t int2fp(int32_t n);
int32_t fp2int_rnd0(fp_t x);
int32_t fp2int_rnd(fp_t x);
fp_t sum_fp(fp_t x, fp_t y);
fp_t sum_fp(fp_t x, fp_t y);
fp_t diff_fp(fp_t x, fp_t y);
fp_t sum_fpint(fp_t x, int32_t n);
fp_t diff_fpint(fp_t x, int32_t n);
dfp_t mult_fp(fp_t x, fp_t y);
fp_t mult_fpint(fp_t x, int32_t n);
dfp_t dvide_fp(fp_t x, fp_t y);
dfp_t dvide_fpint(fp_t x, int32_t n);


fp_t int2fp(int32_t n){
    return n << FP;
}

int32_t fp2int_rnd0(fp_t x){
    return x >> FP;
}

int32_t fp2int_rnd(fp_t x){
    if ( x >= 0 ){
        return ((x + (1 << (FP - 1))) >> FP);
    }else{
        return ((x - (1 << (FP - 1))) >> FP);
    }
}

fp_t sum_fp(fp_t x, fp_t y){
    return (x + y);
}

fp_t diff_fp(fp_t x, fp_t y){
    return (x - y);
}

fp_t sum_fpint(fp_t x, int32_t n){
    return x + (n << FP);
}

fp_t diff_fpint(fp_t x, int32_t n){
    return x - (n << FP);
}

dfp_t mult_fp(fp_t x, fp_t y){
    return (((int64_t) x) * y) >> FP;
}

fp_t mult_fpint(fp_t x, int32_t n){
    return x * n;
}

dfp_t dvide_fp(fp_t x, fp_t y){
    return ((int64_t)x) * ( 1 << FP) / y;
}

dfp_t dvide_fpint(fp_t x, int32_t n){
    return x / n;
}
