#include <stdio.h>
#include <stdlib.h>        // system ��ɾ� ���� �ʿ� (���Ұ�� ���޽��� ��µ�)
#include <windows.h>
#include <mmsystem.h>      // ����� ���
#pragma comment(lib, "winmm.lib")
#include <digitalv.h>      // ����� ���
#include "code\TUI.c"      // TUI �ҷ���
#include "code\prologue.c" // ���ѷα׸� �ҷ���
#include "code\chapter1.c" // �� 1���� �ҷ��� 

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow){
    /* vscode�� ���ڵ� ����� ANSI 949 (EUC-KR)�� �����ֽʽÿ�. !!��� .c ����!!
    Code Runner > Executor Map ���� chcp 65001 && �κ��� �����ֽʽÿ�.
    �� ������ ������10 CMD ȯ�濡 ������ ���ڵ� ������� ���۵˴ϴ�. */
    system("MODE 98,30");
    printf("�� ������ ���� �߰������� �������� �ʽ��ϴ�.\n");
    printf("���� ���� �׽�Ʈ | 2024-06-09-1356 |\n\n");
    system("PAUSE");

    // ���� ȭ�� ���
    int menu;
    int Set[] = {7, 7, 7, 7}; // �⺻ ����
    short counter = 2;
    char key;

    short windows = 0;

    MSG msg = {0};
    HBITMAP hBMP = (HBITMAP)LoadImage(NULL, ".\\texture\\menu.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    HWND imgControl = CreateWindow("STATIC", "adsdsadsa", WS_VISIBLE | SS_BITMAP, 1000, 100, 800, 600, NULL, NULL, hInstance, NULL);
    SendMessage(imgControl, STM_SETIMAGE, IMAGE_BITMAP, hBMP);

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

    /* ������ CMD������ ������ �̽��� �߻���
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
                DestroyWindow(imgControl);
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
                disclaimer(); // ��å����
                gotoxy(1, 19), system("PAUSE");
                system("cls");
                system("color E0");
                PlaySound(TEXT(".\\audio\\[SE]Wall1.wav"), 0, SND_ASYNC);
                bisogeo(); // ������ ���
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
                                info();
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