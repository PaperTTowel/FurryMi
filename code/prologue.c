#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

void prologue()
{ // ���ѷα� ��Ʈ �����:
    static char key;
    printf("\t���ѷα�\n================================================================================\n\n\n");
    Sleep(1500);
    PlaySound(TEXT(".\\audio\\[BGS]clock2.wav"), 0, SND_ASYNC | SND_LOOP); // BGS �ݺ����
    printf("����ϰ� ������ ����. ���� �̷��� �����ϰ� �ݺ����� �ϻ� ���� �־���.\n");
    key = getch(); // �ƹ� Ű�� �������� �������� �Ѿ��
    printf("\"��... ���� ������ �̷��� ������ �λ����� ��� �� ������?\"\n");
    key = getch();

    system("PAUSE");
}