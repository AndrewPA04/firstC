#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calcHyp(int a,int b){
    int c = sqrt(pow(a,2)+pow(b,2));
    return c;
}

int calcAngle(int a,int b){
    return 180-(a+b);
}

struct tr{
    int btr;
    int btl;
};

struct sides{
    int bls;
    int brs;
};

int main(){
    struct sides sides1;
    sides1.bls = 3;
    sides1.brs = 4;
    prinft("%d",calcHyp(sides1.bls,sides1.brs));

    struct tr tr1;
    tr1.btr = 45;
    tr1.btl=90;
    printf("%d",calcAngle(tr1.btr,tr1.btl));
}
