#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
void prologue(HINSTANCE hInstance,char name[10])
{ // 1/3 프롤로그 파트 담당자: 30507 김원혁
    static char key; // 동적변수로 할 경우 같은 변수끼리 꼬일 가능성이 있어 정적으로 지정함
    printf("\t프롤로그\n================================================================================\n\n\n");
    Sleep(1500);
    PlaySound(TEXT(".\\audio\\[BGS]clock2.wav"), 0, SND_ASYNC | SND_LOOP); // [BGS] 반복재생
    printf("답답하고 지루한 현실. 나는 이러한 지루하고 반복적인 일상에 지쳐 있었다.\n");
    key = getch(); // 아무 키를 눌렀을때 다음으로 넘어가도록 하는 역할
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
    for(short i = 2; i <= 42; i++){ // 시각적 로딩창 구현
        gotoxy(i, 15), printf("=\n"), Sleep(30);
    }
    system("cls");
    system("MODE 98,20");

    printf("\t프롤로그\n================================================================================\n\n\n");
    Sleep(1500);
    PlaySound(TEXT(".\\audio\\[SE]Earth1.wav"), 0, SND_ASYNC);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 20);
    gotoxy(1, 4), printf("비켜");
    for(short i = 4; i <= 64; i++){ // 비상!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
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

    HBITMAP hBMP = (HBITMAP)LoadImage(NULL, ".\\texture\\school2.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    HWND imgControl = CreateWindow("STATIC", "복도", WS_VISIBLE | SS_BITMAP, 1000, 100, 800, 600, NULL, NULL, hInstance, NULL);
    SendMessage(imgControl, STM_SETIMAGE, IMAGE_BITMAP, hBMP);

    gotoxy(1, 4), printf("그래도 학교였다. 다만, 사람들 사이사이로 수인이 보일 뿐이였다.\n");
    key = getch();
    gotoxy(1, 4), printf("\"아니 도데체 뭔일이야\"                                          \n");
    key = getch();

    DestroyWindow(imgControl);
    HBITMAP hBMP1 = (HBITMAP)LoadImage(NULL, ".\\texture\\schoolRooftop.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    HWND imgControl1 = CreateWindow("STATIC", "학교 옥상", WS_VISIBLE | SS_BITMAP, 1000, 100, 800, 600, NULL, NULL, hInstance, NULL);
    SendMessage(imgControl1, STM_SETIMAGE, IMAGE_BITMAP, hBMP1);

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
    switch(choice){ // 스위치 문 choice의 변수값 확인
    case 'a': // 뒤 돌아보기 = choice 값에 a가 있을 경우 아래 코드 실행
        gotoxy(0, 12), printf("                                             \n"), Sleep(20);
        gotoxy(0, 13), printf("                                             \n"), Sleep(20);
        gotoxy(0, 14), printf("                                             \n"), Sleep(20);
        gotoxy(0, 15), printf("                                             \n"), Sleep(20);
        gotoxy(0, 16), printf("                                             \n"), Sleep(20);
        gotoxy(1, 4), printf("나는 정신을 차리고 뒤를 돌아보았다.                                   \n");
        key = getch();
        gotoxy(1, 4), printf("내 뒤에는 고양이 수인이 있었다.       \n");
        key = getch();
        goto return1; // return1 로 이동
    case 'b': // 무시하기 = choice 값에 b가 있을 경우 아래 코드 실행
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
    default: // 잘못된 입력 = choice 값이 a, b가 아닐 경우 다시 choice1으로 이동하여 반복
        gotoxy(5, 15), printf("                                 ");
        goto choice1;
    }
    system("PAUSE");

return1:
    gotoxy(1, 4), printf("\"아..어..! 고마워\"                              \n");
    key = getch();
    DestroyWindow(imgControl1);
    gotoxy(1, 4), printf("나는 고맙단 인사를 하고 교실로 뛰어 들어갔다.\n");
    key = getch();
    gotoxy(1, 4), printf("다 똑같다 몇몇 사람이 수인이 되어버린 것만 빼고... 내 자리도 똑같은 위치에 있었다.\n");
    key = getch();
    gotoxy(1, 4), printf("다만 다 내가 모르는 얼굴이다.                                                         \n");
    key =  getch();
    gotoxy(1, 4), printf("머리가 띵한 상태로 학교 시간이 빠르게 지나갔다. 매우 빠르게...\n");
    key = getch();
    gotoxy(1, 4), printf("그렇게 시간은 흘러 하교 시간이 되었고 나는 하교 준비를 마치고 신발장을 향해 가고 있었다.  \n");
    key = getch();
    gotoxy(1, 4), printf("                                                                                        \n");
    PlaySound(TEXT(".\\audio\\[BGM]coffeeSugarの森.wav"), 0, SND_ASYNC | SND_LOOP);
    // 2/3 프롤로그 파트 담당자: 30508 김윤기

    HBITMAP hBMP2 = (HBITMAP)LoadImage(NULL, ".\\texture\\school3.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    HWND imgControl2 = CreateWindow("STATIC", "학교 후동 신발장", WS_VISIBLE | SS_BITMAP, 1000, 100, 800, 600, NULL, NULL, hInstance, NULL);
    SendMessage(imgControl2, STM_SETIMAGE, IMAGE_BITMAP, hBMP2);

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"여어\"");
    for(short i = 4; i <= 64; i++){
        gotoxy(i, 4), printf("!"), Sleep(30);
    }
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    gotoxy(1, 4), printf("누가 큰 소리로 부르는 소리가 들렸지만 날 부르는 소리가 아닌 것이 뻔했기에 나는 무시하고 신발장을 향해 가고 있었다.\n");
    key = getch();
    gotoxy(1, 4), printf("신발장에 다다른 그 순간 누군가가 나에게 어깨동무를 한 것이다.                                                         \n");
    key = getch();
    gotoxy(1, 4), printf("                                                                                        \n");
    for(short i = 1; i <= 5; i++){
        gotoxy(i, 4), printf("."), Sleep(350);
    }
    gotoxy(6, 4), printf("?\n");
    key = getch();
    gotoxy(1, 4), printf("분명 지금이 세계에서 나를 아는 사람은 없을 것이다.\n");
    key = getch();
    gotoxy(1, 4), printf("나는 다른 사람이 나를 친구랑 착각했겠지 하며 고개를 돌렸을 때 매우 놀랐었다.\n");
    key = getch();
    gotoxy(1, 4), printf("나에게 어깨동무를 한 사람은 바로 아침 학교 옥상에서 나에게 수업이 시작하기 전 이란 것을 알려준 그 여학생이기 때문이다.\n");
    key = getch();

    HBITMAP hib = (HBITMAP)LoadImage(NULL, ".\\texture\\hibiki.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    HWND imgControl_h = CreateWindow("STATIC", "히비키", WS_VISIBLE | SS_BITMAP, 795, 10, 200, 200, NULL, NULL, hInstance, NULL);
    SendMessage(imgControl_h, STM_SETIMAGE, IMAGE_BITMAP, hib);

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"어이 왜 무시하면서 가는 거야?\"                                                                                             ");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    gotoxy(1, 4), printf("그 여학생은 나에게 어깨동무를 한 체로 나에게 물어봤다.\n");
    key = getch();
    DestroyWindow(imgControl2);

    gotoxy(1, 4), printf("\"너는 그때 그 학교 수업 시간이라고 했던....\"                \n");
    key = getch();
    gotoxy(1, 4), printf("나는 매우 당황해서 말을 잇지 못했다.                                      \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"오! 기억하고 있네! 난 히이라기 히비키야!\"\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"간단하게 히비키라 불러줘. 넌 이름이?\"                                      \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("\"난...%s야..\"                                           \n", name);
    key = getch();
    gotoxy(1, 4), printf("푸른색 눈에 회색 머리카락에 복슬복슬해 보이는 늑대 귀가 머리에 달려있는 소녀였다.\n");
    key = getch();
    gotoxy(1, 4), printf("아무리 봐도 매우 적극적인 사람이었다.                                                               \n");
    key = getch();
    gotoxy(1, 4), printf("소심한 나로서는 긴장이 되었다.                                                     \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"오! %s라고 하는구나 잘부탁해! %s라고 부르면 될려나?\"                 \n", name, name);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("\"으..응, 잘 부탁해..\"                                                                                                           \n");
    key = getch(); 
    gotoxy(1, 4), printf("이렇게 인사를 하고 나는 바로 집으로 향해 갔지만 저 히비키라는 여자아이도 가는 길이 같은지 나로써는 매우 불편한 길동무가 생겼다.\n");
    key = getch();
    gotoxy(1, 4), printf("서로 말없이 1분정도 갔을까?                                                                                                                   \n");
    key = getch();
    gotoxy(1, 4), printf("히비키는 나에게 말을 걸어왔다.                \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"아침에 왜 옥상에서 멍 때리고 있었던거야? 무슨 일 있어?\"                                            \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("아침에 너무 많은 일이 있어 뇌가 포화되어버린 나의 표정을 본 것 같았다.\n");
    key = getch();
    gotoxy(1, 4), printf("\"하늘이 너무 멋져서 감상하고 있었어.\"                                           \n");
    key = getch();
    gotoxy(1, 4), printf("대충 나는 둘러대었다.                                                                            \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"그렇구나. 나는 무슨 일 있는 줄 알았네. 하긴 오늘 아침 하늘이 예쁘긴 했지!\"\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("이 이야기를 시작으로 이런저런 이야기를 나누면서 집으로 향했다.                    \n");
    key = getch();
    gotoxy(1, 4), printf("그래도 좀 이야기를 하바 보니까 긴장이 풀리는 것 같았다.               \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"아! 난 여기서 오른쪽이야. 너는 어디로 가야해?\"                                                                                         \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("사거리에 거의 다 왔을 떄 히비키가 물었다.                                      \n");
    key = getch();
    gotoxy(1, 4), printf("\"나는 왼쪽으로 가야해.\"                                                     \n");
    key = getch();
    gotoxy(1, 4), printf("저 사거리를 기준으로 각자의 집이 반대쪽인 것 같았다.\n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"그래? 그럼 바이바이~~!, 내일 학교에서 봐!\"                                     \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("히비키는 나에게 인사를 하고 자기 집을 향해 갔다.  \n");
    key = getch();
    gotoxy(1, 4), printf("\"응. 내일 봐.\"                                                          \n");
    key = getch();
    DestroyWindow(imgControl_h);
    gotoxy(1, 4), printf("나도 인사를 한 후 집으로 향했다.\n");
    key = getch();
    gotoxy(1, 4), printf("집으로 가는 길 중에도 인간이 반 여러 종류의 수인이 반이 있었다.\n");
    key = getch();
    gotoxy(1, 4), printf("느낌상 발전한 이세계에 온 느낌이였다. 집은 원래 지구와 같은 곳에 있었다. 아무리 봐도 여기는 지구랑 자리가 완전히 같은 것 같았다.\n");
    key = getch();
    gotoxy(1, 4), printf("아무리 봐도 여기는 지구랑 자리가 완전히 같은 것 같았다.                                                                               \n");
    key = getch();
    gotoxy(1, 4), printf("나는 혼자 살았기에 상관이 없었지만, 만약 부모님이나 다른 사람이랑 같이 살았으면 쫌 아찔했을 것 같다.                                                  \n");
    key = getch();
    gotoxy(1, 4), printf("나는 집에 들어와 피곤한 몸을 침대로 던진 후 잠에 들었다.                                                                          \n");
    key = getch();
}