#include <stdio.h>
#include <stdlib.h> // system ��ɾ� ���� �ʿ� (���Ұ�� ���޽��� ��µ�)
#include <windows.h>
#include <conio.h>
#include <mmsyscom.h>
#include "code\part1.c" // �� 1���� �ҷ���

void color(int color){ // �ܼ� ��
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoxy(int x, int y){ // �ؽ�Ʈ ��ǥ
    COORD c; // ����Ǿ� �ִ� x,y ��ǥ �����ϴ� ��
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c); // �ܼ��� �ڵ� ���� ��ǥ���� �޾Ƽ�, �ش� ��ġ�� Ŀ���� �̵���Ű�� ��
}

int main(){
    /* vscode�� ���ڵ� ����� ANSI 949 (EUC-KR)�� �����ֽʽÿ�.
    Code Runner > Executor Map ���� chcp 65001 && �κ��� �����ֽʽÿ�.
    �� ������ ������10 CMD ȯ�濡 ������ ���ڵ� ������� ���۵˴ϴ�. */
    printf("�� ������ ���� �߰������� �������� �ʽ��ϴ�.\n");
    system("PAUSE");

    // ���� ȭ�� ���
    int menu;
    int Set[] = {7,7,7}; // �⺻ ����
    int counter = 2;
    char key;

menu:
    system("cls");
    printf("\t������ ������ ���� �۸��̿���\n");
    printf("---------------------------------------------\n\n\n\n");

    for(int i = 0;;){
        gotoxy(10,10);
        color(Set[0]);
        printf("1. ����");

        gotoxy(10,11);
        color(Set[1]);
        printf("2. ����");

        gotoxy(10,12);
        color(Set[2]);
        printf("3. ����");

        key = _getch();

        if(key == 72 && (counter >= 2 && counter <= 3)){ // 72 ����Ű ��Ű
            counter --;
        }
        if(key == 80 && (counter >= 1 && counter <= 2)){ // 80 ����Ű �Ʒ� Ű
            counter ++;
        }
        if(key == '\r'){ // ��ü ��ȯ = ���� Ű
            if(counter == 1){
                system("cls");
                gotoxy(45, 2);
                printf("��ũ��Ʈ�� �ҷ����� �ֽ��ϴ�.");
                Sleep(2000); // ����
                system("cls");
                part1();
                break;
            }

            if(counter == 2) printf("\t���� ����� ���� �����Ǿ� ���� �ʽ��ϴ�.");

            if(counter == 3) exit(EXIT_SUCCESS);
        }
        Set[0] = 7;
        Set[1] = 7;
        Set[2] = 7;
        if(counter == 1) Set[0] = 12;

        if(counter == 2) Set[1] = 12;
        
        if(counter == 3) Set[2] = 12;
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