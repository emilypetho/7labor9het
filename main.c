#include <stdio.h>

#include <stdlib.h>

#include <time.h>

int nov_cmp(const void *p1, const void *p2);

int csok_cmp(const void *p1, const void *p2);

void generalas(int);

int main() {
    float a, b, *pa, *pb, *pc, *tomb, osszeg=0;
    int n,c,db=0,d;
    srand(time(NULL));
    while  (1) {
        printf("valassz feladatot:\n");
        scanf("%i",& n);
        pa = &a;
        pb = &b;
        switch (n) {
            case 0:{
                return 0;
            }
            case 1:{
                printf("irj be ket valos szamot\n");
                scanf("%f", &a);
                scanf("%f", &b);
            printf("1:  %f + %f = %f\n", *pa, *pb, *pa + *pb);
            pc = &a;

                break;}
            case 2:{
                printf("irj be ket valos szamot\n");
                scanf("%f", &a);
                scanf("%f", &b);
                pa = pb;
                pb = pc;
            printf("2:  a=%f; b=%f\n", *pa, *pb);
                break;}
            case 3:{
            printf("hany szamot szeretnel?\n");
                scanf("%i",& c);
                tomb=(int*)malloc(c*sizeof(int));
                if (tomb==NULL){
                    printf("sikertelen malloc");
                    break;
                }
                for (int i = 0; i < c; ++i) {
                    tomb[i]=rand()%100;
                    printf("%f;",tomb[i]);
                    osszeg+=tomb[i];
                }
                printf("\na szamok osszege=%f\n",osszeg);
                free(tomb);
                break;}
            case 4:{
                printf("hany szamot szeretnel?\n");
                scanf("%i",& c);
                tomb=(int*)malloc(c*sizeof(int));
                if (tomb==NULL){
                    printf("sikertelen malloc");
                    break;
                }
                for (int i = 0; i < c; ++i) {
                    tomb[i]=rand()%100;
                    printf("%f;",tomb[i]);
                    osszeg+=tomb[i];
                    db+=1;}
                printf("\na szamok atlaga:%f\n",(float)osszeg/db);
                free(tomb);
                break;}
            case 5:{
                printf("hany szamot szeretnel?\n");
                scanf("%i",& c);
                d=c-1;
                tomb=(int*)malloc(c*sizeof(int));
                if (tomb==NULL){
                    printf("sikertelen malloc");
                    break;
                }
                for (int i = 0; i < c; ++i) {
                    tomb[i] = rand() % 100;
                    printf("%f-", tomb[i]);
                }
                printf("\n");
                for (int i = c-1; i >= 0; --i) {
                    printf("%f;",tomb[i]);
                }
                printf("\n");free(tomb);
                break;}
            case 6: {
                printf("hany szamot szeretnel?\n");
                scanf("%i", &c);
                tomb = (int *) malloc(c * sizeof(int));
                if (tomb == NULL) {
                    printf("sikertelen malloc");
                    break;
                }
                for (int i = 0; i < c; ++i) {
                    tomb[i] = rand() % 100;
                    printf("%f;", tomb[i]);
                }
                //generalas(c);
                printf("\n");
                qsort(tomb, c, sizeof(float), nov_cmp);
                for (int i = 0; i < c; ++i) {
                    printf("%f;", tomb[i]);}
                printf("\n");
                free(tomb);
                break;}
            case 7:{
                printf("hany szamot szeretnel?\n");
                scanf("%i", &c);
                tomb = (int *) malloc(c * sizeof(int));
                if (tomb == NULL) {
                    printf("sikertelen malloc");
                    break;
                }
                for (int i = 0; i < c; ++i) {
                    tomb[i] = rand() % 100;
                    printf("%f;", tomb[i]);
                }
                //generalas(c);
                printf("\n");
                qsort(tomb, c, sizeof(float), csok_cmp);
                for (int i = 0; i < c; ++i) {
                    printf("%f;", tomb[i]);}
                printf("\n");free(tomb);
                break;}
            case 8:{
                char k=65,*q=k;
                for (int i = 0; i < 26; ++i) {
                    printf("%c  ",q);
                q+=1;}
                printf("\n");
                break;}
            case 10:{
                int e,f,**t;
                printf("irj be ket szamot\n");
                scanf("%i%i",&e,&f);
                t=(int *) malloc(e* sizeof(int));
                if(!t){
                    printf("Sikertelen malloc");
                    break;
                }
                        }
                for (int i = 0; i < e; ++i) {
                    for (int i = 0; i < e; ++i) {
                        t[i]=(int *) malloc(f * sizeof (int));
                        for (int j = 0; j < f; ++j) {
                        t[i][j]=rand()%100;
                        printf("%.2i    ",t[i][j]);
                    }
                    printf("\n");
                }
                free(t);
                break;}
        }
    }
    return 0;
}
int nov_cmp(const void *p1, const void *p2) {
    int *q1=(float *)p1;
    int *q2=(float *)p2;
    return *q1-*q2;
}

void generalas(int c) {
    int *tomb;
    srand(time(0));
    tomb = (int *) malloc(c * sizeof(int));
    if (tomb == NULL) {
        printf("sikertelen malloc");
    }
    for (int i = 0; i < c; ++i) {
        tomb[i] = rand() % 100;
        printf("%f;", tomb[i]);
    }
}

int csok_cmp(const void *p1, const void *p2) {
    int *q1=(float *)p1;
    int *q2=(float *)p2;
    return *q2-*q1;
}
