#include <stdio.h>
#include <stdlib.h>


char playboard[30][30]; //���ڿ� ���ڰ� ���� ����
int checkboard[30][30]; //����ڰ� üũ�� ����
int N,M;

void board(int a){ //������ ����
    

    N=0,M=0;; //N�� �������� ũ��, M�� ������ ����
    if(a == 1) {N=10, M= 15;}
    else if(a == 2) {N=20, M= 60;}
    else {N=30, M=135;}

    while (M >0) //'*'�� ���ڸ� �ǹ���, �����ǿ� M��ŭ ���ڸ� �������� �߰�
    {
        int p = rand() % N, q = rand() % N;
        if(playboard[p][q] != '*'){
            playboard[p][q] = '*';
            M--;
        }
    }

    for(int i=0;i<N;i++){ //�ֺ��� ���ڰ� �� �� �ִ��� Ȯ���ϰ� ������ ������ŭ ���ڸ� �Է�
        for(int j=0;j<N;j++){
            int cnt=0;
            if(playboard[i][j] != '*'){





            }
        }
    }
}


int find(int a, int b){ // ���ڰ� �´��� Ȯ��
    if(playboard[a][b] == '*') return 1;
    checkboard[a][b] = 1;
    if(playboard[a][b] == '0'){

    }
    return 0;
}

void show(){ // ȭ�� ���
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
    while(1){ //���̵� ����
        printf("���̵� ����(����: 1, ����: 2 �����: 3): ");
        scanf("%d", &a);
        if (a>=1 && a<=3) break;
        else{
            printf("�ٽ� �Է����ּ���\n");
        }
    }

    board(a);
    show();

    


}