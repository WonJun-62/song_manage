#include "header.h"

struct Song {
    char title[STRING_SIZE];
    char singer[STRING_SIZE];
    char composer[STRING_SIZE];
    char lyricist[STRING_SIZE];
    char genre[STRING_SIZE];
    char playtime[STRING_SIZE];
    char album[STRING_SIZE];
    char release[STRING_SIZE];
    int like
};

void likeMenu(){
    int mode;
    int err = 0;
    char input[STRING_SIZE];
    while (1)
    {
        if (err == 0) {
            printf("\n좋아요 메뉴를 선택하셨습니다.\n");
            printf("원하는 메뉴를 선택하세요.\n\n");
        }
        else if (err == 1) {
            printf("\n해당 메뉴는 존재하지 않습니다.");
            printf("다시 선택하세요.\n\n");
            err = 0;
        }
        printf("1. 좋아요 누르기\n");
        printf("2.즐겨찾기 - 좋아요 한 노래 출력\n");
        printf("0. 뒤로 가기\n\n");
        printf("메뉴 선택 : ");

        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0'; // 엔터키 제거
        sscanf(input, "%d", &mode);

        switch (mode) {
        case 1: // 좋아요 누르기
            like();
            break;

        case 2: // 즐겨찾기
            // searchTag();
            break;

        case 0: //뒤로 가기 
            // system("cls");
            return;
            // main();
            // break;

        default: //error
            while (getchar() != '\n'); //입력 버터 비우기
            err = 1;
            break;
        }
    }
}