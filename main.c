#include <stdio.h>
#include <stdlib.h> // system ��ɾ� ���� �ʿ� (���Ұ�� ���޽��� ��µ�)
#include <windows.h>
#include <mmsystem.h> // ����� ���
#pragma comment(lib, "winmm.lib")
#include <digitalv.h> // ����� ���
#include <conio.h>
#include "code\prologue.c" // ���ѷα׸� �ҷ���
#include "code\chapter1.c" // �� 1���� �ҷ���

void color(int color){ // �ܼ� ��
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoxy(int x, int y){            // �ؽ�Ʈ ��ǥ
    COORD c; // ����Ǿ� �ִ� x,y ��ǥ �����ϴ� ��
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c); // �ܼ��� �ڵ� ���� ��ǥ���� �޾Ƽ�, �ش� ��ġ�� Ŀ���� �̵���Ű�� ��
}

int main(){
    /* vscode�� ���ڵ� ����� ANSI 949 (EUC-KR)�� �����ֽʽÿ�.
    Code Runner > Executor Map ���� chcp 65001 && �κ��� �����ֽʽÿ�.
    �� ������ ������10 CMD ȯ�濡 ������ ���ڵ� ������� ���۵˴ϴ�. */
    system("MODE 98,30");
    printf("�� ������ ���� �߰������� �������� �ʽ��ϴ�.\n");
    system("PAUSE");

    // ���� ȭ�� ���
    int menu;
    int Set[] = {7, 7, 7, 7}; // �⺻ ����
    short counter = 2;
    char key;

    short windows = 0;

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

    /* ���Ž� CMD������ ������ �̽��� �߻���
    printf("�������� ���    ��� �������  �������  ���    ���     ���������  ������  ��� ���      \n");
    printf("���      ���    ��� ���   ��� ���   ���  ���  ���         ���    ���   ��� ��� ���      \n");
    printf("������   ���    ��� �������  �������    �����          ���    �������� ��� ���      \n");
    printf("���      ���    ��� ���   ��� ���   ���    ���           ���    ���   ��� ��� ���      \n");
    printf("���       �������  ���   ��� ���   ���    ���           ���    ���   ��� ��� �������� \n");
    */
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    gotoxy(0, 5), printf("(c) �޵����� �й��� ��Ʃ���  |  ��â�� ��ҿ�");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY);
    gotoxy(0, 29), printf("| ��: ��   ��: �Ʒ�    ENTER: Ȯ��   |   �� ���� �÷��� ȯ���� ���� �ֿܼ��� ������ ����˴ϴ�.   ");
    // system("color 07");
    for (short i = 0;;){
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

        if (key == 72 && (counter >= 2 && counter <= 4)){ // 72 ����Ű ��Ű
            counter--;
            PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
        }
        if (key == 80 && (counter >= 1 && counter <= 3)){ // 80 ����Ű �Ʒ� Ű
            counter++;
            PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
        }
        if (key == '\r'){ // ��ü ��ȯ = ���� Ű
            if (counter == 1){
                mciSendString("stop mp3", NULL, 0, NULL);
                PlaySound(TEXT(".\\audio\\[SE]Interaction"), 0, SND_ASYNC);
                system("cls");
                if(windows == 0) system("MODE 120,10");
                gotoxy(45, 2);
                printf("��ũ��Ʈ�� �ҷ����� �ֽ��ϴ�.");
                Sleep(3000); // ����
                system("cls");
                if(windows == 0) system("MODE 83,20");
                system("color 87");
                PlaySound(TEXT(".\\audio\\[SE]Chime.wav"), 0, SND_ASYNC);
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
                gotoxy(1, 19), system("PAUSE");
                system("color 07");
                system("cls");
                system("MODE 98,30");
                Sleep(1500);
                prologue();
                break;
            }

            if (counter == 2){
                Set[1] = 7;
                PlaySound(TEXT(".\\audio\\[SE]Action"), 0, SND_ASYNC);
                // SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 55);
                gotoxy(40, 8), printf("������������������������������������������������������������������������������������������������������������������\n"), Sleep(10);
                gotoxy(40, 9), printf("��"), gotoxy(96, 9), printf("��\n"), gotoxy(44, 8), printf(" ���� "), Sleep(10);
                gotoxy(40, 10), printf("��"), gotoxy(96, 10), printf("��\n"), Sleep(10);
                gotoxy(40, 11), printf("��"), gotoxy(96, 11), printf("��\n"), Sleep(10);
                gotoxy(40, 12), printf("��"), gotoxy(96, 12), printf("��\n"), Sleep(10);
                gotoxy(40, 13), printf("��"), gotoxy(96, 13), printf("��\n"), Sleep(10);
                gotoxy(40, 14), printf("��"), gotoxy(96, 14), printf("��\n"), Sleep(10);
                gotoxy(40, 15), printf("��"), gotoxy(96, 15), printf("��\n"), Sleep(10);
                gotoxy(40, 16), printf("��"), gotoxy(96, 16), printf("��\n"), Sleep(10);
                gotoxy(40, 17), printf("��"), gotoxy(96, 17), printf("��\n"), Sleep(10);
                gotoxy(40, 18), printf("��"), gotoxy(96, 18), printf("��\n"), Sleep(10);
                gotoxy(40, 19), printf("��"), gotoxy(96, 19), printf("��\n"), Sleep(10);
                gotoxy(40, 20), printf("��"), gotoxy(96, 20), printf("��\n"), Sleep(10);
                gotoxy(40, 21), printf("������������������������������������������������������������������������������������������������������������������\n"), Sleep(10);
                for (short i = 0;;){
                    if(windows == 0){
                        gotoxy(43, 10);
                        color(Set[0]);
                        printf("������ �ػ󵵷� ����             ");
                    }
                    else{
                        gotoxy(43, 10);
                        color(Set[0]);
                        printf("�ڵ��� �ػ󵵷� ����");
                    }

                    gotoxy(43, 11);
                    color(Set[1]);
                    printf("����");

                    gotoxy(43, 12);
                    color(Set[2]);
                    printf("���");

                    gotoxy(42, 19);
                    color(Set[3]);
                    printf("�� �ڷΰ���");

                    key = _getch();

                    if (key == 72 && (counter >= 2 && counter <= 4)){ // 72 ����Ű ��Ű
                        counter--;
                        PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
                    }
                    if (key == 80 && (counter >= 1 && counter <= 3)){ // 80 ����Ű �Ʒ� Ű
                        counter++;
                        PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
                    }
                    if (key == '\r'){
                        if (counter == 1){
                            if(windows == 0) PlaySound(TEXT(".\\audio\\[SE]Flash.wav"), 0, SND_ASYNC);
                            if(windows == 1) PlaySound(TEXT(".\\audio\\[SE]Saint.wav"), 0, SND_ASYNC);
                            if(windows == 0){
                                gotoxy(41, 9), printf("��������������������������������������������������������������������������������������������������������������\n"), Sleep(10);
                                gotoxy(41, 10), printf("��"), gotoxy(95, 10), printf("��\n"), gotoxy(60, 9), printf(" �ȳ� "), Sleep(10);
                                gotoxy(41, 11), printf("��"), gotoxy(95, 11), printf("��\n"), Sleep(10);
                                gotoxy(41, 12), printf("��"), gotoxy(95, 12), printf("��\n"), Sleep(10);
                                gotoxy(41, 13), printf("��"), gotoxy(95, 13), printf("��\n"), Sleep(10);
                                gotoxy(41, 14), printf("��"), gotoxy(95, 14), printf("��\n"), Sleep(10);
                                gotoxy(41, 15), printf("��"), gotoxy(95, 15), printf("��\n"), Sleep(10);
                                gotoxy(41, 16), printf("��"), gotoxy(95, 16), printf("��\n"), Sleep(10);
                                gotoxy(41, 17), printf("��"), gotoxy(95, 17), printf("��\n"), Sleep(10);
                                gotoxy(41, 18), printf("��������������������������������������������������������������������������������������������������������������\n"), Sleep(10);
                                gotoxy(43, 10), printf("���� �ػ󵵷� �����Ͻðڽ��ϱ�?");
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                                gotoxy(43, 11), printf("                  ");
                                gotoxy(43, 12), printf("�� ������ �ܼ� ��忡���� ����˴ϴ�.");
                                gotoxy(43, 13), printf("Windows �͹̳ο����� ������ ���� �ʽ��ϴ�.");
                                for(short i = 0;;){
                                    gotoxy(43, 15), color(Set[0]) ,printf("��");
                                    gotoxy(43, 16), color(Set[1]), printf("�ƴϿ�");
                                    key = _getch();
                                    if (key == 72 && (counter >= 2 && counter <= 2)){ // 72 ����Ű ��Ű
                                        counter--;
                                        PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
                                        }
                                    if (key == 80 && (counter >= 1 && counter <= 1)){ // 80 ����Ű �Ʒ� Ű
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
                            gotoxy(57, 19), printf("���� �Ұ���!");
                        }
                        if (counter == 3){
                            PlaySound(TEXT(".\\audio\\[SE]Failure.wav"), 0, SND_ASYNC);
                            gotoxy(57, 19), printf("���� �Ұ���!");
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
                printf("��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
                printf("��"), gotoxy(4, 0), printf(" ���� "), gotoxy(1, 1), printf("  �̵�: ����Ű   ��ȣ�ۿ�: ����  ��  �� ���� �÷��� ȯ���� ���� �ֿܼ��� ������ ����˴ϴ�."), gotoxy(96, 1), printf("��\n");
                printf("��"), printf("����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������"),
                gotoxy(96, 2), printf("��\n");
                printf("��"), gotoxy(96, 3), printf("��\n");
                printf("��"), gotoxy(96, 4), printf("��\n");
                printf("��"), gotoxy(96, 5), printf("��\n");
                printf("��"), gotoxy(96, 6), printf("��\n");
                printf("��"), gotoxy(96, 7), printf("��\n");
                printf("��"), gotoxy(96, 8), printf("��\n");
                printf("��"), gotoxy(96, 9), printf("��\n");
                printf("��"), gotoxy(96, 10), printf("��\n");
                printf("��"), gotoxy(96, 11), printf("��\n");
                printf("��"), gotoxy(96, 12), printf("��\n");
                printf("��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n");
                gotoxy(25, 3), printf("�� ������ �ܼ��� ������� ���۵� �̿����Դϴ�.\n");
                gotoxy(25, 4), printf("���α׷��� �����򰡿� ���� ���۵Ǿ����ϴ�.");
                gotoxy(2, 6), printf("���丮 �� ����� ��ȹ: 30508 ������");
                gotoxy(2, 7), printf("����ȭ�� ���α׷���: 30507 �����");
                gotoxy(2, 8), printf("���ѷα� ���α׷���: ");
                gotoxy(2, 9), printf("é��1 ���α׷���: ");
                gotoxy(2, 10), printf("é��2 ���α׷���: ");
                gotoxy(2, 11), printf("é��3 ���α׷���: ");
                gotoxy(1, 29), system("PAUSE");
                system("color 07");
                goto menu;
            }

            if (counter == 4){
                counter = 2;
                PlaySound(TEXT(".\\audio\\[SE]Flash.wav"), 0, SND_ASYNC);
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                gotoxy(41, 9), printf("��������������������������������������������������������������������������������������������������������������\n"), Sleep(10);
                gotoxy(41, 10), printf("��"), gotoxy(95, 10), printf("��\n"), gotoxy(60, 9), printf(" �ȳ� "), Sleep(10);
                gotoxy(41, 11), printf("��"), gotoxy(95, 11), printf("��\n"), Sleep(10);
                gotoxy(41, 12), printf("��"), gotoxy(95, 12), printf("��\n"), Sleep(10);
                gotoxy(41, 13), printf("��"), gotoxy(95, 13), printf("��\n"), Sleep(10);
                gotoxy(41, 14), printf("��"), gotoxy(95, 14), printf("��\n"), Sleep(10);
                gotoxy(41, 15), printf("��"), gotoxy(95, 15), printf("��\n"), Sleep(10);
                gotoxy(41, 16), printf("��"), gotoxy(95, 16), printf("��\n"), Sleep(10);
                gotoxy(41, 17), printf("��"), gotoxy(95, 17), printf("��\n"), Sleep(10);
                gotoxy(41, 18), printf("��������������������������������������������������������������������������������������������������������������\n"), Sleep(10);
                gotoxy(43, 10), printf("���� ������ ��°͵� �����ϴ�.");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                gotoxy(43, 12), printf("������ �����Ͻðڽ��ϱ�?");
                for(short i = 0;;){
                    gotoxy(43, 15), color(Set[0]) ,printf("��");
                    gotoxy(43, 16), color(Set[1]), printf("�ƴϿ�");
                    key = _getch();
                    if (key == 72 && (counter >= 2 && counter <= 2)){ // 72 ����Ű ��Ű
                        counter--;
                        PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
                    }
                    if (key == 80 && (counter >= 1 && counter <= 1)){ // 80 ����Ű �Ʒ� Ű
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