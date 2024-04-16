#include <stdio.h>

FILE* txttest = fopen("song_list.txt", "r");
    if (txttest == NULL) {
        printf("메뉴 정보 데이터 파일을 새로 생성했습니다.");
        Sleep(1000);
        system("cls");
        FILE* txttest = fopen("song_list.txt", "w");
        fclose(txttest);
    }
    else {
        fclose(txttest);
    }