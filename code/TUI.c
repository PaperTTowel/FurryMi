#include <stdio.h>
#include <windows.h>
#include <conio.h>

void color(int color){ // �ܼ� ��
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoxy(int x, int y){ // �ؽ�Ʈ ��ǥ
    COORD c; // ����Ǿ� �ִ� x,y ��ǥ �����ϴ� ��
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c); // �ܼ��� �ڵ� ���� ��ǥ���� �޾Ƽ�, �ش� ��ġ�� Ŀ���� �̵���Ű�� ��
}

void disclaimer(){
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
}

void setting(){
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
}

void info(){
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
}

void help(){
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
}