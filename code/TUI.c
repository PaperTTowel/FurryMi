#include <stdio.h>
#include <windows.h>
#include <conio.h>

void color(int color){ // 夔樂 儀
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoxy(int x, int y){ // 臢蝶お 謝ル
    COORD c; // 摹樹腎橫 氈朝 x,y 謝ル 盪濰ж朝 喫
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c); // 夔樂曖 с菟 高婁 謝ル高擊 嫡嬴憮, п渡 嬪纂煎 醴憮蒂 檜翕衛酈朝 喫
}

void disclaimer(){
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
}

void bisogeo(){
    printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n"), Sleep(20);
    printf("弛"), gotoxy(36, 1), printf("鐘蘸隴 唳堅!"), gotoxy(81, 1), printf("弛\n");
    printf("戍"), printf("式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式"), gotoxy(81, 2), printf("扣\n"), Sleep(20);
    printf("弛"), gotoxy(81, 3), printf("弛\n"), Sleep(20);
    printf("弛"), gotoxy(81, 4), printf("弛\n"), Sleep(20);
    printf("弛"), gotoxy(81, 5), printf("弛\n"), Sleep(20);
    printf("弛"), gotoxy(81, 6), printf("弛\n"), Sleep(20);
    printf("弛"), gotoxy(81, 7), printf("弛\n"), Sleep(20);
    printf("弛"), gotoxy(81, 8), printf("弛\n"), Sleep(20);
    printf("弛"), gotoxy(81, 9), printf("弛\n"), Sleep(20);
    printf("弛"), gotoxy(81, 10), printf("弛\n"), Sleep(20);
    printf("弛"), gotoxy(81, 11), printf("弛\n"), Sleep(20);
    printf("弛"), gotoxy(81, 12), printf("弛\n"), Sleep(20);
    printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n"), Sleep(20);
    gotoxy(2, 4), printf("檜 嘐翱衛朝 衛陝瞳 ⑹螃撩曖 濰腦蒂 んлм棲棻.");
    gotoxy(2, 5), printf("鏃щ檜 蜃雖 彊戲褐 碟菟擎 啪歜擊 謙猿ж衛賊 腌棲棻.");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    gotoxy(27, 7), printf("| 嬴楚 濰腦陛 んл腌棲棻 |");
    gotoxy(2, 8), printf("﹢ ぷ葬");
    gotoxy(2, 9), printf("﹢ 煎葬");
    gotoxy(2, 10), printf("﹢ 襠熱");
    gotoxy(2, 11), printf("﹢ 熱除, 醱除, 檜謙除");
    gotoxy(2, 12), printf("﹢ BBW or BBM (Big Beautiful Woman, Big Beautiful Man)");
}

void setting(){
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
}

void info(){
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
}

void help(){
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
    gotoxy(2, 6), printf("蝶饜葬 塽 撮啗婦 晦��/濛撩: 30508 梯彌晦");
    gotoxy(2, 7), printf("詭檣�飛� Щ煎斜楚墅: 30507 梯錳⑶");
    gotoxy(2, 8), printf("Щ煤煎斜 Щ煎斜楚墅: 30507 梯錳⑶ | 30503 梯喻嬴");
    gotoxy(2, 9), printf("矇攪1 Щ煎斜楚墅: 30503 梯喻嬴");
    gotoxy(2, 10), printf("矇攪2 Щ煎斜楚墅: (嬴霜 寰釭褥)");
    gotoxy(2, 11), printf("嫦ル: 30730: 薑唳遽");
}