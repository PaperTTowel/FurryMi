#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

void chapter1(HINSTANCE hInstance){ // é�� 1 �����: 30507 �����
    static char key;
    printf("\té��1\n================================================================================\n\n\n");
    Sleep(1500);
    PlaySound(TEXT(".\\audio\\[BGM]��몤BGM.wav"), 0, SND_ASYNC);
    gotoxy(1, 4), printf("������ �� ������ ���� ���̰� ��������.");
    key = getch();
    gotoxy(1, 4), printf("������ �б��� �� �غ� �ؾ��Ѵ�.         ");
    key = getch();
    gotoxy(1, 4), printf("���� �Ͼ�� ���� ħ�뿡�� �� ���� ������ �����״�.");
    key = getch();
    gotoxy(1, 4), printf("�׸��� ������ ȭ��Ƿ� ���ߴ�.                        ");
    key = getch();
    gotoxy(1, 4), printf("ȭ��Ƿ� ���� ���� ������ ��ġ�� �ϰ� �ƹ��͵� ���� �ξ���\n �׳��� ���忡 �׾Ƴ��� ������ ��л��� �ϳ� ���� �Կ� ���� �б��� ���ߴ�.");
    key = getch();
    gotoxy(1, 4), printf("\"����... ����...\"                                                   \n                                                                                  ");
    key = getch();
    gotoxy(1, 4), printf("�ʿ����̾ �׷��� ���� ��ħ�ε��� �ұ��ϰ� ���ϰ� ���� ������.");
    key = getch();
    gotoxy(1, 4), printf("���� ������ �� �þ��� ������ó�� �þ����� õõ�� �ɾ��\n ���� ����Ű�� ����� ����� ���� �б��� ������ ���� Ʈ�� ���� ���� ���𰡿� �ε��ļ� �Ѿ�����.");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"��!\"                                                               \n                                                                                                      ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("öǪ��");
    key = getch();
    gotoxy(1, 4), printf("���� ���� ���������� �Ϳ� �ε�ģ �����̾���.");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"��! ������? �̾�...\"                       ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("�ͼ��� ��Ҹ�����.                                    ");
    key = getch();
    gotoxy(1, 4), printf("���� �ͼ��� ��Ҹ��� ���� �÷��� ���Ҵ�.");
    key = getch();
    gotoxy(1, 4), printf("\"����Ű?\"                                   ");
    key = getch();
    gotoxy(1, 4), printf("����Ű����. \'��... ���⿡ �ִ� ����?\'");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"�ȳ�~, �ٵ� ������?\"                   ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("����Ű");
    key = getch();
}