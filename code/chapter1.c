#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

void chapter1(HINSTANCE hInstance,char name[10]){ // 챕터 1 담당자: 30507 김원혁
    static char key;
    printf("\t챕터1\n================================================================================\n\n\n");
    Sleep(1500);
    PlaySound(TEXT(".\\audio\\[BGM]ゆるいBGM.wav"), 0, SND_ASYNC);
    gotoxy(1, 4), printf("어제의 일 때문에 몸이 무겁게 느껴졌다.\n");
    key = getch();
    gotoxy(1, 4), printf("하지만 학교를 갈 준비를 해야한다.         \n");
    key = getch();
    gotoxy(1, 4), printf("나는 일어나기 싫은 침대에서 내 몸을 간신히 일으켰다.\n");
    key = getch();
    gotoxy(1, 4), printf("그리고 씻으러 화장실로 향했다.                        \n");
    key = getch();
    gotoxy(1, 4), printf("화장실로 향한 나는 세수와 양치를 하고 아무것도 없는 부엌에\n 그나마 찬장에 쌓아놓은 편의점 멜론빵을 하나 집어 입에 물고 학교로 향했다.\n");
    key = getch();

    HBITMAP hBMP = (HBITMAP)LoadImage(NULL, ".\\texture\\golmok1.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    HWND imgControl = CreateWindow("STATIC", "학교 옥상", WS_VISIBLE | SS_BITMAP, 1000, 100, 800, 600, NULL, NULL, hInstance, NULL);
    SendMessage(imgControl, STM_SETIMAGE, IMAGE_BITMAP, hBMP);

    gotoxy(1, 4), printf("\"으아... 덥다...\"                                                   \n                                                                                  \n");
    key = getch();
    gotoxy(1, 4), printf("초여름이어서 그런지 밖이 아침인데도 불구하고 습하고 조금 더웠다.\n");
    key = getch();
    gotoxy(1, 4), printf("나는 더위에 축 늘어진 슬라임처럼 늘어져서 천천히 걸어가며\n 어제 히비키랑 헤어진 골목을 통해 학교에 가려고 몸을 트는 순간 나는 무언가에 부딪쳐서 넘어졌다.\n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"아!\"                                                               \n                                                                                                      \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("철푸덕\n");
    key = getch();
    gotoxy(1, 4), printf("나는 무언가 복슬복슬한 것에 부딪친 느낌이었다.\n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"엇! 괜찮아? 미안...\"                           \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("익숙한 목소리였다.                                    \n");
    key = getch();
    gotoxy(1, 4), printf("나는 익숙한 목소리에 얼굴을 올려다 보았다.\n");
    key = getch();
    gotoxy(1, 4), printf("\"히비키?\"                                   \n");
    key = getch();
    gotoxy(1, 4), printf("히비키였다. \'왜... 여기에 있는 거지?\'\n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"안녕~, 근데 괜찮아?\"                   \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("히비키가 걱정하는 표정으로 물었다.\n");
    key = getch();
    gotoxy(1, 4), printf("\"응. 괜찮아. 근데 왜 여기에 서 있었던거야?\"\n");
    key = getch();
    gotoxy(1, 4), printf("나는 먼지와 털을 털며 일어났다.                       \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"%s를 기달리고 있었어\"              \n", name);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("\"나를?\"                           \n");
    key = getch();
    gotoxy(1, 4), printf("나는 내가 잘못들은 줄 알았다.\n");
    key = getch();
    gotoxy(1, 4), printf("\"응! 같이 등교하자\"         \n");
    key = getch();
    gotoxy(1, 4), printf("나는 같이 등교하자는 히비키에게 잡혀 끌려갔다.\n");
    key = getch();
    DestroyWindow(imgControl);
}