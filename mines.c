#include <stdio.h>
#include <stdlib.h>


char playboard[30][30]; //지뢰와 숫자가 적힌 보드
int checkboard[30][30]; //사용자가 체크한 보드
int N,M;

void board(int a){ //게임판 생성
    

    N=0,M=0;; //N은 게임판의 크기, M는 지뢰의 개수
    if(a == 1) {N=10, M= 15;}
    else if(a == 2) {N=20, M= 60;}
    else {N=30, M=135;}

    while (M >0) //'*'은 지뢰를 의미함, 게임판에 M만큼 지뢰를 랜덤으로 추가
    {
        int p = rand() % N, q = rand() % N;
        if(playboard[p][q] != '*'){
            playboard[p][q] = '*';
            M--;
        }
    }

    for(int i=0;i<N;i++){ //주변에 지뢰가 몇 개 있는지 확인하고 지뢰의 개수만큼 숫자를 입력
        for(int j=0;j<N;j++){
            int cnt=0;
            if(playboard[i][j] != '*'){





            }
        }
    }
}


int find(int a, int b){ // 지뢰가 맞는지 확인
    if(playboard[a][b] == '*') return 1;
    checkboard[a][b] = 1;
    if(playboard[a][b] == '0'){

    }
    return 0;
}

void show(){ // 화면 출력
    printf("  ");
    for(int i=0;i<N;i++){
        if(i>8) printf("%d", i+1);
        else printf("%d ", i+1);
    }
    printf("\n");
    for(int i=0;i<N;i++){
        printf("%2d", i+1);
        for(int j=0;j<N;j++){
            printf("|");
            if(checkboard[i][j] > 0){
                printf("%c", playboard[i][j]);
            }
            else{
                printf(" ");
            }
        }
        printf("|\n");

    }
    
}

int main(){
    int a;
    while(1){ //난이도 선택
        printf("난이도 선택(쉬움: 1, 보통: 2 어려움: 3): ");
        scanf("%d", &a);
        if (a>=1 && a<=3) break;
        else{
            printf("다시 입력해주세요\n");
        }
    }

    board(a);
    show();

    


}