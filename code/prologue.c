#include <stdio.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment (lib, "winmm.lib")

void prologue(){ // ���ѷα� ��Ʈ �����: 
    static char key;
    printf("\t���ѷα�\n================================================================================\n\n\n");
    PlaySound(TEXT("D:\\KimYongHa\\���α׷��� ������\\audio\\[BGS]clock2.wav"), 0, SND_ASYNC | SND_LOOP);
    printf("����ϰ� ������ ����. ���� �̷��� �����ϰ� �ݺ����� �ϻ� ���� �־���.\n");
    key = getch();
    printf("\"��... ���� ������ �̷��� ������ �λ����� ��� �� ������?\"\n");
    key = getch();

    
    system("PAUSE");
}