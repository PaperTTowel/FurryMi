#include <stdio.h>
#include <stdlib.h> // system ��ɾ� ���� �ʿ� (���Ұ�� ���޽��� ��µ�)
#include <windows.h>
#include <mmsystem.h> // ����� ���
#pragma comment(lib, "winmm.lib")
#include <digitalv.h> // ����� ���
#include <conio.h>
#include "code\prologue.c" // ���ѷα׸� �ҷ���
#include "code\chapter1.c" // �� 1���� �ҷ���

void color(int color)
{ // �ܼ� ��
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoxy(int x, int y)
{            // �ؽ�Ʈ ��ǥ
    COORD c; // ����Ǿ� �ִ� x,y ��ǥ �����ϴ� ��
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c); // �ܼ��� �ڵ� ���� ��ǥ���� �޾Ƽ�, �ش� ��ġ�� Ŀ���� �̵���Ű�� ��
}

int main()
{
    /* vscode�� ���ڵ� ����� ANSI 949 (EUC-KR)�� �����ֽʽÿ�.
    Code Runner > Executor Map ���� chcp 65001 && �κ��� �����ֽʽÿ�.
    �� ������ ������10 CMD ȯ�濡 ������ ���ڵ� ������� ���۵˴ϴ�. */
    printf("�� ������ ���� �߰������� �������� �ʽ��ϴ�.\n");
    system("PAUSE");

    // ���� ȭ�� ���
    int menu;
    int Set[] = {7, 7, 7, 7}; // �⺻ ����
    int counter = 2;
    char key;

    mciSendString("open \".\\audio\\[BGM]��ש��������.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
    mciSendString("play mp3 repeat", NULL, 0, NULL);

menu:
    system("cls");

    // �� ���� CMD�� ���� Ÿ��Ʋ
    printf("��������������������������������������������������\n");
    printf("��������������������������������������������������\n");
    printf("��������������������������������������������������\n");
    printf("��������������������������������������������������\n");
    printf("��������������������������������������������������\n");

    /* �� ���� CMD������ ������ �̽��� �߻���
    printf("�������� ���    ��� �������  �������  ���    ���     ���������  ������  ��� ���      \n");
    printf("���      ���    ��� ���   ��� ���   ���  ���  ���         ���    ���   ��� ��� ���      \n");
    printf("������   ���    ��� �������  �������    �����          ���    �������� ��� ���      \n");
    printf("���      ���    ��� ���   ��� ���   ���    ���           ���    ���   ��� ��� ���      \n");
    printf("���       �������  ���   ��� ���   ���    ���           ���    ���   ��� ��� �������� \n");
    */

    gotoxy(0, 5);
    printf("(c) ��â�� ��Ʃ���");
    for (int i = 0;;)
    {
        gotoxy(10, 10);
        color(Set[0]);
        printf("1. ����");

        gotoxy(10, 11);
        color(Set[1]);
        printf("2. ����");

        gotoxy(10, 12);
        color(Set[2]);
        printf("3. ����");

        gotoxy(10, 13);
        color(Set[3]);
        printf("4. ����");

        key = _getch();

        if (key == 72 && (counter >= 2 && counter <= 4))
        { // 72 ����Ű ��Ű
            counter--;
            PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
        }
        if (key == 80 && (counter >= 1 && counter <= 3))
        { // 80 ����Ű �Ʒ� Ű
            counter++;
            PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
        }
        if (key == '\r')
        { // ��ü ��ȯ = ���� Ű
            if (counter == 1)
            {
                mciSendString("stop mp3", NULL, 0, NULL);
                PlaySound(TEXT(".\\audio\\[SE]Interaction"), 0, SND_ASYNC);
                system("cls");
                gotoxy(45, 2);
                printf("��ũ��Ʈ�� �ҷ����� �ֽ��ϴ�.");
                Sleep(3000); // ����
                system("cls");
                system("color 87");
                PlaySound(TEXT(".\\audio\\[SE]Success.wav"), 0, SND_ASYNC);
                printf("��������������������������������������������������������������������������������������������������������������������������������������������������������������������\n"), Sleep(20);
                printf("��"), gotoxy(36, 1), printf("DISCLAIMER!"), gotoxy(81, 1), printf("��\n");
                printf("��"), printf("����������������������������������������������������������������������������������������������������������������������������������������������������������������"), gotoxy(81, 2), printf("��\n"), Sleep(20);
                printf("��"), gotoxy(81, 3), printf("��\n"), Sleep(20);
                printf("��"), gotoxy(81, 4), printf("��\n"), Sleep(20);
                printf("��"), gotoxy(81, 5), printf("��\n"), Sleep(20);
                printf("��"), gotoxy(81, 6), printf("��\n"), Sleep(20);
                printf("��"), gotoxy(81, 7), printf("��\n"), Sleep(20);
                printf("��"), gotoxy(81, 8), printf("��\n"), Sleep(20);
                printf("��������������������������������������������������������������������������������������������������������������������������������������������������������������������\n"), Sleep(20);
                gotoxy(2, 4), printf("���� �� ���� ȫ������ ��޵ǰų� �����");
                gotoxy(2, 5), printf("�θ�, �ι�, ��ũ��Ʈ, ����, ȸ��, ��ü, ����, ����, ���, ��ǰ,");
                gotoxy(2, 6), printf("�׸��� ��� �������� ���� �����ʹ� ���� ���谡 ���� �㱸������ â�۵� ���̸�");
                gotoxy(2, 7), printf("���� ������ ���� ��찡 �ִ��� �̴� �쿬�� ���� ������ �����ϴ�.");
                gotoxy(0, 10), system("PAUSE");
                system("color 07");
                system("cls");
                Sleep(1500);
                prologue();
                break;
            }

            if (counter == 2)
                printf("\t���� ����� ���� �����Ǿ� ���� �ʽ��ϴ�."), PlaySound(TEXT(".\\audio\\[SE]Failure.wav"), 0, SND_ASYNC);

            if (counter == 3)
            {
                PlaySound(TEXT(".\\audio\\[SE]Action"), 0, SND_ASYNC);
                system("cls");
                system("color 17");
                printf("����������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
                printf("��"), gotoxy(4, 0), printf(" ���� "), gotoxy(1, 1), printf("\t\t\t�̵�: ����Ű\t��ȣ�ۿ�: ����"), gotoxy(79, 1), printf("��\n");
                printf("��"), printf("������������������������������������������������������������������������������������������������������������������������������������������������������������"),
                    gotoxy(79, 2), printf("��\n");
                printf("��"), gotoxy(79, 3), printf("��\n");
                printf("��"), gotoxy(79, 4), printf("��\n");
                printf("��"), gotoxy(79, 5), printf("��\n");
                printf("��"), gotoxy(79, 6), printf("��\n");
                printf("��"), gotoxy(79, 7), printf("��\n");
                printf("��"), gotoxy(79, 8), printf("��\n");
                printf("��"), gotoxy(79, 9), printf("��\n");
                printf("��"), gotoxy(79, 10), printf("��\n");
                printf("��"), gotoxy(79, 11), printf("��\n");
                printf("��"), gotoxy(79, 12), printf("��\n");
                printf("����������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
                gotoxy(17, 3), printf("�� ������ �ܼ��� ������� ���۵� �̿����Դϴ�.\n");
                gotoxy(17, 4), printf("���α׷��� �����򰡿� ���� ���۵Ǿ����ϴ�.");
                gotoxy(2, 6), printf("���丮 �� ����� ��ȹ: 30508 ������");
                gotoxy(2, 7), printf("����ȭ�� ���α׷���: 30507 �����");
                gotoxy(2, 8), printf("���ѷα� ���α׷���: ");
                gotoxy(2, 9), printf("é��1 ���α׷���: ");
                gotoxy(2, 10), printf("é��2 ���α׷���: ");
                gotoxy(2, 11), printf("é��3 ���α׷���: \n\n\n\n");
                system("PAUSE");
                system("color 07");
                goto menu;
            }

            if (counter == 4)
                exit(EXIT_SUCCESS);
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

    /* �ſ� ������ a,b,c ������
    printf("�ɼ��� �����Ͻʽÿ�: "), scanf("%c", &menu);

    switch (menu){
    case 'a': // ����
        printf("\n��ũ��Ʈ�� �ҷ����� �ֽ��ϴ�.");
        Sleep(2000); // ����
        system("cls");
        break;
    case 'b': // �ɼ�
        break;
    case 'c': // ����
        exit(EXIT_SUCCESS);
        break;
    default:
        printf("\n���� �ɼ� �Դϴ�.\n");
        system("PAUSE");
        goto menu;
    }
    */
    return 0;
}