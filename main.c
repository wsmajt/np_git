#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

void pierwsze(){
    int tab[5];
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &tab[i]);
    }

    for (int i = 5-1; i >= 0; --i) {
        printf("[%d] - %d\n", i, tab[i]);
    }
}

void drugie(){
    int tab[3][3];
    int licznik;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%d", &licznik);
            tab[i][j] = licznik;
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
}

void trzecie(){
    int a, b, wynik;

    int *wa=&a;
    int *wb=&b;
    scanf("%d", &a);
    scanf("%d", &b);

    wynik = (*wa) + (*wb);
    printf("%d", wynik);
}

void sortowanie_babelkowe(int tab[], int n)
{
    int pom;
    for(int i=0;i<n;i++)
        for(int j=1;j<n-i;j++) //pętla wewnętrzna
                if(tab[j-1]>tab[j]){
                //zamiana miejscami
                pom = tab[j-1];
                tab[j-1] = tab[j];
                tab[j] = pom;
            }
}

void czwarte(){
    int tab[10]= {10,9,8,7,6,5,4,3,2,1};

    sortowanie_babelkowe(tab, 10);
    int *a;
    a = &tab;
    for (int i = 0; i < 10; ++i) {
        printf("[%d] - %d\n", i, a[i]);
    }
}

void piate(){
    time_t t;

    int tabint[10];
    float tabfloat[10];

    srand((unsigned) time(&t));

    int _intlowest = 100;
    int _inthighest = 0;
    for(int i = 0 ; i < 10 ; i++ ) {
        tabint[i] = rand() % 100 + 1;

        if(tabint[i] > _inthighest)
            _inthighest = tabint[i];
        if(tabint[i] < _intlowest)
            _intlowest = tabint[i];
    }

    float _floatlowest = 1;
    float _floathighest = 0;
    for(int j = 0 ; j < 10 ; j++ ) {
        tabfloat[j] = (float) rand()/(float) (RAND_MAX) * 1.0;

        if(tabfloat[j] > _floathighest)
            _floathighest = tabfloat[j];
        if(tabfloat[j] < _floatlowest)
            _floatlowest = tabfloat[j];
    }

    for(int k = 0 ; k < 10 ; k++ ) {
        printf("[%d] - %d | %f\n", k, tabint[k], tabfloat[k]);
    }
    printf("int 5 = %d\n" "int 10 = %d\n", *(tabint+4), *(tabint+9));
    printf("float 5 = %.4f\n" "float 10 = %.4f\n", *(tabfloat+4), *(tabfloat+9));
    printf("int Najmniejsza = %d | najwieksza %d\n", _intlowest, _inthighest);
    printf("float Najmniejsza = %.4f | najwieksza %.4f", _floatlowest, _floathighest);

}

int main() {
    piate();
    return 0;
}