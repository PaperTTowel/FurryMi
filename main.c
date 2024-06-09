#include <stdio.h>
#include <stdlib.h>        // system 명령어 사용시 필요 (안할경우 경고메시지 출력됨)
#include <windows.h>
#include <mmsystem.h>      // 오디오 재생
#pragma comment(lib, "winmm.lib")
#include <digitalv.h>      // 오디오 재생
#include "code\TUI.c"      // TUI 불러옴
#include "code\prologue.c" // 프롤로그를 불러옴
#include "code\chapter1.c" // 제 1장을 불러옴 

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow){
    /* vscode의 인코딩 방식을 ANSI 949 (EUC-KR)로 맞춰주십시오. !!모든 .c 파일!!
    Code Runner > Executor Map 에서 chcp 65001 && 부분을 지워주십시오.
    이 세팅은 윈도우10 CMD 환경에 적합한 인코딩 방식으로 제작됩니다. */
    system("MODE 98,30");
    printf("이 게임은 아직 중간저장을 지원하지 않습니다.\n");
    printf("프리 알파 테스트 | 2024-06-09-1356 |\n\n");
    system("PAUSE");

    // 메인 화면 출력
    int menu;
    int Set[] = {7, 7, 7, 7}; // 기본 색상
    short counter = 2;
    char key;

    short windows = 0;

    MSG msg = {0};
    HBITMAP hBMP = (HBITMAP)LoadImage(NULL, ".\\texture\\menu.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    HWND imgControl = CreateWindow("STATIC", "adsdsadsa", WS_VISIBLE | SS_BITMAP, 1000, 100, 800, 600, NULL, NULL, hInstance, NULL);
    SendMessage(imgControl, STM_SETIMAGE, IMAGE_BITMAP, hBMP);

    mciSendString("open \".\\audio\\[BGM]木漏れ日の調べ.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
    mciSendString("play mp3 repeat", NULL, 0, NULL);

menu:
    system("cls");

    // 구 버전 CMD에 맞춘 타이틀
    printf("□■■■■□■□□□■□■■■□□■■■□□■□□□■□□□■■■■■□□■■■□□■□■□□□□\n");
    printf("□■□□□□■□□□■□■□□■□■□□■□■□□□■□□□□□■□□□■□□□■□■□■□□□□\n");
    printf("□■■■□□■□□□■□■■■□□■■■□□□■□■□□□□□□■□□□■■■■■□■□■□□□□\n");
    printf("□■□□□□■□□□■□■□□■□■□□■□□□■□□□□□□□■□□□■□□□■□■□■□□□□\n");
    printf("□■□□□□□■■■□□■□□■□■□□■□□□■□□□□□□□■□□□■□□□■□■□■■■■□\n");

    /* 구버전 CMD에서는 가독성 이슈가 발생함
    printf("■■■■■■■ ■■    ■■ ■■■■■■  ■■■■■■  ■■    ■■     ■■■■■■■■  ■■■■■  ■■ ■■      \n");
    printf("■■      ■■    ■■ ■■   ■■ ■■   ■■  ■■  ■■         ■■    ■■   ■■ ■■ ■■      \n");
    printf("■■■■■   ■■    ■■ ■■■■■■  ■■■■■■    ■■■■          ■■    ■■■■■■■ ■■ ■■      \n");
    printf("■■      ■■    ■■ ■■   ■■ ■■   ■■    ■■           ■■    ■■   ■■ ■■ ■■      \n");
    printf("■■       ■■■■■■  ■■   ■■ ■■   ■■    ■■           ■■    ■■   ■■ ■■ ■■■■■■■ \n");
    */
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    gotoxy(0, 5), printf("(c) 뒷돈받은 털묻은 스튜디오  |  겜창부 모둠원");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY);
    gotoxy(0, 29), printf("| ↑: 위   ↓: 아래    ENTER: 확인   |   더 좋은 플레이 환경을 위해 콘솔에서 실행이 권장됩니다.   ");
    // system("color 07");
    for (short i = 0;;){
        gotoxy(10, 10);
        color(Set[0]);
        printf("1. 시작");

        gotoxy(10, 11);
        color(Set[1]);
        printf("2. 설정");

        gotoxy(10, 12);
        color(Set[2]);
        printf("3. 도움말");

        gotoxy(10, 13);
        color(Set[3]);
        printf("4. 종료");

        key = _getch();

        if (key == 72 && (counter >= 2 && counter <= 4)){ // 72 방향키 위키
            counter--;
            PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
        }
        if (key == 80 && (counter >= 1 && counter <= 3)){ // 80 방향키 아래 키
            counter++;
            PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
        }
        if (key == '\r'){ // 객체 반환 = 엔터 키
            if (counter == 1){
                DestroyWindow(imgControl);
                mciSendString("stop mp3", NULL, 0, NULL); 
                PlaySound(TEXT(".\\audio\\[SE]Interaction"), 0, SND_ASYNC);
                system("cls");
                if(windows == 0) system("MODE 120,10");
                gotoxy(45, 2);
                printf("스크립트를 불러오고 있습니다.");
                Sleep(3000); // 지연
                system("cls");
                if(windows == 0) system("MODE 83,20");
                system("color 87");
                PlaySound(TEXT(".\\audio\\[SE]Chime.wav"), 0, SND_ASYNC);
                disclaimer(); // 면책조항
                gotoxy(1, 19), system("PAUSE");
                system("cls");
                system("color E0");
                PlaySound(TEXT(".\\audio\\[SE]Wall1.wav"), 0, SND_ASYNC);
                bisogeo(); // 컨텐츠 경고
                gotoxy(1, 19), system("PAUSE");
                system("color 07");
                system("cls");
                system("MODE 98,30");
                Sleep(1500);
                prologue(hInstance);
                break;
            }

            if (counter == 2){
                Set[1] = 7;
                PlaySound(TEXT(".\\audio\\[SE]Action"), 0, SND_ASYNC);
                // SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 55);
                setting();
                for (short i = 0;;){
                    if(windows == 0){
                        gotoxy(43, 10);
                        color(Set[0]);
                        printf("수동형 해상도로 변경             ");
                    }
                    else{
                        gotoxy(43, 10);
                        color(Set[0]);
                        printf("자동형 해상도로 변경");
                    }

                    gotoxy(43, 11);
                    color(Set[1]);
                    printf("음량");

                    gotoxy(43, 12);
                    color(Set[2]);
                    printf("언어");

                    gotoxy(42, 19);
                    color(Set[3]);
                    printf("← 뒤로가기");

                    key = _getch();

                    if (key == 72 && (counter >= 2 && counter <= 4)){ // 72 방향키 위키
                        counter--;
                        PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
                    }
                    if (key == 80 && (counter >= 1 && counter <= 3)){ // 80 방향키 아래 키
                        counter++;
                        PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
                    }
                    if (key == '\r'){
                        if (counter == 1){
                            if(windows == 0) PlaySound(TEXT(".\\audio\\[SE]Flash.wav"), 0, SND_ASYNC);
                            if(windows == 1) PlaySound(TEXT(".\\audio\\[SE]Saint.wav"), 0, SND_ASYNC);
                            if(windows == 0){
                                info();
                                gotoxy(43, 10), printf("기존 해상도로 변경하시겠습니까?");
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                                gotoxy(43, 11), printf("                  ");
                                gotoxy(43, 12), printf("이 설정은 콘솔 모드에서만 적용됩니다.");
                                gotoxy(43, 13), printf("Windows 터미널에서는 영향을 받지 않습니다.");
                                for(short i = 0;;){
                                    gotoxy(43, 15), color(Set[0]) ,printf("예");
                                    gotoxy(43, 16), color(Set[1]), printf("아니오");
                                    key = _getch();
                                    if (key == 72 && (counter >= 2 && counter <= 2)){ // 72 방향키 위키
                                        counter--;
                                        PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
                                        }
                                    if (key == 80 && (counter >= 1 && counter <= 1)){ // 80 방향키 아래 키
                                        counter++;
                                        PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
                                    }
                                    if (key == '\r'){
                                        if(counter == 1){
                                            windows = 1;
                                            PlaySound(TEXT(".\\audio\\[SE]Saint.wav"), 0, SND_ASYNC);
                                            system("MODE 120,30");
                                            system("color 07");
                                            goto menu;
                                        }
                                        if(counter == 2){
                                            windows = 1;
                                            PlaySound(TEXT(".\\audio\\[SE]Cancel.wav"), 0, SND_ASYNC);
                                            system("color 07");
                                            goto menu;
                                        }
                                    }
                                    Set[0] = 7;
                                    Set[1] = 7;
                                    Set[2] = 7;
                                    Set[3] = 7;
                                    if (counter == 1)
                                        Set[0] = 12;
                                    if (counter == 2)
                                        Set[1] = 12;
                                    if (counter == 3)
                                        Set[2] = 12;
                                    if (counter == 4)
                                        Set[2] = 12;
                                }
                            }
                            else{
                                windows = 0;
                                system("MODE 98,30");
                                goto menu;
                            }
                        }
                        if (counter == 2){
                            PlaySound(TEXT(".\\audio\\[SE]Failure.wav"), 0, SND_ASYNC);
                            gotoxy(57, 19), printf("설정 불가능!");
                        }
                        if (counter == 3){
                            PlaySound(TEXT(".\\audio\\[SE]Failure.wav"), 0, SND_ASYNC);
                            gotoxy(57, 19), printf("설정 불가능!");
                        }
                        if (counter == 4){
                            PlaySound(TEXT(".\\audio\\[SE]Cancel.wav"), 0, SND_ASYNC);
                            counter = 2;
                            Set[3] = 7;
                            system("color 07");
                            goto menu;
                        }
                    }
                    Set[0] = 7;
                    Set[1] = 7;
                    Set[2] = 7;
                    Set[3] = 7;
                    if (counter == 1)
                        Set[0] = 12;
                    if (counter == 2)
                        Set[1] = 12;
                    if (counter == 3)
                        Set[2] = 12;
                    if (counter == 4)
                        Set[3] = 12;
                }
                gotoxy(1, 29), system("PAUSE");
                system("color 07");
                goto menu;
            }

            if (counter == 3){
                PlaySound(TEXT(".\\audio\\[SE]Action"), 0, SND_ASYNC);
                system("cls");
                system("color 17");
                help();
                gotoxy(1, 29), system("PAUSE");
                system("color 07");
                goto menu;
            }

            if (counter == 4){
                counter = 2;
                PlaySound(TEXT(".\\audio\\[SE]Flash.wav"), 0, SND_ASYNC);
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                info();
                gotoxy(43, 10), printf("가끔 현실을 사는것도 좋습니다.");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                gotoxy(43, 12), printf("게임을 종료하시겠습니까?");
                for(short i = 0;;){
                    gotoxy(43, 15), color(Set[0]) ,printf("예");
                    gotoxy(43, 16), color(Set[1]), printf("아니오");
                    key = _getch();
                    if (key == 72 && (counter >= 2 && counter <= 2)){ // 72 방향키 위키
                        counter--;
                        PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
                    }
                    if (key == 80 && (counter >= 1 && counter <= 1)){ // 80 방향키 아래 키
                        counter++;
                        PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
                    }
                    if (key == '\r'){
                        if(counter == 1){
                            exit(EXIT_SUCCESS);
                        }
                        if(counter == 2){
                            PlaySound(TEXT(".\\audio\\[SE]Cancel.wav"), 0, SND_ASYNC);
                            system("color 07");
                            Set[1] = 7;
                            goto menu;
                        }
                    }
                    Set[0] = 7;
                    Set[1] = 7;
                    Set[2] = 7;
                    Set[3] = 7;
                    if (counter == 1)
                        Set[0] = 12;
                    if (counter == 2)
                        Set[1] = 12;
                    if (counter == 3)
                        Set[2] = 12;
                    if (counter == 4)
                        Set[2] = 12;
                }
            }
                
        }
        Set[0] = 7;
        Set[1] = 7;
        Set[2] = 7;
        Set[3] = 7;
        if (counter == 1)
            Set[0] = 12;
        if (counter == 2)
            Set[1] = 12;
        if (counter == 3)
            Set[2] = 12;
        if (counter == 4)
            Set[3] = 12;
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