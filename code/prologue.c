#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
void prologue(HINSTANCE hInstance,char name[10])
{ // 1/3 ���ѷα� ��Ʈ �����: 30507 �����
    static char key; // ���������� �� ��� ���� �������� ���� ���ɼ��� �־� �������� ������
    printf("\t���ѷα�\n================================================================================\n\n\n");
    Sleep(1500);
    PlaySound(TEXT(".\\audio\\[BGS]clock2.wav"), 0, SND_ASYNC | SND_LOOP); // [BGS] �ݺ����
    printf("����ϰ� ������ ����. ���� �̷��� �����ϰ� �ݺ����� �ϻ� ���� �־���.\n");
    key = getch(); // �ƹ� Ű�� �������� �������� �Ѿ���� �ϴ� ����
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
    for(short i = 2; i <= 42; i++){ // �ð��� �ε�â ����
        gotoxy(i, 15), printf("=\n"), Sleep(30);
    }
    system("cls");
    system("MODE 98,20");

    printf("\t���ѷα�\n================================================================================\n\n\n");
    Sleep(1500);
    PlaySound(TEXT(".\\audio\\[SE]Earth1.wav"), 0, SND_ASYNC);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 20);
    gotoxy(1, 4), printf("����");
    for(short i = 4; i <= 64; i++){ // ���!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
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

    HBITMAP hBMP = (HBITMAP)LoadImage(NULL, ".\\texture\\school2.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    HWND imgControl = CreateWindow("STATIC", "����", WS_VISIBLE | SS_BITMAP, 1000, 100, 800, 600, NULL, NULL, hInstance, NULL);
    SendMessage(imgControl, STM_SETIMAGE, IMAGE_BITMAP, hBMP);

    gotoxy(1, 4), printf("�׷��� �б�����. �ٸ�, ����� ���̻��̷� ������ ���� ���̿���.\n");
    key = getch();
    gotoxy(1, 4), printf("\"�ƴ� ����ü �����̾�\"                                          \n");
    key = getch();

    DestroyWindow(imgControl);
    HBITMAP hBMP1 = (HBITMAP)LoadImage(NULL, ".\\texture\\schoolRooftop.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    HWND imgControl1 = CreateWindow("STATIC", "�б� ����", WS_VISIBLE | SS_BITMAP, 1000, 100, 800, 600, NULL, NULL, hInstance, NULL);
    SendMessage(imgControl1, STM_SETIMAGE, IMAGE_BITMAP, hBMP1);

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
    switch(choice){ // ����ġ �� choice�� ������ Ȯ��
    case 'a': // �� ���ƺ��� = choice ���� a�� ���� ��� �Ʒ� �ڵ� ����
        gotoxy(0, 12), printf("                                             \n"), Sleep(20);
        gotoxy(0, 13), printf("                                             \n"), Sleep(20);
        gotoxy(0, 14), printf("                                             \n"), Sleep(20);
        gotoxy(0, 15), printf("                                             \n"), Sleep(20);
        gotoxy(0, 16), printf("                                             \n"), Sleep(20);
        gotoxy(1, 4), printf("���� ������ ������ �ڸ� ���ƺ��Ҵ�.                                   \n");
        key = getch();
        gotoxy(1, 4), printf("�� �ڿ��� ����� ������ �־���.       \n");
        key = getch();
        goto return1; // return1 �� �̵�
    case 'b': // �����ϱ� = choice ���� b�� ���� ��� �Ʒ� �ڵ� ����
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
    default: // �߸��� �Է� = choice ���� a, b�� �ƴ� ��� �ٽ� choice1���� �̵��Ͽ� �ݺ�
        gotoxy(5, 15), printf("                                 ");
        goto choice1;
    }
    system("PAUSE");

return1:
    gotoxy(1, 4), printf("\"��..��..! ����\"                              \n");
    key = getch();
    DestroyWindow(imgControl1);
    gotoxy(1, 4), printf("���� ���� �λ縦 �ϰ� ���Ƿ� �پ� ����.\n");
    key = getch();
    gotoxy(1, 4), printf("�� �Ȱ��� ��� ����� ������ �Ǿ���� �͸� ����... �� �ڸ��� �Ȱ��� ��ġ�� �־���.\n");
    key = getch();
    gotoxy(1, 4), printf("�ٸ� �� ���� �𸣴� ���̴�.                                                         \n");
    key =  getch();
    gotoxy(1, 4), printf("�Ӹ��� ���� ���·� �б� �ð��� ������ ��������. �ſ� ������...\n");
    key = getch();
    gotoxy(1, 4), printf("�׷��� �ð��� �귯 �ϱ� �ð��� �Ǿ��� ���� �ϱ� �غ� ��ġ�� �Ź����� ���� ���� �־���.  \n");
    key = getch();
    gotoxy(1, 4), printf("                                                                                        \n");
    PlaySound(TEXT(".\\audio\\[BGM]coffeeSugar��ߵ.wav"), 0, SND_ASYNC | SND_LOOP);
    // 2/3 ���ѷα� ��Ʈ �����: 30508 ������

    HBITMAP hBMP2 = (HBITMAP)LoadImage(NULL, ".\\texture\\school3.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    HWND imgControl2 = CreateWindow("STATIC", "�б� �ĵ� �Ź���", WS_VISIBLE | SS_BITMAP, 1000, 100, 800, 600, NULL, NULL, hInstance, NULL);
    SendMessage(imgControl2, STM_SETIMAGE, IMAGE_BITMAP, hBMP2);

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"����\"");
    for(short i = 4; i <= 64; i++){
        gotoxy(i, 4), printf("!"), Sleep(30);
    }
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    gotoxy(1, 4), printf("���� ū �Ҹ��� �θ��� �Ҹ��� ������� �� �θ��� �Ҹ��� �ƴ� ���� ���߱⿡ ���� �����ϰ� �Ź����� ���� ���� �־���.\n");
    key = getch();
    gotoxy(1, 4), printf("�Ź��忡 �ٴٸ� �� ���� �������� ������ ��������� �� ���̴�.                                                         \n");
    key = getch();
    gotoxy(1, 4), printf("                                                                                        \n");
    for(short i = 1; i <= 5; i++){
        gotoxy(i, 4), printf("."), Sleep(350);
    }
    gotoxy(6, 4), printf("?\n");
    key = getch();
    gotoxy(1, 4), printf("�и� ������ ���迡�� ���� �ƴ� ����� ���� ���̴�.\n");
    key = getch();
    gotoxy(1, 4), printf("���� �ٸ� ����� ���� ģ���� �����߰��� �ϸ� ���� ������ �� �ſ� �������.\n");
    key = getch();
    gotoxy(1, 4), printf("������ ��������� �� ����� �ٷ� ��ħ �б� ���󿡼� ������ ������ �����ϱ� �� �̶� ���� �˷��� �� ���л��̱� �����̴�.\n");
    key = getch();

    HBITMAP hib = (HBITMAP)LoadImage(NULL, ".\\texture\\hibiki.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    HWND imgControl_h = CreateWindow("STATIC", "����Ű", WS_VISIBLE | SS_BITMAP, 795, 10, 200, 200, NULL, NULL, hInstance, NULL);
    SendMessage(imgControl_h, STM_SETIMAGE, IMAGE_BITMAP, hib);

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"���� �� �����ϸ鼭 ���� �ž�?\"                                                                                             ");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    gotoxy(1, 4), printf("�� ���л��� ������ ��������� �� ü�� ������ ����ô�.\n");
    key = getch();
    DestroyWindow(imgControl2);

    gotoxy(1, 4), printf("\"�ʴ� �׶� �� �б� ���� �ð��̶�� �ߴ�....\"                \n");
    key = getch();
    gotoxy(1, 4), printf("���� �ſ� ��Ȳ�ؼ� ���� ���� ���ߴ�.                                      \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"��! ����ϰ� �ֳ�! �� ���̶�� ����Ű��!\"\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"�����ϰ� ����Ű�� �ҷ���. �� �̸���?\"                                      \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("\"��...%s��..\"                                           \n", name);
    key = getch();
    gotoxy(1, 4), printf("Ǫ���� ���� ȸ�� �Ӹ�ī���� ���������� ���̴� ���� �Ͱ� �Ӹ��� �޷��ִ� �ҳ࿴��.\n");
    key = getch();
    gotoxy(1, 4), printf("�ƹ��� ���� �ſ� �������� ����̾���.                                                               \n");
    key = getch();
    gotoxy(1, 4), printf("�ҽ��� ���μ��� ������ �Ǿ���.                                                     \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"��! %s��� �ϴ±��� �ߺ�Ź��! %s��� �θ��� �ɷ���?\"                 \n", name, name);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("\"��..��, �� ��Ź��..\"                                                                                                           \n");
    key = getch(); 
    gotoxy(1, 4), printf("�̷��� �λ縦 �ϰ� ���� �ٷ� ������ ���� ������ �� ����Ű��� ���ھ��̵� ���� ���� ������ ���ν�� �ſ� ������ �浿���� �����.\n");
    key = getch();
    gotoxy(1, 4), printf("���� ������ 1������ ������?                                                                                                                   \n");
    key = getch();
    gotoxy(1, 4), printf("����Ű�� ������ ���� �ɾ�Դ�.                \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"��ħ�� �� ���󿡼� �� ������ �־����ž�? ���� �� �־�?\"                                            \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("��ħ�� �ʹ� ���� ���� �־� ���� ��ȭ�Ǿ���� ���� ǥ���� �� �� ���Ҵ�.\n");
    key = getch();
    gotoxy(1, 4), printf("\"�ϴ��� �ʹ� ������ �����ϰ� �־���.\"                                           \n");
    key = getch();
    gotoxy(1, 4), printf("���� ���� �ѷ������.                                                                            \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"�׷�����. ���� ���� �� �ִ� �� �˾ҳ�. �ϱ� ���� ��ħ �ϴ��� ���ڱ� ����!\"\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("�� �̾߱⸦ �������� �̷����� �̾߱⸦ �����鼭 ������ ���ߴ�.                    \n");
    key = getch();
    gotoxy(1, 4), printf("�׷��� �� �̾߱⸦ �Ϲ� ���ϱ� ������ Ǯ���� �� ���Ҵ�.               \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"��! �� ���⼭ �������̾�. �ʴ� ���� ������?\"                                                                                         \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("��Ÿ��� ���� �� ���� �� ����Ű�� ������.                                      \n");
    key = getch();
    gotoxy(1, 4), printf("\"���� �������� ������.\"                                                     \n");
    key = getch();
    gotoxy(1, 4), printf("�� ��Ÿ��� �������� ������ ���� �ݴ����� �� ���Ҵ�.\n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"�׷�? �׷� ���̹���~~!, ���� �б����� ��!\"                                     \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("����Ű�� ������ �λ縦 �ϰ� �ڱ� ���� ���� ����.  \n");
    key = getch();
    gotoxy(1, 4), printf("\"��. ���� ��.\"                                                          \n");
    key = getch();
    DestroyWindow(imgControl_h);
    gotoxy(1, 4), printf("���� �λ縦 �� �� ������ ���ߴ�.\n");
    key = getch();
    gotoxy(1, 4), printf("������ ���� �� �߿��� �ΰ��� �� ���� ������ ������ ���� �־���.\n");
    key = getch();
    gotoxy(1, 4), printf("������ ������ �̼��迡 �� �����̿���. ���� ���� ������ ���� ���� �־���. �ƹ��� ���� ����� ������ �ڸ��� ������ ���� �� ���Ҵ�.\n");
    key = getch();
    gotoxy(1, 4), printf("�ƹ��� ���� ����� ������ �ڸ��� ������ ���� �� ���Ҵ�.                                                                               \n");
    key = getch();
    gotoxy(1, 4), printf("���� ȥ�� ��ұ⿡ ����� ��������, ���� �θ���̳� �ٸ� ����̶� ���� ������� �� �������� �� ����.                                                  \n");
    key = getch();
    gotoxy(1, 4), printf("���� ���� ���� �ǰ��� ���� ħ��� ���� �� �ῡ �����.                                                                          \n");
    key = getch();
}