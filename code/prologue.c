#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

void prologue()
{ // ���ѷα� ��Ʈ �����:
    static char key;
    char name;
    printf("����������������������������������������������������������������������������������������\n");
    printf("��"), gotoxy(43, 1), printf("��");
    gotoxy(14, 1), printf("����� �̸���?\n");
    printf("����������������������������������������������������������������������������������������\n");
    printf("��"), gotoxy(43, 3), printf("��\n");
    printf("����������������������������������������������������������������������������������������\n");
    gotoxy(3, 3), printf("> "), scanf("%f", &name);
    system("cls");
    printf("\t���ѷα�\n================================================================================\n\n\n");
    Sleep(1500);
    PlaySound(TEXT(".\\audio\\[BGS]clock2.wav"), 0, SND_ASYNC | SND_LOOP); // BGS �ݺ����
    printf("����ϰ� ������ ����. ���� �̷��� �����ϰ� �ݺ����� �ϻ� ���� �־���.\n");
    key = getch(); // �ƹ� Ű�� �������� �������� �Ѿ��
    printf("\"��... ���� ������ �̷��� ������ �λ����� ��� �� ������?\"\n");
    key = getch();

    system("PAUSE");
}