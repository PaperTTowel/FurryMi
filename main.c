#include <stdio.h>
#include <stdlib.h> // system ¸í·É¾î »ç¿ë½Ã ÇÊ¿ä (¾ÈÇÒ°æ¿ì °æ°í¸Þ½ÃÁö Ãâ·ÂµÊ)
#include <windows.h>
#include <mmsystem.h> // ¿Àµð¿À Àç»ý
#pragma comment(lib, "winmm.lib")
#include <digitalv.h> // ¿Àµð¿À Àç»ý
#include <conio.h>
#include "code\prologue.c" // ÇÁ·Ñ·Î±×¸¦ ºÒ·¯¿È
#include "code\chapter1.c" // Á¦ 1ÀåÀ» ºÒ·¯¿È

void color(int color){ // ÄÜ¼Ö »ö
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoxy(int x, int y){            // ÅØ½ºÆ® ÁÂÇ¥
    COORD c; // ¼±¾ðµÇ¾î ÀÖ´Â x,y ÁÂÇ¥ ÀúÀåÇÏ´Â ³ð
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c); // ÄÜ¼ÖÀÇ ÇÚµé °ª°ú ÁÂÇ¥°ªÀ» ¹Þ¾Æ¼­, ÇØ´ç À§Ä¡·Î Ä¿¼­¸¦ ÀÌµ¿½ÃÅ°´Â ³ð
}

int main(){
    /* vscodeÀÇ ÀÎÄÚµù ¹æ½ÄÀ» ANSI 949 (EUC-KR)·Î ¸ÂÃçÁÖ½Ê½Ã¿À.
    Code Runner > Executor Map ¿¡¼­ chcp 65001 && ºÎºÐÀ» Áö¿öÁÖ½Ê½Ã¿À.
    ÀÌ ¼¼ÆÃÀº À©µµ¿ì10 CMD È¯°æ¿¡ ÀûÇÕÇÑ ÀÎÄÚµù ¹æ½ÄÀ¸·Î Á¦ÀÛµË´Ï´Ù. */
    system("MODE 98,30");
    printf("ÀÌ °ÔÀÓÀº ¾ÆÁ÷ Áß°£ÀúÀåÀ» Áö¿øÇÏÁö ¾Ê½À´Ï´Ù.\n");
    system("PAUSE");

    // ¸ÞÀÎ È­¸é Ãâ·Â
    int menu;
    int Set[] = {7, 7, 7, 7}; // ±âº» »ö»ó
    short counter = 2;
    char key;

    short windows = 0;

    mciSendString("open \".\\audio\\[BGM]ÙÊ×©ªììíªÎðàªÙ.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
    mciSendString("play mp3 repeat", NULL, 0, NULL);

menu:
    system("cls");

    // ±¸ ¹öÀü CMD¿¡ ¸ÂÃá Å¸ÀÌÆ²
    printf("¡à¡á¡á¡á¡á¡à¡á¡à¡à¡à¡á¡à¡á¡á¡á¡à¡à¡á¡á¡á¡à¡à¡á¡à¡à¡à¡á¡à¡à¡à¡á¡á¡á¡á¡á¡à¡à¡á¡á¡á¡à¡à¡á¡à¡á¡à¡à¡à¡à\n");
    printf("¡à¡á¡à¡à¡à¡à¡á¡à¡à¡à¡á¡à¡á¡à¡à¡á¡à¡á¡à¡à¡á¡à¡á¡à¡à¡à¡á¡à¡à¡à¡à¡à¡á¡à¡à¡à¡á¡à¡à¡à¡á¡à¡á¡à¡á¡à¡à¡à¡à\n");
    printf("¡à¡á¡á¡á¡à¡à¡á¡à¡à¡à¡á¡à¡á¡á¡á¡à¡à¡á¡á¡á¡à¡à¡à¡á¡à¡á¡à¡à¡à¡à¡à¡à¡á¡à¡à¡à¡á¡á¡á¡á¡á¡à¡á¡à¡á¡à¡à¡à¡à\n");
    printf("¡à¡á¡à¡à¡à¡à¡á¡à¡à¡à¡á¡à¡á¡à¡à¡á¡à¡á¡à¡à¡á¡à¡à¡à¡á¡à¡à¡à¡à¡à¡à¡à¡á¡à¡à¡à¡á¡à¡à¡à¡á¡à¡á¡à¡á¡à¡à¡à¡à\n");
    printf("¡à¡á¡à¡à¡à¡à¡à¡á¡á¡á¡à¡à¡á¡à¡à¡á¡à¡á¡à¡à¡á¡à¡à¡à¡á¡à¡à¡à¡à¡à¡à¡à¡á¡à¡à¡à¡á¡à¡à¡à¡á¡à¡á¡à¡á¡á¡á¡á¡à\n");

    /* ·¹°Å½Ã CMD¿¡¼­´Â °¡µ¶¼º ÀÌ½´°¡ ¹ß»ýÇÔ
    printf("¡á¡á¡á¡á¡á¡á¡á ¡á¡á    ¡á¡á ¡á¡á¡á¡á¡á¡á  ¡á¡á¡á¡á¡á¡á  ¡á¡á    ¡á¡á     ¡á¡á¡á¡á¡á¡á¡á¡á  ¡á¡á¡á¡á¡á  ¡á¡á ¡á¡á      \n");
    printf("¡á¡á      ¡á¡á    ¡á¡á ¡á¡á   ¡á¡á ¡á¡á   ¡á¡á  ¡á¡á  ¡á¡á         ¡á¡á    ¡á¡á   ¡á¡á ¡á¡á ¡á¡á      \n");
    printf("¡á¡á¡á¡á¡á   ¡á¡á    ¡á¡á ¡á¡á¡á¡á¡á¡á  ¡á¡á¡á¡á¡á¡á    ¡á¡á¡á¡á          ¡á¡á    ¡á¡á¡á¡á¡á¡á¡á ¡á¡á ¡á¡á      \n");
    printf("¡á¡á      ¡á¡á    ¡á¡á ¡á¡á   ¡á¡á ¡á¡á   ¡á¡á    ¡á¡á           ¡á¡á    ¡á¡á   ¡á¡á ¡á¡á ¡á¡á      \n");
    printf("¡á¡á       ¡á¡á¡á¡á¡á¡á  ¡á¡á   ¡á¡á ¡á¡á   ¡á¡á    ¡á¡á           ¡á¡á    ¡á¡á   ¡á¡á ¡á¡á ¡á¡á¡á¡á¡á¡á¡á \n");
    */
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    gotoxy(0, 5), printf("(c) µÞµ·¹ÞÀº ÅÐ¹¯Àº ½ºÆ©µð¿À  |  °×Ã¢ºÎ ¸ðµÒ¿ø");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY);
    gotoxy(0, 29), printf("| ¡è: À§   ¡é: ¾Æ·¡    ENTER: È®ÀÎ   |   ´õ ÁÁÀº ÇÃ·¹ÀÌ È¯°æÀ» À§ÇØ ÄÜ¼Ö¿¡¼­ ½ÇÇàÀÌ ±ÇÀåµË´Ï´Ù.   ");
    // system("color 07");
    for (short i = 0;;){
        gotoxy(10, 10);
        color(Set[0]);
        printf("1. ½ÃÀÛ");

        gotoxy(10, 11);
        color(Set[1]);
        printf("2. ¼³Á¤");

        gotoxy(10, 12);
        color(Set[2]);
        printf("3. µµ¿ò¸»");

        gotoxy(10, 13);
        color(Set[3]);
        printf("4. Á¾·á");

        key = _getch();

        if (key == 72 && (counter >= 2 && counter <= 4)){ // 72 ¹æÇâÅ° À§Å°
            counter--;
            PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
        }
        if (key == 80 && (counter >= 1 && counter <= 3)){ // 80 ¹æÇâÅ° ¾Æ·¡ Å°
            counter++;
            PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
        }
        if (key == '\r'){ // °´Ã¼ ¹ÝÈ¯ = ¿£ÅÍ Å°
            if (counter == 1){
                mciSendString("stop mp3", NULL, 0, NULL);
                PlaySound(TEXT(".\\audio\\[SE]Interaction"), 0, SND_ASYNC);
                system("cls");
                if(windows == 0) system("MODE 120,10");
                gotoxy(45, 2);
                printf("½ºÅ©¸³Æ®¸¦ ºÒ·¯¿À°í ÀÖ½À´Ï´Ù.");
                Sleep(3000); // Áö¿¬
                system("cls");
                if(windows == 0) system("MODE 83,20");
                system("color 87");
                PlaySound(TEXT(".\\audio\\[SE]Chime.wav"), 0, SND_ASYNC);
                printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n"), Sleep(20);
                printf("¦¢"), gotoxy(36, 1), printf("DISCLAIMER!"), gotoxy(81, 1), printf("¦¢\n");
                printf("¦§"), printf("¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡"), gotoxy(81, 2), printf("¦©\n"), Sleep(20);
                printf("¦¢"), gotoxy(81, 3), printf("¦¢\n"), Sleep(20);
                printf("¦¢"), gotoxy(81, 4), printf("¦¢\n"), Sleep(20);
                printf("¦¢"), gotoxy(81, 5), printf("¦¢\n"), Sleep(20);
                printf("¦¢"), gotoxy(81, 6), printf("¦¢\n"), Sleep(20);
                printf("¦¢"), gotoxy(81, 7), printf("¦¢\n"), Sleep(20);
                printf("¦¢"), gotoxy(81, 8), printf("¦¢\n"), Sleep(20);
                printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n"), Sleep(20);
                gotoxy(2, 4), printf("°ÔÀÓ ¹× °ÔÀÓ È«º¸¹°¿¡ ¾ð±ÞµÇ°Å³ª ¹¦»çµÈ");
                gotoxy(2, 5), printf("ÀÎ¸í, ÀÎ¹°, ½ºÅ©¸³Æ®, À½¼º, È¸»ç, ´ÜÃ¼, Áö¸í, ±¹¸í, »ç°Ç, Á¦Ç°,");
                gotoxy(2, 6), printf("±×¸®°í ¸ðµç °íÀ¯¸í»ç´Â ÀüºÎ ½ÇÁ¦¿Í´Â ÀÏÀý °ü°è°¡ ¾øÀÌ Çã±¸ÀûÀ¸·Î Ã¢ÀÛµÈ °ÍÀÌ¸ç");
                gotoxy(2, 7), printf("¸¸ÀÏ ½ÇÁ¦¿Í °°Àº °æ¿ì°¡ ÀÖ´õ¶óµµ ÀÌ´Â ¿ì¿¬¿¡ ÀÇÇÑ °ÍÀÓÀ» ¹àÈü´Ï´Ù.");
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
                gotoxy(40, 8), printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n"), Sleep(10);
                gotoxy(40, 9), printf("¦¢"), gotoxy(96, 9), printf("¦¢\n"), gotoxy(44, 8), printf(" ¼³Á¤ "), Sleep(10);
                gotoxy(40, 10), printf("¦¢"), gotoxy(96, 10), printf("¦¢\n"), Sleep(10);
                gotoxy(40, 11), printf("¦¢"), gotoxy(96, 11), printf("¦¢\n"), Sleep(10);
                gotoxy(40, 12), printf("¦¢"), gotoxy(96, 12), printf("¦¢\n"), Sleep(10);
                gotoxy(40, 13), printf("¦¢"), gotoxy(96, 13), printf("¦¢\n"), Sleep(10);
                gotoxy(40, 14), printf("¦¢"), gotoxy(96, 14), printf("¦¢\n"), Sleep(10);
                gotoxy(40, 15), printf("¦¢"), gotoxy(96, 15), printf("¦¢\n"), Sleep(10);
                gotoxy(40, 16), printf("¦¢"), gotoxy(96, 16), printf("¦¢\n"), Sleep(10);
                gotoxy(40, 17), printf("¦¢"), gotoxy(96, 17), printf("¦¢\n"), Sleep(10);
                gotoxy(40, 18), printf("¦¢"), gotoxy(96, 18), printf("¦¢\n"), Sleep(10);
                gotoxy(40, 19), printf("¦¢"), gotoxy(96, 19), printf("¦¢\n"), Sleep(10);
                gotoxy(40, 20), printf("¦¢"), gotoxy(96, 20), printf("¦¢\n"), Sleep(10);
                gotoxy(40, 21), printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n"), Sleep(10);
                for (short i = 0;;){
                    if(windows == 0){
                        gotoxy(43, 10);
                        color(Set[0]);
                        printf("¼öµ¿Çü ÇØ»óµµ·Î º¯°æ             ");
                    }
                    else{
                        gotoxy(43, 10);
                        color(Set[0]);
                        printf("ÀÚµ¿Çü ÇØ»óµµ·Î º¯°æ");
                    }

                    gotoxy(43, 11);
                    color(Set[1]);
                    printf("À½·®");

                    gotoxy(43, 12);
                    color(Set[2]);
                    printf("¾ð¾î");

                    gotoxy(42, 19);
                    color(Set[3]);
                    printf("¡ç µÚ·Î°¡±â");

                    key = _getch();

                    if (key == 72 && (counter >= 2 && counter <= 4)){ // 72 ¹æÇâÅ° À§Å°
                        counter--;
                        PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
                    }
                    if (key == 80 && (counter >= 1 && counter <= 3)){ // 80 ¹æÇâÅ° ¾Æ·¡ Å°
                        counter++;
                        PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
                    }
                    if (key == '\r'){
                        if (counter == 1){
                            if(windows == 0) PlaySound(TEXT(".\\audio\\[SE]Flash.wav"), 0, SND_ASYNC);
                            if(windows == 1) PlaySound(TEXT(".\\audio\\[SE]Saint.wav"), 0, SND_ASYNC);
                            if(windows == 0){
                                gotoxy(41, 9), printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n"), Sleep(10);
                                gotoxy(41, 10), printf("¦¢"), gotoxy(95, 10), printf("¦¢\n"), gotoxy(60, 9), printf(" ¾È³» "), Sleep(10);
                                gotoxy(41, 11), printf("¦¢"), gotoxy(95, 11), printf("¦¢\n"), Sleep(10);
                                gotoxy(41, 12), printf("¦¢"), gotoxy(95, 12), printf("¦¢\n"), Sleep(10);
                                gotoxy(41, 13), printf("¦¢"), gotoxy(95, 13), printf("¦¢\n"), Sleep(10);
                                gotoxy(41, 14), printf("¦¢"), gotoxy(95, 14), printf("¦¢\n"), Sleep(10);
                                gotoxy(41, 15), printf("¦¢"), gotoxy(95, 15), printf("¦¢\n"), Sleep(10);
                                gotoxy(41, 16), printf("¦¢"), gotoxy(95, 16), printf("¦¢\n"), Sleep(10);
                                gotoxy(41, 17), printf("¦¢"), gotoxy(95, 17), printf("¦¢\n"), Sleep(10);
                                gotoxy(41, 18), printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n"), Sleep(10);
                                gotoxy(43, 10), printf("±âÁ¸ ÇØ»óµµ·Î º¯°æÇÏ½Ã°Ú½À´Ï±î?");
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                                gotoxy(43, 11), printf("                  ");
                                gotoxy(43, 12), printf("ÀÌ ¼³Á¤Àº ÄÜ¼Ö ¸ðµå¿¡¼­¸¸ Àû¿ëµË´Ï´Ù.");
                                gotoxy(43, 13), printf("Windows ÅÍ¹Ì³Î¿¡¼­´Â ¿µÇâÀ» ¹ÞÁö ¾Ê½À´Ï´Ù.");
                                for(short i = 0;;){
                                    gotoxy(43, 15), color(Set[0]) ,printf("¿¹");
                                    gotoxy(43, 16), color(Set[1]), printf("¾Æ´Ï¿À");
                                    key = _getch();
                                    if (key == 72 && (counter >= 2 && counter <= 2)){ // 72 ¹æÇâÅ° À§Å°
                                        counter--;
                                        PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
                                        }
                                    if (key == 80 && (counter >= 1 && counter <= 1)){ // 80 ¹æÇâÅ° ¾Æ·¡ Å°
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
                            gotoxy(57, 19), printf("¼³Á¤ ºÒ°¡´É!");
                        }
                        if (counter == 3){
                            PlaySound(TEXT(".\\audio\\[SE]Failure.wav"), 0, SND_ASYNC);
                            gotoxy(57, 19), printf("¼³Á¤ ºÒ°¡´É!");
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
                printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦½¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
                printf("¦¢"), gotoxy(4, 0), printf(" µµ¿ò¸» "), gotoxy(1, 1), printf("  ÀÌµ¿: ¹æÇâÅ°   »óÈ£ÀÛ¿ë: ¿£ÅÍ  ¦­  ´õ ÁÁÀº ÇÃ·¹ÀÌ È¯°æÀ» À§ÇØ ÄÜ¼Ö¿¡¼­ ½ÇÇàÀÌ ±ÇÀåµË´Ï´Ù."), gotoxy(96, 1), printf("¦¢\n");
                printf("¦§"), printf("¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¿¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡"),
                gotoxy(96, 2), printf("¦©\n");
                printf("¦¢"), gotoxy(96, 3), printf("¦¢\n");
                printf("¦¢"), gotoxy(96, 4), printf("¦¢\n");
                printf("¦¢"), gotoxy(96, 5), printf("¦¢\n");
                printf("¦¢"), gotoxy(96, 6), printf("¦¢\n");
                printf("¦¢"), gotoxy(96, 7), printf("¦¢\n");
                printf("¦¢"), gotoxy(96, 8), printf("¦¢\n");
                printf("¦¢"), gotoxy(96, 9), printf("¦¢\n");
                printf("¦¢"), gotoxy(96, 10), printf("¦¢\n");
                printf("¦¢"), gotoxy(96, 11), printf("¦¢\n");
                printf("¦¢"), gotoxy(96, 12), printf("¦¢\n");
                printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
                gotoxy(25, 3), printf("ÀÌ °ÔÀÓÀº ÄÜ¼ÖÀ» ±â¹ÝÀ¸·Î Á¦ÀÛµÈ ¹Ì¿¬½ÃÀÔ´Ï´Ù.\n");
                gotoxy(25, 4), printf("ÇÁ·Î±×·¡¹Ö ¼öÇàÆò°¡¿¡ ÀÇÇØ Á¦ÀÛµÇ¾ú½À´Ï´Ù.");
                gotoxy(2, 6), printf("½ºÅä¸® ¹× ¼¼°è°ü ±âÈ¹: 30508 ±èÀ±±â");
                gotoxy(2, 7), printf("¸ÞÀÎÈ­¸é ÇÁ·Î±×·¡¹Ö: 30507 ±è¿øÇõ");
                gotoxy(2, 8), printf("ÇÁ·Ñ·Î±× ÇÁ·Î±×·¡¹Ö: ");
                gotoxy(2, 9), printf("Ã©ÅÍ1 ÇÁ·Î±×·¡¹Ö: ");
                gotoxy(2, 10), printf("Ã©ÅÍ2 ÇÁ·Î±×·¡¹Ö: ");
                gotoxy(2, 11), printf("Ã©ÅÍ3 ÇÁ·Î±×·¡¹Ö: ");
                gotoxy(1, 29), system("PAUSE");
                system("color 07");
                goto menu;
            }

            if (counter == 4){
                counter = 2;
                PlaySound(TEXT(".\\audio\\[SE]Flash.wav"), 0, SND_ASYNC);
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                gotoxy(41, 9), printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n"), Sleep(10);
                gotoxy(41, 10), printf("¦¢"), gotoxy(95, 10), printf("¦¢\n"), gotoxy(60, 9), printf(" ¾È³» "), Sleep(10);
                gotoxy(41, 11), printf("¦¢"), gotoxy(95, 11), printf("¦¢\n"), Sleep(10);
                gotoxy(41, 12), printf("¦¢"), gotoxy(95, 12), printf("¦¢\n"), Sleep(10);
                gotoxy(41, 13), printf("¦¢"), gotoxy(95, 13), printf("¦¢\n"), Sleep(10);
                gotoxy(41, 14), printf("¦¢"), gotoxy(95, 14), printf("¦¢\n"), Sleep(10);
                gotoxy(41, 15), printf("¦¢"), gotoxy(95, 15), printf("¦¢\n"), Sleep(10);
                gotoxy(41, 16), printf("¦¢"), gotoxy(95, 16), printf("¦¢\n"), Sleep(10);
                gotoxy(41, 17), printf("¦¢"), gotoxy(95, 17), printf("¦¢\n"), Sleep(10);
                gotoxy(41, 18), printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n"), Sleep(10);
                gotoxy(43, 10), printf("°¡²û Çö½ÇÀ» »ç´Â°Íµµ ÁÁ½À´Ï´Ù.");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                gotoxy(43, 12), printf("°ÔÀÓÀ» Á¾·áÇÏ½Ã°Ú½À´Ï±î?");
                for(short i = 0;;){
                    gotoxy(43, 15), color(Set[0]) ,printf("¿¹");
                    gotoxy(43, 16), color(Set[1]), printf("¾Æ´Ï¿À");
                    key = _getch();
                    if (key == 72 && (counter >= 2 && counter <= 2)){ // 72 ¹æÇâÅ° À§Å°
                        counter--;
                        PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
                    }
                    if (key == 80 && (counter >= 1 && counter <= 1)){ // 80 ¹æÇâÅ° ¾Æ·¡ Å°
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

    /* ¸Å¿ì °£´ÜÇÑ a,b,c ¼±ÅÃÁö
    printf("¿É¼ÇÀ» ¼±ÅÃÇÏ½Ê½Ã¿À: "), scanf("%c", &menu);

    switch (menu){
    case 'a': // ½ÃÀÛ
        printf("\n½ºÅ©¸³Æ®¸¦ ºÒ·¯¿À°í ÀÖ½À´Ï´Ù.");
        Sleep(2000); // Áö¿¬
        system("cls");
        break;
    case 'b': // ¿É¼Ç
        break;
    case 'c': // Á¾·á
        exit(EXIT_SUCCESS);
        break;
    default:
        printf("\n¾ø´Â ¿É¼Ç ÀÔ´Ï´Ù.\n");
        system("PAUSE");
        goto menu;
    }
    */
    return 0;
}