#include <stdio.h>
#include <stdlib.h> // system 貲滄橫 餌辨衛 в蹂 (寰й唳辦 唳堅詭衛雖 轎溘脾)
#include <windows.h>
#include <mmsystem.h> // 螃蛤螃 營儅
#pragma comment(lib, "winmm.lib")
#include <digitalv.h> // 螃蛤螃 營儅
#include <conio.h>
#include "code\prologue.c" // Щ煤煎斜蒂 碳楝褥
#include "code\chapter1.c" // 薯 1濰擊 碳楝褥

void color(int color){ // 夔樂 儀
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoxy(int x, int y){            // 臢蝶お 謝ル
    COORD c; // 摹樹腎橫 氈朝 x,y 謝ル 盪濰ж朝 喫
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c); // 夔樂曖 с菟 高婁 謝ル高擊 嫡嬴憮, п渡 嬪纂煎 醴憮蒂 檜翕衛酈朝 喫
}

int main(){
    /* vscode曖 檣囀註 寞衝擊 ANSI 949 (EUC-KR)煎 蜃醮輿褊衛螃.
    Code Runner > Executor Map 縑憮 chcp 65001 && 睡碟擊 雖錶輿褊衛螃.
    檜 撮た擎 孺紫辦10 CMD �秣瞈� 瞳ми 檣囀註 寞衝戲煎 薯濛腌棲棻. */
    system("MODE 98,30");
    printf("檜 啪歜擎 嬴霜 醞除盪濰擊 雖錳ж雖 彊蝗棲棻.\n");
    system("PAUSE");

    // 詭檣 �飛� 轎溘
    int menu;
    int Set[] = {7, 7, 7, 7}; // 晦獄 儀鼻
    short counter = 2;
    char key;

    short windows = 0;

    mciSendString("open \".\\audio\\[BGM]椋蚸初擨肥譇舍.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
    mciSendString("play mp3 repeat", NULL, 0, NULL);

menu:
    system("cls");

    // 掘 幗瞪 CMD縑 蜃轔 顫檜ぎ
    printf("﹤﹥﹥﹥﹥﹤﹥﹤﹤﹤﹥﹤﹥﹥﹥﹤﹤﹥﹥﹥﹤﹤﹥﹤﹤﹤﹥﹤﹤﹤﹥﹥﹥﹥﹥﹤﹤﹥﹥﹥﹤﹤﹥﹤﹥﹤﹤﹤﹤\n");
    printf("﹤﹥﹤﹤﹤﹤﹥﹤﹤﹤﹥﹤﹥﹤﹤﹥﹤﹥﹤﹤﹥﹤﹥﹤﹤﹤﹥﹤﹤﹤﹤﹤﹥﹤﹤﹤﹥﹤﹤﹤﹥﹤﹥﹤﹥﹤﹤﹤﹤\n");
    printf("﹤﹥﹥﹥﹤﹤﹥﹤﹤﹤﹥﹤﹥﹥﹥﹤﹤﹥﹥﹥﹤﹤﹤﹥﹤﹥﹤﹤﹤﹤﹤﹤﹥﹤﹤﹤﹥﹥﹥﹥﹥﹤﹥﹤﹥﹤﹤﹤﹤\n");
    printf("﹤﹥﹤﹤﹤﹤﹥﹤﹤﹤﹥﹤﹥﹤﹤﹥﹤﹥﹤﹤﹥﹤﹤﹤﹥﹤﹤﹤﹤﹤﹤﹤﹥﹤﹤﹤﹥﹤﹤﹤﹥﹤﹥﹤﹥﹤﹤﹤﹤\n");
    printf("﹤﹥﹤﹤﹤﹤﹤﹥﹥﹥﹤﹤﹥﹤﹤﹥﹤﹥﹤﹤﹥﹤﹤﹤﹥﹤﹤﹤﹤﹤﹤﹤﹥﹤﹤﹤﹥﹤﹤﹤﹥﹤﹥﹤﹥﹥﹥﹥﹤\n");

    /* 溯剪衛 CMD縑憮朝 陛絮撩 檜蓬陛 嫦儅л
    printf("﹥﹥﹥﹥﹥﹥﹥ ﹥﹥    ﹥﹥ ﹥﹥﹥﹥﹥﹥  ﹥﹥﹥﹥﹥﹥  ﹥﹥    ﹥﹥     ﹥﹥﹥﹥﹥﹥﹥﹥  ﹥﹥﹥﹥﹥  ﹥﹥ ﹥﹥      \n");
    printf("﹥﹥      ﹥﹥    ﹥﹥ ﹥﹥   ﹥﹥ ﹥﹥   ﹥﹥  ﹥﹥  ﹥﹥         ﹥﹥    ﹥﹥   ﹥﹥ ﹥﹥ ﹥﹥      \n");
    printf("﹥﹥﹥﹥﹥   ﹥﹥    ﹥﹥ ﹥﹥﹥﹥﹥﹥  ﹥﹥﹥﹥﹥﹥    ﹥﹥﹥﹥          ﹥﹥    ﹥﹥﹥﹥﹥﹥﹥ ﹥﹥ ﹥﹥      \n");
    printf("﹥﹥      ﹥﹥    ﹥﹥ ﹥﹥   ﹥﹥ ﹥﹥   ﹥﹥    ﹥﹥           ﹥﹥    ﹥﹥   ﹥﹥ ﹥﹥ ﹥﹥      \n");
    printf("﹥﹥       ﹥﹥﹥﹥﹥﹥  ﹥﹥   ﹥﹥ ﹥﹥   ﹥﹥    ﹥﹥           ﹥﹥    ﹥﹥   ﹥﹥ ﹥﹥ ﹥﹥﹥﹥﹥﹥﹥ \n");
    */
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    gotoxy(0, 5), printf("(c) 萌絲嫡擎 瓚僖擎 蝶ぅ蛤螃  |  啞璽睡 賅菸錳");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY);
    gotoxy(0, 29), printf("| ∟: 嬪   ⊿: 嬴楚    ENTER: �挫�   |   渦 謠擎 Ы溯檜 �秣磍� 嬪п 夔樂縑憮 褒ч檜 掏濰腌棲棻.   ");
    // system("color 07");
    for (short i = 0;;){
        gotoxy(10, 10);
        color(Set[0]);
        printf("1. 衛濛");

        gotoxy(10, 11);
        color(Set[1]);
        printf("2. 撲薑");

        gotoxy(10, 12);
        color(Set[2]);
        printf("3. 紫遺蜓");

        gotoxy(10, 13);
        color(Set[3]);
        printf("4. 謙猿");

        key = _getch();

        if (key == 72 && (counter >= 2 && counter <= 4)){ // 72 寞щ酈 嬪酈
            counter--;
            PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
        }
        if (key == 80 && (counter >= 1 && counter <= 3)){ // 80 寞щ酈 嬴楚 酈
            counter++;
            PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
        }
        if (key == '\r'){ // 偌羹 奩�� = 縛攪 酈
            if (counter == 1){
                mciSendString("stop mp3", NULL, 0, NULL);
                PlaySound(TEXT(".\\audio\\[SE]Interaction"), 0, SND_ASYNC);
                system("cls");
                if(windows == 0) system("MODE 120,10");
                gotoxy(45, 2);
                printf("蝶觼董お蒂 碳楝螃堅 氈蝗棲棻.");
                Sleep(3000); // 雖翱
                system("cls");
                if(windows == 0) system("MODE 83,20");
                system("color 87");
                PlaySound(TEXT(".\\audio\\[SE]Chime.wav"), 0, SND_ASYNC);
                printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n"), Sleep(20);
                printf("弛"), gotoxy(36, 1), printf("DISCLAIMER!"), gotoxy(81, 1), printf("弛\n");
                printf("戍"), printf("式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式"), gotoxy(81, 2), printf("扣\n"), Sleep(20);
                printf("弛"), gotoxy(81, 3), printf("弛\n"), Sleep(20);
                printf("弛"), gotoxy(81, 4), printf("弛\n"), Sleep(20);
                printf("弛"), gotoxy(81, 5), printf("弛\n"), Sleep(20);
                printf("弛"), gotoxy(81, 6), printf("弛\n"), Sleep(20);
                printf("弛"), gotoxy(81, 7), printf("弛\n"), Sleep(20);
                printf("弛"), gotoxy(81, 8), printf("弛\n"), Sleep(20);
                printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n"), Sleep(20);
                gotoxy(2, 4), printf("啪歜 塽 啪歜 �姿號倏� 樹晝腎剪釭 髡餌脹");
                gotoxy(2, 5), printf("檣貲, 檣僭, 蝶觼董お, 擠撩, �蜓�, 欽羹, 雖貲, 措貲, 餌勒, 薯ヶ,");
                gotoxy(2, 6), printf("斜葬堅 賅萇 堅嶸貲餌朝 瞪睡 褒薯諦朝 橾瞰 婦啗陛 橈檜 ъ掘瞳戲煎 璽濛脹 匙檜貊");
                gotoxy(2, 7), printf("虜橾 褒薯諦 偽擎 唳辦陛 氈渦塭紫 檜朝 辦翱縑 曖и 匙歜擊 嫩��棲棻.");
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
                gotoxy(40, 8), printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n"), Sleep(10);
                gotoxy(40, 9), printf("弛"), gotoxy(96, 9), printf("弛\n"), gotoxy(44, 8), printf(" 撲薑 "), Sleep(10);
                gotoxy(40, 10), printf("弛"), gotoxy(96, 10), printf("弛\n"), Sleep(10);
                gotoxy(40, 11), printf("弛"), gotoxy(96, 11), printf("弛\n"), Sleep(10);
                gotoxy(40, 12), printf("弛"), gotoxy(96, 12), printf("弛\n"), Sleep(10);
                gotoxy(40, 13), printf("弛"), gotoxy(96, 13), printf("弛\n"), Sleep(10);
                gotoxy(40, 14), printf("弛"), gotoxy(96, 14), printf("弛\n"), Sleep(10);
                gotoxy(40, 15), printf("弛"), gotoxy(96, 15), printf("弛\n"), Sleep(10);
                gotoxy(40, 16), printf("弛"), gotoxy(96, 16), printf("弛\n"), Sleep(10);
                gotoxy(40, 17), printf("弛"), gotoxy(96, 17), printf("弛\n"), Sleep(10);
                gotoxy(40, 18), printf("弛"), gotoxy(96, 18), printf("弛\n"), Sleep(10);
                gotoxy(40, 19), printf("弛"), gotoxy(96, 19), printf("弛\n"), Sleep(10);
                gotoxy(40, 20), printf("弛"), gotoxy(96, 20), printf("弛\n"), Sleep(10);
                gotoxy(40, 21), printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n"), Sleep(10);
                for (short i = 0;;){
                    if(windows == 0){
                        gotoxy(43, 10);
                        color(Set[0]);
                        printf("熱翕⑽ п鼻紫煎 滲唳             ");
                    }
                    else{
                        gotoxy(43, 10);
                        color(Set[0]);
                        printf("濠翕⑽ п鼻紫煎 滲唳");
                    }

                    gotoxy(43, 11);
                    color(Set[1]);
                    printf("擠榆");

                    gotoxy(43, 12);
                    color(Set[2]);
                    printf("樹橫");

                    gotoxy(42, 19);
                    color(Set[3]);
                    printf("∠ 菴煎陛晦");

                    key = _getch();

                    if (key == 72 && (counter >= 2 && counter <= 4)){ // 72 寞щ酈 嬪酈
                        counter--;
                        PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
                    }
                    if (key == 80 && (counter >= 1 && counter <= 3)){ // 80 寞щ酈 嬴楚 酈
                        counter++;
                        PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
                    }
                    if (key == '\r'){
                        if (counter == 1){
                            if(windows == 0) PlaySound(TEXT(".\\audio\\[SE]Flash.wav"), 0, SND_ASYNC);
                            if(windows == 1) PlaySound(TEXT(".\\audio\\[SE]Saint.wav"), 0, SND_ASYNC);
                            if(windows == 0){
                                gotoxy(41, 9), printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n"), Sleep(10);
                                gotoxy(41, 10), printf("弛"), gotoxy(95, 10), printf("弛\n"), gotoxy(60, 9), printf(" 寰頂 "), Sleep(10);
                                gotoxy(41, 11), printf("弛"), gotoxy(95, 11), printf("弛\n"), Sleep(10);
                                gotoxy(41, 12), printf("弛"), gotoxy(95, 12), printf("弛\n"), Sleep(10);
                                gotoxy(41, 13), printf("弛"), gotoxy(95, 13), printf("弛\n"), Sleep(10);
                                gotoxy(41, 14), printf("弛"), gotoxy(95, 14), printf("弛\n"), Sleep(10);
                                gotoxy(41, 15), printf("弛"), gotoxy(95, 15), printf("弛\n"), Sleep(10);
                                gotoxy(41, 16), printf("弛"), gotoxy(95, 16), printf("弛\n"), Sleep(10);
                                gotoxy(41, 17), printf("弛"), gotoxy(95, 17), printf("弛\n"), Sleep(10);
                                gotoxy(41, 18), printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n"), Sleep(10);
                                gotoxy(43, 10), printf("晦襄 п鼻紫煎 滲唳ж衛啊蝗棲梱?");
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                                gotoxy(43, 11), printf("                  ");
                                gotoxy(43, 12), printf("檜 撲薑擎 夔樂 賅萄縑憮虜 瞳辨腌棲棻.");
                                gotoxy(43, 13), printf("Windows 攪嘐割縑憮朝 艙щ擊 嫡雖 彊蝗棲棻.");
                                for(short i = 0;;){
                                    gotoxy(43, 15), color(Set[0]) ,printf("蕨");
                                    gotoxy(43, 16), color(Set[1]), printf("嬴棲螃");
                                    key = _getch();
                                    if (key == 72 && (counter >= 2 && counter <= 2)){ // 72 寞щ酈 嬪酈
                                        counter--;
                                        PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
                                        }
                                    if (key == 80 && (counter >= 1 && counter <= 1)){ // 80 寞щ酈 嬴楚 酈
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
                            gotoxy(57, 19), printf("撲薑 碳陛棟!");
                        }
                        if (counter == 3){
                            PlaySound(TEXT(".\\audio\\[SE]Failure.wav"), 0, SND_ASYNC);
                            gotoxy(57, 19), printf("撲薑 碳陛棟!");
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
                printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式汗式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
                printf("弛"), gotoxy(4, 0), printf(" 紫遺蜓 "), gotoxy(1, 1), printf("  檜翕: 寞щ酈   鼻��濛辨: 縛攪  早  渦 謠擎 Ы溯檜 �秣磍� 嬪п 夔樂縑憮 褒ч檜 掏濰腌棲棻."), gotoxy(96, 1), printf("弛\n");
                printf("戍"), printf("式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式江式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式"),
                gotoxy(96, 2), printf("扣\n");
                printf("弛"), gotoxy(96, 3), printf("弛\n");
                printf("弛"), gotoxy(96, 4), printf("弛\n");
                printf("弛"), gotoxy(96, 5), printf("弛\n");
                printf("弛"), gotoxy(96, 6), printf("弛\n");
                printf("弛"), gotoxy(96, 7), printf("弛\n");
                printf("弛"), gotoxy(96, 8), printf("弛\n");
                printf("弛"), gotoxy(96, 9), printf("弛\n");
                printf("弛"), gotoxy(96, 10), printf("弛\n");
                printf("弛"), gotoxy(96, 11), printf("弛\n");
                printf("弛"), gotoxy(96, 12), printf("弛\n");
                printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
                gotoxy(25, 3), printf("檜 啪歜擎 夔樂擊 晦奩戲煎 薯濛脹 嘐翱衛殮棲棻.\n");
                gotoxy(25, 4), printf("Щ煎斜楚墅 熱чゎ陛縑 曖п 薯濛腎歷蝗棲棻.");
                gotoxy(2, 6), printf("蝶饜葬 塽 撮啗婦 晦��: 30508 梯彌晦");
                gotoxy(2, 7), printf("詭檣�飛� Щ煎斜楚墅: 30507 梯錳⑶");
                gotoxy(2, 8), printf("Щ煤煎斜 Щ煎斜楚墅: ");
                gotoxy(2, 9), printf("矇攪1 Щ煎斜楚墅: ");
                gotoxy(2, 10), printf("矇攪2 Щ煎斜楚墅: ");
                gotoxy(2, 11), printf("矇攪3 Щ煎斜楚墅: ");
                gotoxy(1, 29), system("PAUSE");
                system("color 07");
                goto menu;
            }

            if (counter == 4){
                counter = 2;
                PlaySound(TEXT(".\\audio\\[SE]Flash.wav"), 0, SND_ASYNC);
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                gotoxy(41, 9), printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n"), Sleep(10);
                gotoxy(41, 10), printf("弛"), gotoxy(95, 10), printf("弛\n"), gotoxy(60, 9), printf(" 寰頂 "), Sleep(10);
                gotoxy(41, 11), printf("弛"), gotoxy(95, 11), printf("弛\n"), Sleep(10);
                gotoxy(41, 12), printf("弛"), gotoxy(95, 12), printf("弛\n"), Sleep(10);
                gotoxy(41, 13), printf("弛"), gotoxy(95, 13), printf("弛\n"), Sleep(10);
                gotoxy(41, 14), printf("弛"), gotoxy(95, 14), printf("弛\n"), Sleep(10);
                gotoxy(41, 15), printf("弛"), gotoxy(95, 15), printf("弛\n"), Sleep(10);
                gotoxy(41, 16), printf("弛"), gotoxy(95, 16), printf("弛\n"), Sleep(10);
                gotoxy(41, 17), printf("弛"), gotoxy(95, 17), printf("弛\n"), Sleep(10);
                gotoxy(41, 18), printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n"), Sleep(10);
                gotoxy(43, 10), printf("陛莠 ⑷褒擊 餌朝匙紫 謠蝗棲棻.");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                gotoxy(43, 12), printf("啪歜擊 謙猿ж衛啊蝗棲梱?");
                for(short i = 0;;){
                    gotoxy(43, 15), color(Set[0]) ,printf("蕨");
                    gotoxy(43, 16), color(Set[1]), printf("嬴棲螃");
                    key = _getch();
                    if (key == 72 && (counter >= 2 && counter <= 2)){ // 72 寞щ酈 嬪酈
                        counter--;
                        PlaySound(TEXT(".\\audio\\[SE]Cursor.wav"), 0, SND_ASYNC);
                    }
                    if (key == 80 && (counter >= 1 && counter <= 1)){ // 80 寞щ酈 嬴楚 酈
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

    /* 衙辦 除欽и a,b,c 摹鷗雖
    printf("褫暮擊 摹鷗ж褊衛螃: "), scanf("%c", &menu);

    switch (menu){
    case 'a': // 衛濛
        printf("\n蝶觼董お蒂 碳楝螃堅 氈蝗棲棻.");
        Sleep(2000); // 雖翱
        system("cls");
        break;
    case 'b': // 褫暮
        break;
    case 'c': // 謙猿
        exit(EXIT_SUCCESS);
        break;
    default:
        printf("\n橈朝 褫暮 殮棲棻.\n");
        system("PAUSE");
        goto menu;
    }
    */
    return 0;
}