#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
void prologue()
{ // 1/3 ���ѷα� ��Ʈ �����: 30507 �����
    static char key;
    char name;
    printf("����������������������������������������������������������������������������������������\n");
    printf("��"), gotoxy(43, 1), printf("��");
    gotoxy(14, 1), printf("����� �̸���?\n");
    printf("����������������������������������������������������������������������������������������\n");
    printf("��"), gotoxy(43, 3), printf("��\n");
    printf("����������������������������������������������������������������������������������������\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(3, 3), printf("> ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    scanf("%f", &name);
    system("cls");
    Sleep(1500);
    printf("\t���ѷα�\n================================================================================\n\n\n");
    Sleep(1500);
    PlaySound(TEXT(".\\audio\\[BGS]clock2.wav"), 0, SND_ASYNC | SND_LOOP); // BGS �ݺ����
    printf("����ϰ� ������ ����. ���� �̷��� �����ϰ� �ݺ����� �ϻ� ���� �־���.\n");
    key = getch(); // �ƹ� Ű�� �������� �������� �Ѿ��
    printf("\'��... ���� ������ �̷��� ������ �λ����� ��� �� ������?\'\n");
    key = getch();
    printf("�̷��� ������ �������� ���� �־������� �𸣰�����,\n�̷��� ������ �� �Ӹ��ӿ��� �ſ� �������� �־��ٴ� ���� Ȯ���ϴ�.\n");
    key = getch();
    printf("\"���� ������ �� ���� ���� �ٸ� �������� ����ʹ�...\"\n");
    key = getch();
    printf("���� �̷��� ȥ�� �߾�Ÿ��鼭 ���õ� �б��� �� �غ� �Ѵ�.\n\n\n");
    key = getch();
    
    printf("����������������������������������������������������������������������������������������\n"), Sleep(20);
    printf("��"), gotoxy(43, 13), printf("��"), Sleep(20);
    gotoxy(18, 13), printf("�̵���...\n");
    printf("����������������������������������������������������������������������������������������\n"), Sleep(20);
    printf("��"), gotoxy(43, 15), printf("��\n"), Sleep(20);
    gotoxy(2, 15), printf("-----------------------------------------\n");
    printf("����������������������������������������������������������������������������������������\n"), Sleep(20);
    PlaySound(TEXT(".\\audio\\[SE]Move.wav"), 0, SND_ASYNC);
    for(short i = 2; i <= 42; i++){
        gotoxy(i, 15), printf("=\n"), Sleep(30);
    }
    system("cls");
    system("MODE 98,20");

    printf("\t���ѷα�\n================================================================================\n\n\n");
    Sleep(1500);
    PlaySound(TEXT(".\\audio\\[SE]Earth1.wav"), 0, SND_ASYNC);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 20);
    gotoxy(1, 4), printf("����");
    for(short i = 4; i <= 64; i++){
        gotoxy(i, 4), printf("!"), Sleep(30);
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("�Ƹ��� ������ �ò������� ���̴�.                                      \n");
    key = getch();
    gotoxy(1, 4), printf("��¿ �� ������. ���� �Ѱ������ ������� �Ⱦ���.\n");
    key = getch();
    gotoxy(1, 4), printf("�׷��� ���� ���Դ� ������ �ᰡ�� ���ӷ����� ȭ����� ���� �޷�����.\n");
    key = getch();
    gotoxy(1, 4), printf("�̰��� ���� '����'������ ������ ������̴�.                           \n");
    key = getch();
    PlaySound(TEXT(".\\audio\\[BGM]Hazy Woods.wav"), 0, SND_ASYNC | SND_LOOP);
    gotoxy(1, 4), printf("\"��... ��¥ �������� ������ �� �˾ҳ�...\"   \n");
    key = getch();
    gotoxy(1, 4), printf("���� �Ż縦 ġ���� �Ƚ��ϸ� ���Դ�.           \n");
    key = getch();
    gotoxy(1, 4), printf("������ ȭ��ǿ��� ���ͼ� ���� �� ���� ���� ������̾���.\n");
    key = getch();
    gotoxy(1, 4), printf("\'�ΰ�\'�̶�� ������ ����̳� ������ ���� \'��\'�� \'��\'�� ������ ���� ���� ���̴�.\n");
    key = getch();
    gotoxy(1, 4), printf("������, ���� �� ���� ������ �Ϳ� ���� ������ �ִ� \'���\'�̾���.                     \n");
    key = getch();
    gotoxy(1, 4), printf("\"....?\"                                                         \n");
    key = getch();
    gotoxy(1, 4), printf("\"....?!?!???\"\n");
    key = getch();
    gotoxy(1, 4), printf("���� �������� ������, ��ġ�縦 �� ���� �и��ϴ�.\n");
    key = getch();
    gotoxy(1, 4), printf("�׷��� �ʰ�� �� �տ� ���� ���ڰ� ������ ���� ����.\n");
    key = getch();
    gotoxy(1, 4), printf("���� �ٷ� ���� ������ ����. ���� ���ϰ� ��ƴ���.\n");
    key = getch();
    gotoxy(1, 4), printf("\"��!\"                                                   \n");
    key = getch();
    gotoxy(1, 4), printf("���� ���ϰ� ��ƴ��� ������ �翬�� ������ ���ʹ�.\n");
    key = getch();
    gotoxy(1, 4), printf("\"���̹� ���� �ƴϳ�...\"                             \n");
    key = getch();
    gotoxy(1, 4), printf("�и� ���� �ִ� ���� �б� ȭ����̴�.\n");
    key = getch();
    gotoxy(1, 4), printf("�ٸ� ���� �ƴ϶� ���̴�.              \n");
    key = getch();
    gotoxy(1, 4), printf("���� �ٷ� ȭ����� ���� �ֺ��� �ѷ� ���Ҵ�.\n");
    key = getch();
    gotoxy(1, 4), printf("�׷��� �б�����. �ٸ�, ����� ���̻��̷� ������ ���� ���̿���.\n");
    key = getch();
    gotoxy(1, 4), printf("\"�ƴ� ����ü �����̾�\"                                          \n");
    key = getch();
    gotoxy(1, 4), printf("��Ȳ�� ���� �б� �������� �ö� �츮 �б� �ֺ��� �ѷ����Ҵ�.\n");
    key = getch();
    gotoxy(1, 4), printf("�翬�ϰԵ� ���� ���� �ִ� ������ �ִ� �츮 ���׶� ���Ҵ�.         \n");
    key = getch();
    gotoxy(1, 4), printf("\"..........\"                                                \n");
    key = getch();
    gotoxy(1, 4), printf("�Ӹ��� �������� ���� ������ ���� �����鼭 ���׸� �ٶ󺸰� �־���.\n");
    key = getch();
    gotoxy(1, 4), printf("�׷��� ���ڱ� ���� �� �ҷ���.                                     \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"����! �� ������ ���� �����Ѵٰ�! ���� ������ ���ư��°� ������?\"\n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    gotoxy(0, 12), printf("����������������������������������������������������������������������������������������\n"), Sleep(20);
    printf("��"), gotoxy(43, 13), printf("��"), Sleep(20);
    gotoxy(8, 13), printf("a.�ڵ��ƺ��� || b.�����ϱ�\n");
    printf("����������������������������������������������������������������������������������������\n"), Sleep(20);
    printf("��"), gotoxy(43, 15), printf("��\n"), Sleep(20);
    printf("����������������������������������������������������������������������������������������\n"), Sleep(20);

    int choice;
choice1:
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(3, 15), printf("> "), scanf("%c", &choice);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    switch(choice){
    case 'a': // �� ���ƺ���
        gotoxy(0, 12), printf("                                             \n"), Sleep(20);
        gotoxy(0, 13), printf("                                             \n"), Sleep(20);
        gotoxy(0, 14), printf("                                             \n"), Sleep(20);
        gotoxy(0, 15), printf("                                             \n"), Sleep(20);
        gotoxy(0, 16), printf("                                             \n"), Sleep(20);
        gotoxy(1, 4), printf("���� ������ ������ �ڸ� ���ƺ��Ҵ�.                                   \n");
        key = getch();
        gotoxy(1, 4), printf("�� �ڿ��� ����� ������ �־���.       \n");
        key = getch();
        goto return1;
    case 'b': // �����ϱ�
        gotoxy(0, 12), printf("                                             \n"), Sleep(20);
        gotoxy(0, 13), printf("                                             \n"), Sleep(20);
        gotoxy(0, 14), printf("                                             \n"), Sleep(20);
        gotoxy(0, 15), printf("                                             \n"), Sleep(20);
        gotoxy(0, 16), printf("                                             \n"), Sleep(20);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
        gotoxy(1, 4), printf("\"�̺�, �� ���� ��� �ִ°ž�?\"                                      \n");
        key = getch();
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        gotoxy(1, 4), printf("�� ���տ� ����� ������ �� �þ߿��� ��Ÿ����.\n");
        key = getch();
        goto return1;
    default:
        gotoxy(5, 15), printf("                                 ");
        goto choice1;
    }
    system("PAUSE");

return1:
    gotoxy(1, 4), printf("\"��..��..! ����\"                              \n");
    key = getch();
    gotoxy(1, 4), printf("���� ���� �λ縦 �ϰ� ���Ƿ� �پ� ����.\n");
    key = getch();
    gotoxy(1, 4), printf("�� �Ȱ��� ��� ����� ������ �Ǿ���� �͸� ����... �� �ڸ��� �Ȱ��� ��ġ�� �־���.\n");
    key = getch();
    // 2/3 ���ѷα� ��Ʈ �����: 30503 ����
}