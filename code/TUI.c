#include <stdio.h>
#include <windows.h>
#include <conio.h>

void color(int color){ // ÄÜ¼Ö »ö
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoxy(int x, int y){ // ÅØ½ºÆ® ÁÂÇ¥
    COORD c; // ¼±¾ðµÇ¾î ÀÖ´Â x,y ÁÂÇ¥ ÀúÀåÇÏ´Â ³ð
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c); // ÄÜ¼ÖÀÇ ÇÚµé °ª°ú ÁÂÇ¥°ªÀ» ¹Þ¾Æ¼­, ÇØ´ç À§Ä¡·Î Ä¿¼­¸¦ ÀÌµ¿½ÃÅ°´Â ³ð
}

void disclaimer(){
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
}

void setting(){
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
}

void info(){
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
}

void help(){
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
}