#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
void prologue()
{ // 1/3 프롤로그 파트 담당자: 30507 김원혁
    static char key;
    char name;
    printf("┌──────────────────────────────────────────┐\n");
    printf("│"), gotoxy(43, 1), printf("│");
    gotoxy(14, 1), printf("당신의 이름은?\n");
    printf("├──────────────────────────────────────────┤\n");
    printf("│"), gotoxy(43, 3), printf("│\n");
    printf("└──────────────────────────────────────────┘\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(3, 3), printf("> ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    scanf("%f", &name);
    system("cls");
    Sleep(1500);
    printf("\t프롤로그\n================================================================================\n\n\n");
    Sleep(1500);
    PlaySound(TEXT(".\\audio\\[BGS]clock2.wav"), 0, SND_ASYNC | SND_LOOP); // BGS 반복재생
    printf("답답하고 지루한 현실. 나는 이러한 지루하고 반복적인 일상에 지쳐 있었다.\n");
    key = getch(); // 아무 키를 눌렀을때 다음으로 넘어가짐
    printf("\'아... 나는 언제쯤 이러한 지루한 인생에서 벗어날 수 있을까?\'\n");
    key = getch();
    printf("이러한 생각을 언제부터 갖고 있었는지는 모르겠지만,\n이러한 생각이 내 머릿속에서 매우 오랫동안 있었다는 것은 확실하다.\n");
    key = getch();
    printf("\"어디라도 좋으니 이 세상 말고 다른 세상으로 가고싶다...\"\n");
    key = getch();
    printf("나는 이렇게 혼자 중얼거리면서 오늘도 학교를 갈 준비를 한다.\n\n\n");
    key = getch();
    
    printf("┌──────────────────────────────────────────┐\n"), Sleep(20);
    printf("│"), gotoxy(43, 13), printf("│"), Sleep(20);
    gotoxy(18, 13), printf("이동중...\n");
    printf("├──────────────────────────────────────────┤\n"), Sleep(20);
    printf("│"), gotoxy(43, 15), printf("│\n"), Sleep(20);
    gotoxy(2, 15), printf("-----------------------------------------\n");
    printf("└──────────────────────────────────────────┘\n"), Sleep(20);
    PlaySound(TEXT(".\\audio\\[SE]Move.wav"), 0, SND_ASYNC);
    for(short i = 2; i <= 42; i++){
        gotoxy(i, 15), printf("=\n"), Sleep(30);
    }
    system("cls");
    system("MODE 98,20");

    printf("\t프롤로그\n================================================================================\n\n\n");
    Sleep(1500);
    PlaySound(TEXT(".\\audio\\[SE]Earth1.wav"), 0, SND_ASYNC);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 20);
    gotoxy(1, 4), printf("비켜");
    for(short i = 4; i <= 64; i++){
        gotoxy(i, 4), printf("!"), Sleep(30);
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("아마도 뒤지게 시끄러웠을 것이다.                                      \n");
    key = getch();
    gotoxy(1, 4), printf("어쩔 수 없었다. 복도 한가운데에서 지리기는 싫었다.\n");
    key = getch();
    gotoxy(1, 4), printf("그렇게 나는 젖먹던 힘까지 써가며 전속력으로 화장실을 향해 달려갔다.\n");
    key = getch();
    gotoxy(1, 4), printf("이것이 나의 '지구'에서의 마지막 기억이이다.                           \n");
    key = getch();
    PlaySound(TEXT(".\\audio\\[BGM]Hazy Woods.wav"), 0, SND_ASYNC | SND_LOOP);
    gotoxy(1, 4), printf("\"휴... 진짜 복도에서 지리는 줄 알았네...\"   \n");
    key = getch();
    gotoxy(1, 4), printf("나는 거사를 치르고 안심하며 나왔다.           \n");
    key = getch();
    gotoxy(1, 4), printf("하지만 화장실에서 나와서 내가 본 것은 가히 충격적이었다.\n");
    key = getch();
    gotoxy(1, 4), printf("\'인간\'이라는 생물은 고양이나 강아지 같은 \'귀\'나 \'입\'을 가지고 있지 않을 것이다.\n");
    key = getch();
    gotoxy(1, 4), printf("하지만, 내가 본 것은 동물의 귀와 입을 가지고 있는 \'사람\'이었다.                     \n");
    key = getch();
    gotoxy(1, 4), printf("\"....?\"                                                         \n");
    key = getch();
    gotoxy(1, 4), printf("\"....?!?!???\"\n");
    key = getch();
    gotoxy(1, 4), printf("내가 복도에서 지리고, 수치사를 한 것이 분명하다.\n");
    key = getch();
    gotoxy(1, 4), printf("그렇지 않고는 내 앞에 수인 남자가 서있을 리가 없다.\n");
    key = getch();
    gotoxy(1, 4), printf("나는 바로 볼을 꼬집어 당겼다. 존나 강하게 잡아당겼다.\n");
    key = getch();
    gotoxy(1, 4), printf("\"아!\"                                                   \n");
    key = getch();
    gotoxy(1, 4), printf("존나 강하게 잡아당겼기 때문에 당연히 존나게 아팠다.\n");
    key = getch();
    gotoxy(1, 4), printf("\"시이벌 꿈이 아니네...\"                             \n");
    key = getch();
    gotoxy(1, 4), printf("분명 내가 있는 곳은 학교 화장실이다.\n");
    key = getch();
    gotoxy(1, 4), printf("다른 곳이 아니란 말이다.              \n");
    key = getch();
    gotoxy(1, 4), printf("나는 바로 화장실을 나가 주변을 둘러 보았다.\n");
    key = getch();
    gotoxy(1, 4), printf("그래도 학교였다. 다만, 사람들 사이사이로 수인이 보일 뿐이였다.\n");
    key = getch();
    gotoxy(1, 4), printf("\"아니 도데체 뭔일이야\"                                          \n");
    key = getch();
    gotoxy(1, 4), printf("당황한 나는 학교 옥상으로 올라가 우리 학교 주변을 둘러보았다.\n");
    key = getch();
    gotoxy(1, 4), printf("당연하게도 내가 원래 있던 지구에 있는 우리 동네랑 같았다.         \n");
    key = getch();
    gotoxy(1, 4), printf("\"..........\"                                                \n");
    key = getch();
    gotoxy(1, 4), printf("머리가 복잡해진 나는 가만히 멍을 때리면서 동네를 바라보고 있었다.\n");
    key = getch();
    gotoxy(1, 4), printf("그런데 갑자기 누가 날 불렀다.                                     \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"어이! 좀 있으면 수업 시작한다고! 빨리 반으로 돌아가는게 좋을껄?\"\n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    gotoxy(0, 12), printf("┌──────────────────────────────────────────┐\n"), Sleep(20);
    printf("│"), gotoxy(43, 13), printf("│"), Sleep(20);
    gotoxy(8, 13), printf("a.뒤돌아보기 || b.무시하기\n");
    printf("├──────────────────────────────────────────┤\n"), Sleep(20);
    printf("│"), gotoxy(43, 15), printf("│\n"), Sleep(20);
    printf("└──────────────────────────────────────────┘\n"), Sleep(20);

    int choice;
choice1:
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(3, 15), printf("> "), scanf("%c", &choice);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    switch(choice){
    case 'a': // 뒤 돌아보기
        gotoxy(0, 12), printf("                                             \n"), Sleep(20);
        gotoxy(0, 13), printf("                                             \n"), Sleep(20);
        gotoxy(0, 14), printf("                                             \n"), Sleep(20);
        gotoxy(0, 15), printf("                                             \n"), Sleep(20);
        gotoxy(0, 16), printf("                                             \n"), Sleep(20);
        gotoxy(1, 4), printf("나는 정신을 차리고 뒤를 돌아보았다.                                   \n");
        key = getch();
        gotoxy(1, 4), printf("내 뒤에는 고양이 수인이 있었다.       \n");
        key = getch();
        goto return1;
    case 'b': // 무시하기
        gotoxy(0, 12), printf("                                             \n"), Sleep(20);
        gotoxy(0, 13), printf("                                             \n"), Sleep(20);
        gotoxy(0, 14), printf("                                             \n"), Sleep(20);
        gotoxy(0, 15), printf("                                             \n"), Sleep(20);
        gotoxy(0, 16), printf("                                             \n"), Sleep(20);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
        gotoxy(1, 4), printf("\"이봐, 너 내말 듣고 있는거야?\"                                      \n");
        key = getch();
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        gotoxy(1, 4), printf("내 눈앞에 고양이 수인이 내 시야에서 나타났다.\n");
        key = getch();
        goto return1;
    default:
        gotoxy(5, 15), printf("                                 ");
        goto choice1;
    }
    system("PAUSE");

return1:
    gotoxy(1, 4), printf("\"아..어..! 고마워\"                              \n");
    key = getch();
    gotoxy(1, 4), printf("나는 고맙단 인사를 하고 교실로 뛰어 들어갔다.\n");
    key = getch();
    gotoxy(1, 4), printf("다 똑같다 몇몇 사람이 수인이 되어버린 것만 빼고... 내 자리도 똑같은 위치에 있었다.\n");
    key = getch();
    // 2/3 프롤로그 파트 담당자: 30503 김노아
}