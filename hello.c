#include <stdio.h>

int main(void){

    int ara[3][3][3] = {
        {
            {1,40,400},
            {2,60,500},
            {3,60,700},
        },
        {
            {4,10,100},
            {5,20,200},
            {6,70,700}
        },
        {
            {7,30,300},
            {8,80,800},
            {9,90,900}
        }
    };

    printf("Player\tT20\tODI\n");
    int i,j,k;
    int total_score_bn = 0, total_score_others = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            for(k = 0; k < 3; k++){
                printf("%d\t", ara[i][j][k]);
            }
            printf("\n");
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            total_score_bn += ara[i][j][1];
            total_score_others += ara[i][j][2];
        }
    }

    printf("All Player Total score T20: %d\n", total_score_bn);
    printf("All Player total score ODI: %d\n", total_score_others);

    return 0;
}