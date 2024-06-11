#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
//#include <digitalv.h>

void chapter1(HINSTANCE hInstance,char name[10]){ // é�� 1 �����: 30507 �����
    static char key;
    printf("\té��1\n================================================================================\n\n\n");
    Sleep(1500);
    PlaySound(TEXT(".\\audio\\[BGM]��몤BGM.wav"), 0, SND_ASYNC | SND_LOOP);
    gotoxy(1, 4), printf("������ �� ������ ���� ���̰� ��������.\n");
    key = getch();
    gotoxy(1, 4), printf("������ �б��� �� �غ� �ؾ��Ѵ�.         \n");
    key = getch();
    gotoxy(1, 4), printf("���� �Ͼ�� ���� ħ�뿡�� �� ���� ������ �����״�.\n");
    key = getch();
    gotoxy(1, 4), printf("�׸��� ������ ȭ��Ƿ� ���ߴ�.                        \n");
    key = getch();
    gotoxy(1, 4), printf("ȭ��Ƿ� ���� ���� ������ ��ġ�� �ϰ� �ƹ��͵� ���� �ξ���\n �׳��� ���忡 �׾Ƴ��� ������ ��л��� �ϳ� ���� �Կ� ���� �б��� ���ߴ�.\n");
    key = getch();

    HBITMAP hBMP = (HBITMAP)LoadImage(NULL, ".\\texture\\golmok1.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    HWND imgControl = CreateWindow("STATIC", "�б� ����", WS_VISIBLE | SS_BITMAP, 1000, 100, 800, 600, NULL, NULL, hInstance, NULL);
    SendMessage(imgControl, STM_SETIMAGE, IMAGE_BITMAP, hBMP);

    gotoxy(1, 4), printf("\"����... ����...\"                                                   \n                                                                                  \n");
    key = getch();
    gotoxy(1, 4), printf("�ʿ����̾ �׷��� ���� ��ħ�ε��� �ұ��ϰ� ���ϰ� ���� ������.\n");
    key = getch();
    gotoxy(1, 4), printf("���� ������ �� �þ��� ������ó�� �þ����� õõ�� �ɾ��             \n ���� ����Ű�� ����� ����� ���� �б��� ������ ���� Ʈ�� ���� ���� ���𰡿� �ε��ļ� �Ѿ�����.\n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"��!\"                                                               \n                                                                                                      \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("öǪ��\n");
    key = getch();
    gotoxy(1, 4), printf("���� ���� ���������� �Ϳ� �ε�ģ �����̾���.\n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"��! ������? �̾�...\"                           \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("�ͼ��� ��Ҹ�����.                                    \n");
    key = getch();
    gotoxy(1, 4), printf("���� �ͼ��� ��Ҹ��� ���� �÷��� ���Ҵ�.\n");
    key = getch();
    gotoxy(1, 4), printf("\"����Ű?\"                                   \n");
    key = getch();

    HBITMAP hib = (HBITMAP)LoadImage(NULL, ".\\texture\\hibiki.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    HWND imgControl_h = CreateWindow("STATIC", "����Ű", WS_VISIBLE | SS_BITMAP, 795, 10, 200, 200, NULL, NULL, hInstance, NULL);
    SendMessage(imgControl_h, STM_SETIMAGE, IMAGE_BITMAP, hib);

    gotoxy(1, 4), printf("����Ű����. \'��... ���⿡ �ִ� ����?\'\n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"�ȳ�~, �ٵ� ������?\"                   \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("����Ű�� �����ϴ� ǥ������ ������.\n");
    key = getch();
    gotoxy(1, 4), printf("\"��. ������. �ٵ� �� ���⿡ �� �־����ž�?\"\n");
    key = getch();
    gotoxy(1, 4), printf("���� ������ ���� �и� �Ͼ��.                       \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"%s�� ��޸��� �־���\"              \n", name);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("\"����?\"                           \n");
    key = getch();
    gotoxy(1, 4), printf("���� ���� �߸����� �� �˾Ҵ�.\n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"��! ���� �����\"         \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("���� ���� ����ڴ� ����Ű���� ���� ��������.\n");
    key = getch();
    gotoxy(1, 4), printf("\"�� ���� ��ٸ��ž�?\"                           \n");
    key = getch();
    gotoxy(1, 4), printf("��¥ ������ �ñ����̾���.\n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"�׾� ���� ���� ��ġ�ϱ� ���̰��� ���� �� ���Ƽ�~!\"\n");
    key = getch();
    gotoxy(1, 4), printf("\"�׸��� ���� ���� �б��� ���п��� �� �� �ż� ���� ��� ģ���� ����...\"\n");
    key = getch();
    gotoxy(1, 4), printf("\"�׷��� ���� ��ϸ� ���� �� ���Ƽ�...\"                                                \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    gotoxy(1, 4), printf("���� �𸣰� ����Ű�� �β������ϴ� �� ���Ҵ�.\n");
    key = getch();
    gotoxy(1, 4), printf("\"�׷�����. ���� ������\"                         \n");
    key = getch();
    DestroyWindow(imgControl);
    gotoxy(1, 4), printf("�̷��� �츮�� �̷����� �̾߱⸦ �ϸ鼭 �б��� �����Ͽ���.\n");
    key = getch();
    DestroyWindow(imgControl_h);
    gotoxy(1, 4), printf("����Ű�� ���� ���� �޶� ������ ������ ����.                 \n");
    key = getch();
    gotoxy(1, 4), printf("�ò������� ���ǿ��� �е��� �ֳ����� �־���.       \n");
    key = getch();
    gotoxy(1, 4), printf("\"���� ���� ������� ����޶�� �Ҹ��� ������� �鸮�±�.\"\n");
    key = getch();
    gotoxy(1, 4), printf("ȯ�⸦ �Ϸ��� ���� ��� �������� ��̰� ������ �ʾҴ�.          \n");
    key = getch();
    gotoxy(1, 4), printf("��û�� �а� �Բ� ������ 2���� ������ ������.                  \n");
    key = getch();
    gotoxy(1, 4), printf("���� �ݿ��� ���� �������� ���ߴ�.             \n");
    key = getch();

    HBITMAP hBMP1 = (HBITMAP)LoadImage(NULL, ".\\texture\\schoolRooftop.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    HWND imgControl1 = CreateWindow("STATIC", "�б� ����", WS_VISIBLE | SS_BITMAP, 1000, 100, 800, 600, NULL, NULL, hInstance, NULL);
    SendMessage(imgControl1, STM_SETIMAGE, IMAGE_BITMAP, hBMP1);

    gotoxy(1, 4), printf("��� �ݿ��� �ɾ� ������ ���� �� �⵵�� ���� �� ���ұ� �����̴�.\n");
    key = getch();
    gotoxy(1, 4), printf("�ƹ��� ���� ������� �ѹ� �ɸ��� ���� �� ���Ҵ�.                      \n");
    key = getch();
    gotoxy(1, 4), printf("\"��... ��Ű���\"                                \n");
    key = getch();
    gotoxy(1, 4), printf("�Ѽ��� ������ �ִ� �� ���� �� ���� �ǵ帮�� �� �ҷ���.\n");
    key = getch();

    HBITMAP hib2 = (HBITMAP)LoadImage(NULL, ".\\texture\\hibiki.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    HWND imgControl_h1 = CreateWindow("STATIC", "����Ű", WS_VISIBLE | SS_BITMAP, 795, 10, 200, 200, NULL, NULL, hInstance, NULL);
    SendMessage(imgControl_h1, STM_SETIMAGE, IMAGE_BITMAP, hib2);

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"�ȳ�~?\"                                                \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("����Ű����.\n");
    key = getch();
    gotoxy(1, 4), printf("\"�ȳ�.\"         \n");
    key = getch();
    gotoxy(1, 4), printf("���� �ڷ� ���� �λ��ߴ�.\n");
    key = getch();
    gotoxy(1, 4), printf("�ٸ� �̹����� ����Ű ���� �������� �� �־���.\n");
    key = getch();
    gotoxy(1, 4), printf("�ڼ��� ���� ������ �����̾���.                            \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    gotoxy(1, 4), printf("\"��~��~\"                                    \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();

    HBITMAP kas = (HBITMAP)LoadImage(NULL, ".\\texture\\kasumi.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    HWND imgControl_k = CreateWindow("STATIC", "ī����", WS_VISIBLE | SS_BITMAP, 590, 10, 200, 200, NULL, NULL, hInstance, NULL);
    SendMessage(imgControl_k, STM_SETIMAGE, IMAGE_BITMAP, kas);

    gotoxy(1, 4), printf("�ݺ� �а� ���޶��� ���� ���� �λ����� ������ ���� ���л��� ����Ű �ڿ��� �����鼭 �λ��Ͽ���.\n");
    key = getch();
    gotoxy(1, 4), printf("\"�ȳ�.\"                                                                                             \n");
    key = getch();
    gotoxy(1, 4), printf("���� �λ��Ͽ���.\n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    gotoxy(1, 4), printf("\"���� Ÿġ�ٳ� ī����, ī���̶�� �ҷ���~.\"\n");
    key = getch();
    gotoxy(1, 4), printf("\"�׳����� �ʰ� ����Ű�� ���� ��� ����ģ����?\"      \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();

    int choice1;
    gotoxy(0, 12), printf("����������������������������������������������������������������������������������������\n"), Sleep(20);
    printf("��"), gotoxy(43, 13), printf("��"), Sleep(20);
    gotoxy(8, 13), printf("a. ? || b. (�����Ѵ�)\n");
    printf("����������������������������������������������������������������������������������������\n"), Sleep(20);
    printf("��"), gotoxy(43, 15), printf("��\n"), Sleep(20);
    printf("����������������������������������������������������������������������������������������\n"), Sleep(20);
choice01:
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(3, 15), printf("> "), scanf("%c", &choice1);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    switch(choice1){
    case 'a':
        gotoxy(0, 12), printf("                                             \n"), Sleep(20);
        gotoxy(0, 13), printf("                                             \n"), Sleep(20);
        gotoxy(0, 14), printf("                                             \n"), Sleep(20);
        gotoxy(0, 15), printf("                                             \n"), Sleep(20);
        gotoxy(0, 16), printf("                                             \n"), Sleep(20);
        gotoxy(1, 4), printf("\"?\"                                                     \n");
        key = getch();
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
        gotoxy(1, 4), printf("\"?\"     \n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        key = getch();
        gotoxy(1, 4), printf("���̹� ���� ��� �� ��������?\n");
        key = getch();
        gotoxy(1, 4), printf("���� ����Ű �Ѵ� �Ӹ��� ��������.\n");
        key = getch();
        goto return1;
    case 'b':
        gotoxy(0, 12), printf("                                             \n"), Sleep(20);
        gotoxy(0, 13), printf("                                             \n"), Sleep(20);
        gotoxy(0, 14), printf("                                             \n"), Sleep(20);
        gotoxy(0, 15), printf("                                             \n"), Sleep(20);
        gotoxy(0, 16), printf("                                             \n"), Sleep(20);
        gotoxy(1, 4), printf("\"�ƴѵ�?\"                                                         \n");
        key = getch();
        gotoxy(1, 4), printf("���ڱ� �׷� ���� �����ϱ� ���� ����Ű �Ѵ� �Ӹ��� ��������.\n");
        key = getch();
        goto return1;
    default: // �߸��� �Է� = choice ���� a, b�� �ƴ� ��� �ٽ� choice1���� �̵��Ͽ� �ݺ�
        gotoxy(5, 15), printf("                                 ");
        goto choice01;
    }

return1:
    gotoxy(1, 4), printf("����Ű�� ������ ������ ���� ������ ������ �Ͽ���.                       \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"��...�ƴϾƴ� ��...���Ҹ���!\"                      \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("�� ���� ����Ű�� �ϴ� ���� ��� ���� ���¿��� �������Դ�.\n");
    key = getch();
    gotoxy(1, 4), printf("\"��...�ƴ� �׳� ģ�����̾�.\"                                \n");
    key = getch();
    gotoxy(1, 4), printf("�ƹ��� ���� �� ī���� �������� �츮�� ���հ����� ���̴� �����̾���.\n");
    key = getch();
    gotoxy(1, 4), printf("�ٽø��� �峭ġ�� �� ���� ���հ��̶� �Ҹ��̴�.                        \n");
    key = getch();
    gotoxy(1, 4), printf("\"ũ��... �ƹ�ư �� %s, %s�� �ҷ���. �ߺ�Ź��.\n", name, name);
    key = getch();
    gotoxy(1, 4), printf("\"�ʴ� ����Ű�� ģ����?\"                                                             \n");
    key = getch();
    gotoxy(1, 4), printf("���� ���� �̾߱��� ȭ�縦 �������� �Ȱ����� ���.\n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    gotoxy(1, 4), printf("\"��... ����.. ��̾���~~\"                           \n");
    key = getch();
    gotoxy(1, 4), printf("\"�� �� ����Ű�� �̼� ģ���� ������ٱ淹 ��ģ���� �˾Ҵ���~~\"\n");
    key = getch();
    gotoxy(1, 4), printf("\"�׷��ٸ� ���� �������� �Ǵ°ų�? �׷� �� �~?\"                       \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("\"...?\"                                              \n");
    key = getch();
    gotoxy(1, 4), printf("��������.     \n");
    key = getch();
    gotoxy(1, 4), printf("\"..........?!?!?!?!??\"\n");
    key = getch();
    gotoxy(1, 4), printf("�ƴ� ��ģ, �̻����� ���� �����ϴ�.\n");
    key = getch();
    gotoxy(1, 4), printf("����Ű�� �� �Ѵ� ������ ���� ���� �����̾���.\n");
    key = getch();
    gotoxy(1, 4), printf("Ư�� ����Ű��.                                    \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    gotoxy(1, 4), printf("\"�峭�̾�~~. �ʳ� ���� �����wwwwww\"        \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("��ģ ī������ ���� ¼�� ������ ���� �ֵѸ��� �츮�� 3���� ���� ���� �︲�� ���ÿ� ���߾���.\n");
    key = getch();
    PlaySound(TEXT(".\\audio\\[SE]schoolBell.wav"), 0, SND_ASYNC);
    gotoxy(1, 4), printf("������                                                                                              \n");
    key = getch();
    gotoxy(1, 4), printf("\"��. ���� �����Ѵ�. �츮 ���� ���߰ڴ�.\"\n");
    key = getch();
    gotoxy(1, 4), printf("���� �и��� ��Ż�� ���Ҹ��� �������ν� ���� �� �־���.\n");
    key = getch();
    gotoxy(1, 4), printf("�� ���� ���� ����Ű�� ������ ���ȴ��� ���� �ϴ� ���̾���.\n");
    key = getch();
    PlaySound(TEXT(".\\audio\\[BGM]��몤BGM.wav"), 0, SND_ASYNC | SND_LOOP);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    gotoxy(1, 4), printf("\"�ƹ�ư �� �������ڱ�~\"                                         \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("ī���̴� �峭���� ���ܼ� �ų��� ���� ���ߴ�.\n");
    key = getch();
    DestroyWindow(imgControl1);
    DestroyWindow(imgControl_h1);
    DestroyWindow(imgControl_k);
    gotoxy(1, 4), printf("�׷��� �ؾ��� �� ���� �ٽ� ���� ���ƴٴϴ� ������ ���ƿԴ�.\n");
    key = getch();
    gotoxy(1, 4), printf("�� ���߿� � ������ ������Ҵ� â���� �ݾҴ�.                    \n");
    key = getch();
    gotoxy(1, 4), printf("��ģ ���� �и��ϴ�. ���� �ٷ� �޷��� â���� ������ȴ�.          \n");
    key = getch();
    gotoxy(1, 4), printf("\"��.... ������ �� �� �� ����...\"                           \n");
    key = getch();
    gotoxy(1, 4), printf("�� �� ���� ���� �ż��� ����� ���鼭 3, 4���ø� ���´�.          \n");
    key = getch();
    gotoxy(1, 4), printf("\"��. ���� ���� ������..? ���̳� ������?\"                     \n");
    key = getch();
    gotoxy(1, 4), printf("����� ���ɽð��� �ٰ��Դ�.                   \n");
    key = getch();
    gotoxy(1, 4), printf("�б����� �� ������ ü���� ���� ������ ���� ���� ����ʹ�.     \n");
    key = getch();
    gotoxy(1, 4), printf("������ �������� ������ �����ϸ� ���ɽð����� ��ٸ��� �־���.       \n");
    key = getch();

    PlaySound(TEXT(".\\audio\\[SE]schoolBell.wav"), 0, SND_ASYNC);
    gotoxy(1, 4), printf("��~��~��~��~                                                       \n");
    key = getch();

    gotoxy(1, 4), printf("���ɽð� ���̴�.            \n");
    key = getch();
    gotoxy(1, 4), printf("���� å�� ���� �����ϰ� ì�ܿ� ������ ì�� �������� �ö󰬴�.        \n");
    key = getch();
    gotoxy(1, 4), printf("�� ������ �ŷ� ���̴�. �׸��� �б� ���Ǳ⿡�� ���� �̿� �����.          \n");
    key = getch();
    gotoxy(1, 4), printf("���� ��ġ�� �� ���̴� ���� �ִ� ��ġ ���� �ɾƼ� ���� ��ġ�� �����ϸ鼭 ���� ��� �Ա� �����ߴ�.\n");
    key = getch();
    gotoxy(1, 4), printf("�ָ��� ���� �ƴ� �����̼� ���� ���ó�� ���� ���̴�.                                                    \n");
    key = getch();
    gotoxy(1, 4), printf("���� ��ġ�� �ޱ��� �ɾƼ� ȥ�� ���� �԰� �ִ� ���.                    \n");
    key = getch();

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    gotoxy(1, 4), printf("\"�ȶ�?\"                                          \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    gotoxy(1, 4), printf("�������� �� �� �ڿ��� �� �ҷ���.                   \n");
    key = getch();
    gotoxy(1, 4), printf("�� �θ� ����� �����⿡ ���� ��Ȳ�ؼ� �ڸ� ���ƺ��� �ߴ�.    \n");
    key = getch();

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 20);
    gotoxy(1, 4), printf("��");
    for(short i = 2; i <= 7; i++){ // ���!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
        gotoxy(i, 4), printf("!"), Sleep(50);
    }
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    gotoxy(1, 4), printf("���𰡰� �ڸ� ���ƺ����� �� �Ӹ��� ��Ÿ�ߴ�.                 \n");
    key = getch();
    gotoxy(1, 4), printf("���� ������ ���ٶ������� �� ���� ������ ����� �Ȱ����� ����.          \n");
    key = getch();

    for(short i = 1; i <= 7; i++){ // ���!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
        gotoxy(i, 4), printf("?"), printf("!"), Sleep(50);
    }
    key = getch();

    gotoxy(1, 4), printf("���� ���� ��Ȳ���ϸ鼭 �ڸ� ���ƺô�.                           \n");
    key = getch();
    gotoxy(1, 4), printf("�װ����� ����Ű�� ī���̰� ���־���.                    \n");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    gotoxy(1, 4), printf("\"�������� ���� �� ���ó�� �ɾ� ���� �԰� �ִ� �ž�?\"           \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    gotoxy(1, 4), printf("ī������ �峭 ���� ���� ����� �� ������ ����� ������.               \n");
    key = getch();
    gotoxy(1, 4), printf("�и� �� �Ӹ��� ���� �͵� �̳��� ���̴�.                          \n");
    key = getch();

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"����.. ī���� �� ������ �ϴ°ž�!\"          \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    gotoxy(1, 4), printf("����Ű�� ī���̿��� ���ߴ�.                         \n");
    key = getch();
    gotoxy(1, 4), printf("����Ű�� �󱼿��� ��Ȳ�ߴٴ� ǥ���� �������� �����־���.             \n");
    key = getch();

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"������?\"                                               \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    gotoxy(1, 4), printf("����Ű�� ������ �����ϴ� ǥ���� �����鼭 ���ߴ�.             \n");
    key = getch();
    gotoxy(1, 4), printf("\"�� ������. �װͺ��� ���� �� ���µ�...?\"                     \n");
    key = getch();
    gotoxy(1, 4), printf("�������� �Ӹ��� ���� �ͺ��� ī������ ���� 100��� �� ���ʹ� �� ����.         \n");
    key = getch();

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    gotoxy(1, 4), printf("\"��������������������������\"                                               \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    
    gotoxy(1, 4), printf("ī���̴� �峭�� ��ġ�� ǥ������ ���� �־���.                   \n");
    key = getch();
    gotoxy(1, 4), printf("\"�׷���, �� �� �ž�?\"                                  \n");
    key = getch();
    gotoxy(1, 4), printf("���� ����ô�.                                 \n");
    key = getch();

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    gotoxy(1, 4), printf("\"�� ����Ű�� ����Ծ�!\"                         \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    gotoxy(1, 4), printf("ī���̰� ���ߴ�.                       \n");
    key = getch();
    gotoxy(1, 4), printf("\"�׷� ����Ű�� �� �°ž�?\"               \n");
    key = getch();

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"��...����... ���� ����������...\"                    \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    gotoxy(1, 4), printf("����Ű�� ���ݾ��ϸ� ���ߴ�.                      \n");
    key = getch();
    gotoxy(0, 12), printf("��������������������������������������������������������������������������������������������������������������������\n"), Sleep(20);
    printf("��"), gotoxy(43, 13), printf("��"), Sleep(20);
    gotoxy(8, 13), printf("a.�׷�! ���� ����. || b.�̾� �� ������� ȥ�� �Ծ�� �ڴ°�?\n");
    printf("��������������������������������������������������������������������������������������������������������������������\n"), Sleep(20);
    printf("��"), gotoxy(43, 15), printf("��\n"), Sleep(20);
    printf("��������������������������������������������������������������������������������������������������������������������\n"), Sleep(20);

    int choice2;
choice02:
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(3, 15), printf("> "), scanf("%c", &choice2);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    switch(choice2){ // ����ġ �� choice�� ������ Ȯ��
    case 'a': // �� ���ƺ��� = choice ���� a�� ���� ��� �Ʒ� �ڵ� ����
        gotoxy(0, 12), printf("                                             \n"), Sleep(20);
        gotoxy(0, 13), printf("                                             \n"), Sleep(20);
        gotoxy(0, 14), printf("                                             \n"), Sleep(20);
        gotoxy(0, 15), printf("                                             \n"), Sleep(20);
        gotoxy(0, 16), printf("                                             \n"), Sleep(20);
        gotoxy(1, 17), printf("����Ű�� ī���̴� �� ���� �ɾ� ���ö��� ���� �غ� �ߴ�.                                   \n");
        key = getch();
        goto return2; // return1 �� �̵�
    case 'b': // �����ϱ� = choice ���� b�� ���� ��� �Ʒ� �ڵ� ����
        gotoxy(0, 12), printf("                                             \n"), Sleep(20);
        gotoxy(0, 13), printf("                                             \n"), Sleep(20);
        gotoxy(0, 14), printf("                                             \n"), Sleep(20);
        gotoxy(0, 15), printf("                                             \n"), Sleep(20);
        gotoxy(0, 16), printf("                                             \n"), Sleep(20);
        gotoxy(0, 17), printf("������ �ҷ��� �Ͽ����� �̹� ī���̴� �� ���� �ɾƼ� ���ö��� ���� �غ� �ϰ� �־���.                                             \n"), Sleep(20);
        key = getch();
        goto return2;
    default: // �߸��� �Է� = choice ���� a, b�� �ƴ� ��� �ٽ� choice1���� �̵��Ͽ� �ݺ�
        gotoxy(5, 15), printf("                                 ");
        goto choice02;
    }

return2:
    gotoxy(1, 4), printf("��¾�� ������ ī���̰� űű��� �Ҹ��� ��ȴ�.                                                         \n");
    key = getch();
    gotoxy(1, 4), printf("ī���̿� ����Ű�� ���ö� �� �Ѵ� ������ ������ �վ��� ������ ���ö����̴�.     \n");
    key = getch();

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    gotoxy(1, 4), printf("\"��? ��Ű�� �ŷл��̶� ������ �帵ũ�� �����ΰž�?\"                               \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    gotoxy(1, 4), printf("ī���̰� �� ���� ������ �帵ũ�� ���鼭 ������.                           \n");
    key = getch();
    gotoxy(1, 4),printf("\"��. ���� ��ħ���� ���ö��� ����� ���� �������� ���� ���� �ʾƼ�.\"          \n");
    key = getch();
    gotoxy(1, 4), printf("������ ��ħ ���� �Ͼ�� ���ö��� ����� ���� �ʹ� �����.                   \n");
    key = getch();
    gotoxy(1, 4), printf("�� �� �õ��ߴٰ� �ʹ� ���� �����ϰ� �� ������ ������ ����� �ִ�.                \n");
    key = getch();

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    gotoxy(1, 4), printf("\"����~ �׷� �� ���ö� ���� ���� �ٰ�. ��!\"                                \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    gotoxy(1, 4), printf("ī���̴� �ڱ� ���ö��� ������ �� �� ��� �� �� ���� �÷����Ҵ�.         \n");
    key = getch();

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"��! ��.. �׷� ���� ���� �帱�Կ�!\"                                      \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    gotoxy(1, 4), printf("����Ű�� ī������ ���� ��� ���ö����� ���� �� ���� ��� �� �� ���� �÷�����.        \n");
    key = getch();
    gotoxy(1, 4), printf("�׷��� �츮�� ���� ��ġ�� �ɾƼ� ������ �Ծ���.                                       \n");
    key = getch();
    gotoxy(1, 4), printf("��û ���־���.                                                                      \n");
    key = getch();
    gotoxy(1, 4),printf("�ٸ�                                \n");
    key = getch();
    gotoxy(1, 4), printf("���� �������� ������ ���� ���Դ�.             \n");
    key = getch();
    gotoxy(1, 4), pirntf("��~ ���� ������ ���� �����̾�.                \n");
    key = getch();
    gotoxy(1, 4), printf("���� ���� ���� ������ �� ���� �츮�� ���� ������ ���� ������ ������ ���ư���.         \n");
    key = getch();
    gotoxy(1, 4), printf("�ݿ� ���ƿ��� ���� �е��� �� �⵵�� ���� ���� �������� �ݸ��� ������ ����û���Ⱑ �ʿ��� �� ���ٰ� �����ߴ�.");
    key = getch();

}