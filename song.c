#include "header.h"
// #include "playlist.c"
// #include "song_list.c"
#include "search.c"
#include "check.c"
#define _CRT_SECURE_NO_WARNINGS 

// #define STRING_SIZE 256

int main() {
    int mode;
    int err = 0;
    char input[STRING_SIZE];

    while (1)
    {
        if (err == 0) {
            printf("\n노래 관리 프로그램입니다.\n");
            printf("원하는 메뉴를 선택하세요.\n\n");
        }
        else if (err == 1) {
            printf("\n해당 메뉴는 존재하지 않습니다.\n");
            printf("밑의 메뉴 중 선택하세요(예시:1)\n\n");
            err = 0;
        }
        printf("1. 노래 리스트 관리\n");
        printf("2. 검색 기능\n");
        printf("3. 플레이리스트\n");
        printf("4. 좋아요/즐겨찾기\n");
        printf("5. 종료\n\n");
        printf("메뉴 선택 : ");
        
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0'; // 엔터키 제거
        sscanf(input, "%d", &mode);

        switch (mode) {
        case 1: //노래 리스트 관리
            // song_list_menu();
            break;

        case 2: //검색 기능
            searchMenu();
            break;

        case 3: //플레이리스트
            //playlistMenu();
            break;

        case 4: //좋아요/즐겨찾기
            likeMenu();
            break;

        case 5: //종료
            printf("프로그램을 종료합니다\n");
            return 0;

        default: //error
            //while (getchar() != '\n'); //입력 버터 비우기
            err = 1;
            break;
        }
    }

    return 0;
}