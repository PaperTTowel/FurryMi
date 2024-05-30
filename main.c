#include <stdio.h>
#include <stdlib.h>     // system 명령어 사용시 필요 (안할경우 경고메시지 출력됨)
#include <windows.h>
#include <mmsystem.h>  // 오디오 재생
#pragma comment (lib, "winmm.lib")
#include <digitalv.h>  // 오디오 재생
#include <conio.h>
#include "code\prologue.c" // 프롤로그를 불러옴
#include "code\chapter1.c" // 제 1장을 불러옴

void color(int color){ // 콘솔 색
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoxy(int x, int y){ // 텍스트 좌표
    COORD c; // 선언되어 있는 x,y 좌표 저장하는 놈
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c); // 콘솔의 핸들 값과 좌표값을 받아서, 해당 위치로 커서를 이동시키는 놈
}

int main(){
    /* vscode의 인코딩 방식을 ANSI 949 (EUC-KR)로 맞춰주십시오.
    Code Runner > Executor Map 에서 chcp 65001 && 부분을 지워주십시오.
    이 세팅은 윈도우10 CMD 환경에 적합한 인코딩 방식으로 제작됩니다. */
    printf("이 게임은 아직 중간저장을 지원하지 않습니다.\n");
    system("PAUSE");

    // 메인 화면 출력
    int menu;
    int Set[] = {7,7,7,7}; // 기본 색상
    int counter = 2;
    char key;

    mciSendString("open \"D:\\KimYongHa\\프로그래밍 수행평가\\audio\\[BGM]木漏れ日の調べ.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
    mciSendString("play mp3", NULL, 0, NULL);

menu:
    system("cls");
    printf("■■■■■■■ ■■    ■■ ■■■■■■  ■■■■■■  ■■    ■■     ■■■■■■■■  ■■■■■  ■■ ■■      \n");
    printf("■■      ■■    ■■ ■■   ■■ ■■   ■■  ■■  ■■         ■■    ■■   ■■ ■■ ■■      \n");
    printf("■■■■■   ■■    ■■ ■■■■■■  ■■■■■■    ■■■■          ■■    ■■■■■■■ ■■ ■■      \n");
    printf("■■      ■■    ■■ ■■   ■■ ■■   ■■    ■■           ■■    ■■   ■■ ■■ ■■      \n");
    printf("■■       ■■■■■■  ■■   ■■ ■■   ■■    ■■           ■■    ■■   ■■ ■■ ■■■■■■■ \n");

    gotoxy(9, 17);
    printf("(c) 겜창부 스튜디오");
    for(int i = 0;;){
        gotoxy(10,10);
        color(Set[0]);
        printf("1. 시작");

        gotoxy(10,11);
        color(Set[1]);
        printf("2. 설정");

        gotoxy(10,12);
        color(Set[2]);
        printf("3. 도움말");

        gotoxy(10,13);
        color(Set[3]);
        printf("4. 종료");

        key = _getch();

        if(key == 72 && (counter >= 2 && counter <= 4)){ // 72 방향키 위키
            counter --;
            PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
        }
        if(key == 80 && (counter >= 1 && counter <= 3)){ // 80 방향키 아래 키
            counter ++;
            PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
        }
        if(key == '\r'){ // 객체 반환 = 엔터 키
            if(counter == 1){
                mciSendString("stop mp3", NULL, 0, NULL);
                PlaySound(TEXT(".\\audio\\[SE]Interaction"), 0, SND_ASYNC);
                system("cls");
                gotoxy(45, 2);
                printf("스크립트를 불러오고 있습니다.");
                Sleep(2000); // 지연
                system("cls");
                prologue();
                break;
            }

            if(counter == 2) printf("\t설정 기능은 아직 구현되어 있지 않습니다."), PlaySound(TEXT(".\\audio\\[SE]Action"), 0, SND_ASYNC);

            if(counter == 3){
                PlaySound(TEXT(".\\audio\\[SE]Action"), 0, SND_ASYNC);
                system("cls");
                printf("\t도움말\n================================================================================\n\n\n");
                gotoxy(17, 3);
                printf("이 게임은 콘솔을 기반으로 제작된 미연시입니다.\n");
                gotoxy(30, 5);
                printf("선택지 변경: 방향키\n");
                gotoxy(30, 6);
                printf("상호작용: 엔터\n\n\n\n\n\n");
                system("PAUSE");
                goto menu;
            }

            if(counter == 4) exit(EXIT_SUCCESS);
        }
        Set[0] = 7;
        Set[1] = 7;
        Set[2] = 7;
        Set[3] = 7;
        if(counter == 1) Set[0] = 12;
        if(counter == 2) Set[1] = 12;
        if(counter == 3) Set[2] = 12;
        if(counter == 4) Set[3] = 12;
    }

    /* 매우 간단한 a,b,c 선택지
    printf("옵션을 선택하십시오: "), scanf("%c", &menu);

    switch (menu){
    case 'a': // 시작
        printf("\n스크립트를 불러오고 있습니다.");
        Sleep(2000); // 지연
        system("cls");
        break;
    case 'b': // 옵션
        break;
    case 'c': // 종료
        exit(EXIT_SUCCESS);
        break;
    default:
        printf("\n없는 옵션 입니다.\n");
        system("PAUSE");
        goto menu;
    }
    */
    return 0;
}