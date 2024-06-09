#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

void chapter1(HINSTANCE hInstance){ // 챕터 1 담당자: 30507 김원혁
    static char key;
    printf("\t챕터1\n================================================================================\n\n\n");
    Sleep(1500);
    PlaySound(TEXT(".\\audio\\[BGM]ゆるいBGM.wav"), 0, SND_ASYNC);
    gotoxy(1, 4), printf("어제의 일 때문에 몸이 무겁게 느껴졌다.");
    key = getch();
    gotoxy(1, 4), printf("하지만 학교를 갈 준비를 해야한다.         ");
    key = getch();
    gotoxy(1, 4), printf("나는 일어나기 싫은 침대에서 내 몸을 간신히 일으켰다.");
    key = getch();
    gotoxy(1, 4), printf("그리고 씻으러 화장실로 향했다.                        ");
    key = getch();
    gotoxy(1, 4), printf("화장실로 향한 나는 세수와 양치를 하고 아무것도 없는 부엌에\n 그나마 찬장에 쌓아놓은 편의점 멜론빵을 하나 집어 입에 물고 학교로 향했다.");
    key = getch();
    gotoxy(1, 4), printf("\"으아... 덥다...\"                                                   \n                                                                                  ");
    key = getch();
    gotoxy(1, 4), printf("초여름이어서 그런지 밖이 아침인데도 불구하고 습하고 조금 더웠다.");
    key = getch();
    gotoxy(1, 4), printf("나는 더위에 축 늘어진 슬라임처럼 늘어져서 천천히 걸어가며\n 어제 히비키랑 헤어진 골목을 통해 학교에 가려고 몸을 트는 순간 나는 무언가에 부딪쳐서 넘어졌다.");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"아!\"                                                               \n                                                                                                      ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("철푸덕");
    key = getch();
    gotoxy(1, 4), printf("나는 무언가 복슬복슬한 것에 부딪친 느낌이었다.");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"엇! 괜찮아? 미안...\"                       ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("익숙한 목소리였다.                                    ");
    key = getch();
    gotoxy(1, 4), printf("나는 익숙한 목소리에 얼굴을 올려다 보았다.");
    key = getch();
    gotoxy(1, 4), printf("\"히비키?\"                                   ");
    key = getch();
    gotoxy(1, 4), printf("히비키였다. \'왜... 여기에 있는 거지?\'");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"안녕~, 근데 괜찮아?\"                   ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("히비키");
    key = getch();
}