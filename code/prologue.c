#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

void prologue()
{ // 프롤로그 파트 담당자:
    static char key;
    printf("\t프롤로그\n================================================================================\n\n\n");
    Sleep(1500);
    PlaySound(TEXT(".\\audio\\[BGS]clock2.wav"), 0, SND_ASYNC | SND_LOOP); // BGS 반복재생
    printf("답답하고 지루한 현실. 나는 이러한 지루하고 반복적인 일상에 지쳐 있었다.\n");
    key = getch(); // 아무 키를 눌렀을때 다음으로 넘어가짐
    printf("\"아... 나는 언제쯤 이러한 지루한 인생에서 벗어날 수 있을까?\"\n");
    key = getch();

    system("PAUSE");
}