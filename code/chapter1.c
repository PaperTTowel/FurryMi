#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
//#include <digitalv.h>

void chapter1(HINSTANCE hInstance,char name[10]){ // 챕터 1 담당자: 30507 김원혁
    static char key;
    printf("\t챕터1\n================================================================================\n\n\n");
    Sleep(1500);
    PlaySound(TEXT(".\\audio\\[BGM]ゆるいBGM.wav"), 0, SND_ASYNC | SND_LOOP);
    gotoxy(1, 4), printf("어제의 일 때문에 몸이 무겁게 느껴졌다.\n");
    key = getch();
    gotoxy(1, 4), printf("하지만 학교를 갈 준비를 해야한다.         \n");
    key = getch();
    gotoxy(1, 4), printf("나는 일어나기 싫은 침대에서 내 몸을 간신히 일으켰다.\n");
    key = getch();
    gotoxy(1, 4), printf("그리고 씻으러 화장실로 향했다.                        \n");
    key = getch();
    gotoxy(1, 4), printf("화장실로 향한 나는 세수와 양치를 하고 아무것도 없는 부엌에\n 그나마 찬장에 쌓아놓은 편의점 멜론빵을 하나 집어 입에 물고 학교로 향했다.\n");
    key = getch();

    HBITMAP hBMP = (HBITMAP)LoadImage(NULL, ".\\texture\\golmok1.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    HWND imgControl = CreateWindow("STATIC", "학교 옥상", WS_VISIBLE | SS_BITMAP, 1000, 100, 800, 600, NULL, NULL, hInstance, NULL);
    SendMessage(imgControl, STM_SETIMAGE, IMAGE_BITMAP, hBMP);

    gotoxy(1, 4), printf("\"으아... 덥다...\"                                                   \n                                                                                  \n");
    key = getch();
    gotoxy(1, 4), printf("초여름이어서 그런지 밖이 아침인데도 불구하고 습하고 조금 더웠다.\n");
    key = getch();
    gotoxy(1, 4), printf("나는 더위에 축 늘어진 슬라임처럼 늘어져서 천천히 걸어가며             \n 어제 히비키랑 헤어진 골목을 통해 학교에 가려고 몸을 트는 순간 나는 무언가에 부딪쳐서 넘어졌다.\n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"아!\"                                                               \n                                                                                                      \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("철푸덕\n");
    key = getch();
    gotoxy(1, 4), printf("나는 무언가 복슬복슬한 것에 부딪친 느낌이었다.\n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"엇! 괜찮아? 미안...\"                           \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("익숙한 목소리였다.                                    \n");
    key = getch();
    gotoxy(1, 4), printf("나는 익숙한 목소리에 얼굴을 올려다 보았다.\n");
    key = getch();
    gotoxy(1, 4), printf("\"히비키?\"                                   \n");
    key = getch();

    HBITMAP hib = (HBITMAP)LoadImage(NULL, ".\\texture\\hibiki.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    HWND imgControl_h = CreateWindow("STATIC", "히비키", WS_VISIBLE | SS_BITMAP, 795, 10, 200, 200, NULL, NULL, hInstance, NULL);
    SendMessage(imgControl_h, STM_SETIMAGE, IMAGE_BITMAP, hib);

    gotoxy(1, 4), printf("히비키였다. \'왜... 여기에 있는 거지?\'\n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"안녕~, 근데 괜찮아?\"                   \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("히비키가 걱정하는 표정으로 물었다.\n");
    key = getch();
    gotoxy(1, 4), printf("\"응. 괜찮아. 근데 왜 여기에 서 있었던거야?\"\n");
    key = getch();
    gotoxy(1, 4), printf("나는 먼지와 털을 털며 일어났다.                       \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"%s를 기달리고 있었어\"              \n", name);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("\"나를?\"                           \n");
    key = getch();
    gotoxy(1, 4), printf("나는 내가 잘못들은 줄 알았다.\n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"응! 같이 등교하자\"         \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("나는 같이 등교하자는 히비키에게 잡혀 끌려갔다.\n");
    key = getch();
    gotoxy(1, 4), printf("\"왜 나를 기다린거야?\"                           \n");
    key = getch();
    gotoxy(1, 4), printf("진짜 순수한 궁금증이었다.\n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"그야 가는 길이 겹치니까 같이가면 좋을 것 같아서~!\"\n");
    key = getch();
    gotoxy(1, 4), printf("\"그리고 나는 여기 학교로 전학온지 얼마 안 돼서 같이 등교할 친구가 없어...\"\n");
    key = getch();
    gotoxy(1, 4), printf("\"그래서 같이 등교하면 좋을 것 같아서...\"                                                \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    gotoxy(1, 4), printf("왠지 모르게 히비키는 부끄러워하는 것 같았다.\n");
    key = getch();
    gotoxy(1, 4), printf("\"그렇구나. 왠지 고맙네\"                         \n");
    key = getch();
    DestroyWindow(imgControl);
    gotoxy(1, 4), printf("이렇게 우리는 이런저런 이야기를 하면서 학교에 도착하였다.\n");
    key = getch();
    DestroyWindow(imgControl_h);
    gotoxy(1, 4), printf("히비키랑 나는 반이 달라서 각자의 반으로 갔다.                 \n");
    key = getch();
    gotoxy(1, 4), printf("시끌벅적한 교실에는 털들이 휘날리고 있었다.       \n");
    key = getch();
    gotoxy(1, 4), printf("\"오우 ㅅㅂ 기관지가 살려달라는 소리가 여기까지 들리는군.\"\n");
    key = getch();
    gotoxy(1, 4), printf("환기를 하려고 문을 열어도 괜찮아질 기미가 보이질 않았다.          \n");
    key = getch();
    gotoxy(1, 4), printf("엄청난 털과 함께 지루한 2교시 수업이 끝났다.                  \n");
    key = getch();
    gotoxy(1, 4), printf("나는 반에서 나와 옥살으로 향했다.             \n");
    key = getch();

    HBITMAP hBMP1 = (HBITMAP)LoadImage(NULL, ".\\texture\\schoolRooftop.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    HWND imgControl1 = CreateWindow("STATIC", "학교 옥상", WS_VISIBLE | SS_BITMAP, 1000, 100, 800, 600, NULL, NULL, hInstance, NULL);
    SendMessage(imgControl1, STM_SETIMAGE, IMAGE_BITMAP, hBMP1);

    gotoxy(1, 4), printf("계속 반에만 앉아 있으면 털이 내 기도를 막을 것 같았기 때문이다.\n");
    key = getch();
    gotoxy(1, 4), printf("아무리 봐도 기관지염 한번 걸리면 ㅈ될 것 같았다.                      \n");
    key = getch();
    gotoxy(1, 4), printf("\"휴... 살거같다\"                                \n");
    key = getch();
    gotoxy(1, 4), printf("한숨을 돌리고 있는 중 누가 내 등을 건드리며 날 불렀다.\n");
    key = getch();

    HBITMAP hib2 = (HBITMAP)LoadImage(NULL, ".\\texture\\hibiki.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    HWND imgControl_h1 = CreateWindow("STATIC", "히비키", WS_VISIBLE | SS_BITMAP, 795, 10, 200, 200, NULL, NULL, hInstance, NULL);
    SendMessage(imgControl_h1, STM_SETIMAGE, IMAGE_BITMAP, hib2);

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"안녕~?\"                                                \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("히비키였다.\n");
    key = getch();
    gotoxy(1, 4), printf("\"안녕.\"         \n");
    key = getch();
    gotoxy(1, 4), printf("나는 뒤로 돌아 인사했다.\n");
    key = getch();
    gotoxy(1, 4), printf("다만 이번에는 히비키 옆에 누군가가 서 있었다.\n");
    key = getch();
    gotoxy(1, 4), printf("자세히 보니 고양이 수인이었다.                            \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    gotoxy(1, 4), printf("\"안~녕~\"                                    \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();

    HBITMAP kas = (HBITMAP)LoadImage(NULL, ".\\texture\\kasumi.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    HWND imgControl_k = CreateWindow("STATIC", "카스미", WS_VISIBLE | SS_BITMAP, 590, 10, 200, 200, NULL, NULL, hInstance, NULL);
    SendMessage(imgControl_k, STM_SETIMAGE, IMAGE_BITMAP, kas);

    gotoxy(1, 4), printf("금빛 털과 에메랄드 색의 눈이 인상적인 고양이 수인 여학생이 히비키 뒤에서 나오면서 인사하였다.\n");
    key = getch();
    gotoxy(1, 4), printf("\"안녕.\"                                                                                             \n");
    key = getch();
    gotoxy(1, 4), printf("나도 인사하였다.\n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    gotoxy(1, 4), printf("\"나는 타치바나 카스미, 카스미라고 불러줘~.\"\n");
    key = getch();
    gotoxy(1, 4), printf("\"그나저나 너가 히비키가 새로 사귄 남자친구야?\"      \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();

    int choice1;
    gotoxy(0, 12), printf("┌──────────────────────────────────────────┐\n"), Sleep(20);
    printf("│"), gotoxy(43, 13), printf("│"), Sleep(20);
    gotoxy(8, 13), printf("a. ? || b. (부정한다)\n");
    printf("├──────────────────────────────────────────┤\n"), Sleep(20);
    printf("│"), gotoxy(43, 15), printf("│\n"), Sleep(20);
    printf("└──────────────────────────────────────────┘\n"), Sleep(20);
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
        gotoxy(1, 4), printf("시이벌 내가 방금 뭘 들은거지?\n");
        key = getch();
        gotoxy(1, 4), printf("나랑 히비키 둘다 머리가 띵해졌다.\n");
        key = getch();
        goto return1;
    case 'b':
        gotoxy(0, 12), printf("                                             \n"), Sleep(20);
        gotoxy(0, 13), printf("                                             \n"), Sleep(20);
        gotoxy(0, 14), printf("                                             \n"), Sleep(20);
        gotoxy(0, 15), printf("                                             \n"), Sleep(20);
        gotoxy(0, 16), printf("                                             \n"), Sleep(20);
        gotoxy(1, 4), printf("\"아닌데?\"                                                         \n");
        key = getch();
        gotoxy(1, 4), printf("갑자기 그런 말을 들으니깐 나랑 히비키 둘다 머리가 띵해졌다.\n");
        key = getch();
        goto return1;
    default: // 잘못된 입력 = choice 값이 a, b가 아닐 경우 다시 choice1으로 이동하여 반복
        gotoxy(5, 15), printf("                                 ");
        goto choice01;
    }

return1:
    gotoxy(1, 4), printf("히비키가 정신을 차리고 얼굴을 붉히며 부정을 하였다.                       \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"ㅇ...아니아니 ㅁ...뭔소리야!\"                      \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("나 또한 히비키가 하는 말을 듣고 스턴 상태에서 빠져나왔다.\n");
    key = getch();
    gotoxy(1, 4), printf("\"아...아니 그냥 친구사이야.\"                                \n");
    key = getch();
    gotoxy(1, 4), printf("아무리 봐도 저 카스미 눈에서는 우리가 먹잇감으로 보이는 느낌이었다.\n");
    key = getch();
    gotoxy(1, 4), printf("다시말해 장난치기 딱 좋은 먹잇감이란 소리이다.                        \n");
    key = getch();
    gotoxy(1, 4), printf("\"크흠... 아무튼 난 %s, %s라 불러줘. 잘부탁해.\n", name, name);
    key = getch();
    gotoxy(1, 4), printf("\"너는 히비키의 친구지?\"                                                             \n");
    key = getch();
    gotoxy(1, 4), printf("나는 빨리 이야기의 화재를 돌리려고 안간힘을 썼다.\n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    gotoxy(1, 4), printf("\"응... 에이.. 재미없네~~\"                           \n");
    key = getch();
    gotoxy(1, 4), printf("\"난 또 히비키가 이성 친구를 만들었다길레 남친인줄 알았더니~~\"\n");
    key = getch();
    gotoxy(1, 4), printf("\"그렇다면 내가 가져가도 되는거네? 그럼 난 어때~?\"                       \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("\"...?\"                                              \n");
    key = getch();
    gotoxy(1, 4), printf("어지럽네.     \n");
    key = getch();
    gotoxy(1, 4), printf("\"..........?!?!?!?!??\"\n");
    key = getch();
    gotoxy(1, 4), printf("아니 미친, 이새끼는 뭔가 위험하다.\n");
    key = getch();
    gotoxy(1, 4), printf("히비키와 나 둘다 스턴을 씨게 맞은 느낌이었다.\n");
    key = getch();
    gotoxy(1, 4), printf("특히 히비키가.                                    \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    gotoxy(1, 4), printf("\"장난이야~~. 너네 반응 웃기다wwwwww\"        \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("미친 카스미의 개씹 쩌는 말빨에 존나 휘둘리던 우리는 3교시 수업 종이 울림과 동시에 멈추었다.\n");
    key = getch();
    PlaySound(TEXT(".\\audio\\[SE]schoolBell.wav"), 0, SND_ASYNC);
    gotoxy(1, 4), printf("딩동댕동                                                                                              \n");
    key = getch();
    gotoxy(1, 4), printf("\"어. 수업 시작한다. 우리 빨리 가야겠다.\"\n");
    key = getch();
    gotoxy(1, 4), printf("나는 털리던 맨탈은 종소리를 들음으로써 잡을 수 있었다.\n");
    key = getch();
    gotoxy(1, 4), printf("내 말을 들은 히비키도 정신을 차렸는지 아차 하는 얼굴이었다.\n");
    key = getch();
    PlaySound(TEXT(".\\audio\\[BGM]ゆるいBGM.wav"), 0, SND_ASYNC | SND_LOOP);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    gotoxy(1, 4), printf("\"아무튼 잘 지내보자구~\"                                         \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    key = getch();
    gotoxy(1, 4), printf("카스미는 장난감이 생겨서 신나는 듯이 말했다.\n");
    key = getch();
    DestroyWindow(imgControl1);
    DestroyWindow(imgControl_h1);
    DestroyWindow(imgControl_k);
    gotoxy(1, 4), printf("그렇게 해어진 후 나는 다시 털이 날아다니는 반으로 돌아왔다.\n");
    key = getch();
    gotoxy(1, 4), printf("그 와중에 어떤 새끼가 열어놓았던 창문을 닫았다.                    \n");
    key = getch();
    gotoxy(1, 4), printf("미친 것이 분명하다. 나는 바로 달려가 창문을 열어버렸다.          \n");
    key = getch();
    gotoxy(1, 4), printf("\"와.... 이제야 좀 살 것 같다...\"                           \n");
    key = getch();
    gotoxy(1, 4), printf("내 폐에 박힌 털을 신선한 공기로 빼면서 3, 4교시를 보냈다.          \n");
    key = getch();
    gotoxy(1, 4), printf("\"아. 오늘 점심 뭐먹지..? 빵이나 먹을까?\"                     \n");
    key = getch();
    gotoxy(1, 4), printf("어느덧 점심시간이 다가왔다.                   \n");
    key = getch();
    gotoxy(1, 4), printf("학교에서 털 때문에 체력이 많이 떨어진 나는 많이 배고팠다.     \n");
    key = getch();
    gotoxy(1, 4), printf("무엇을 점심으로 먹을지 고민하며 점심시간만을 기다리고 있었다.       \n");
    key = getch();

    PlaySound(TEXT(".\\audio\\[SE]schoolBell.wav"), 0, SND_ASYNC);
    gotoxy(1, 4), printf("띵~동~댕~동~                                                       \n");
    key = getch();

    gotoxy(1, 4), printf("점심시간 종이다.            \n");
    key = getch();
    gotoxy(1, 4), printf("나는 책상 위를 정리하고 챙겨온 점심을 챙겨 옥상으로 올라갔다.        \n");
    key = getch();
    gotoxy(1, 4), printf("내 점심은 매론 빵이다. 그리고 학교 자판기에서 뽑은 이온 음료다.          \n");
    key = getch();
    gotoxy(1, 4), printf("나는 경치가 잘 보이는 곳에 있는 벤치 위에 앉아서 마을 경치를 구경하면서 빵을 뜯어 먹기 시작했다.\n");
    key = getch();
    gotoxy(1, 4), printf("멀리서 보면 아니 가까이서 봐도 찐따처럼 보일 것이다.                                                    \n");
    key = getch();
    gotoxy(1, 4), printf("옥상 밴치에 쭈구려 앉아서 혼자 빵을 먹고 있는 찐다.                    \n");
    key = getch();

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    gotoxy(1, 4), printf("\"똑똑?\"                                          \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    gotoxy(1, 4), printf("누군가가 내 등 뒤에서 날 불렀다.                   \n");
    key = getch();
    gotoxy(1, 4), printf("날 부를 사람이 없었기에 나는 당황해서 뒤를 돌아보려 했다.    \n");
    key = getch();

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 20);
    gotoxy(1, 4), printf("퍽");
    for(short i = 2; i <= 7; i++){ // 비상!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
        gotoxy(i, 4), printf("!"), Sleep(50);
    }
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    gotoxy(1, 4), printf("무언가가 뒤를 돌아보려는 내 머리를 강타했다.                 \n");
    key = getch();
    gotoxy(1, 4), printf("나는 앞으로 고꾸라질뻔한 내 몸을 일으켜 세우려 안간힘을 썻다.          \n");
    key = getch();

    for(short i = 1; i <= 7; i++){ // 비상!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
        gotoxy(i, 4), printf("?"), printf("!"), Sleep(50);
    }
    key = getch();

    gotoxy(1, 4), printf("나는 더욱 당황해하면서 뒤를 돌아봤다.                           \n");
    key = getch();
    gotoxy(1, 4), printf("그곳에는 히비키와 카스미가 서있었다.                    \n");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    gotoxy(1, 4), printf("\"ㅋㅋㅋㅋ 어이 왜 찐따처럼 앉아 빵을 먹고 있는 거야?\"           \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    gotoxy(1, 4), printf("카스미의 장난 섞인 말이 날라와 내 가슴에 날라와 박혔다.               \n");
    key = getch();
    gotoxy(1, 4), printf("분명 내 머리를 때린 것도 이놈일 것이다.                          \n");
    key = getch();

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"으아.. 카스미 너 뭔짓을 하는거야!\"          \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    gotoxy(1, 4), printf("히비키가 카스미에게 말했다.                         \n");
    key = getch();
    gotoxy(1, 4), printf("히비키의 얼굴에는 당황했다는 표정이 고스란히 나와있었다.             \n");
    key = getch();

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"괜찮아?\"                                               \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    gotoxy(1, 4), printf("히비키는 나에게 걱정하는 표정을 지으면서 말했다.             \n");
    key = getch();
    gotoxy(1, 4), printf("\"난 괜찮아. 그것보다 말이 더 아픈데...?\"                     \n");
    key = getch();
    gotoxy(1, 4), printf("진심으로 머리를 맞은 것보다 카스미의 말이 100배는 더 아팠던 것 같다.         \n");
    key = getch();

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    gotoxy(1, 4), printf("\"ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ\"                                               \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    
    gotoxy(1, 4), printf("카스미는 장난끼 넘치는 표정으로 웃고 있었다.                   \n");
    key = getch();
    gotoxy(1, 4), printf("\"그래서, 왜 온 거야?\"                                  \n");
    key = getch();
    gotoxy(1, 4), printf("내가 물어봤다.                                 \n");
    key = getch();

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    gotoxy(1, 4), printf("\"난 히비키를 따라왔어!\"                         \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    gotoxy(1, 4), printf("카스미가 말했다.                       \n");
    key = getch();
    gotoxy(1, 4), printf("\"그럼 히비키는 왜 온거야?\"               \n");
    key = getch();

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"가...같이... 점심 먹으려고요...\"                    \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    gotoxy(1, 4), printf("히비키가 수줍어하며 말했다.                      \n");
    key = getch();
    gotoxy(0, 12), printf("┌────────────────────────────────────────────────────────┐\n"), Sleep(20);
    printf("│"), gotoxy(43, 13), printf("│"), Sleep(20);
    gotoxy(8, 13), printf("a.그래! 같이 먹자. || b.미안 난 찐따여서 혼자 먹어야 겠는걸?\n");
    printf("├────────────────────────────────────────────────────────┤\n"), Sleep(20);
    printf("│"), gotoxy(43, 15), printf("│\n"), Sleep(20);
    printf("└────────────────────────────────────────────────────────┘\n"), Sleep(20);

    int choice2;
choice02:
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(3, 15), printf("> "), scanf("%c", &choice2);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    switch(choice2){ // 스위치 문 choice의 변수값 확인
    case 'a': // 뒤 돌아보기 = choice 값에 a가 있을 경우 아래 코드 실행
        gotoxy(0, 12), printf("                                             \n"), Sleep(20);
        gotoxy(0, 13), printf("                                             \n"), Sleep(20);
        gotoxy(0, 14), printf("                                             \n"), Sleep(20);
        gotoxy(0, 15), printf("                                             \n"), Sleep(20);
        gotoxy(0, 16), printf("                                             \n"), Sleep(20);
        gotoxy(1, 4), printf("히비키와 카스미는 내 옆에 앉아 도시락을 먹을 준비를 했다.                                   \n");
        key = getch();
        goto return2; // return1 로 이동
    case 'b': // 무시하기 = choice 값에 b가 있을 경우 아래 코드 실행
        gotoxy(0, 12), printf("                                             \n"), Sleep(20);
        gotoxy(0, 13), printf("                                             \n"), Sleep(20);
        gotoxy(0, 14), printf("                                             \n"), Sleep(20);
        gotoxy(0, 15), printf("                                             \n"), Sleep(20);
        gotoxy(0, 16), printf("                                             \n"), Sleep(20);
        gotoxy(0, 16), printf("거절을 할려고 하였지만 이미 카스미는 내 옆에 앉아서 도시락을 먹을 준비를 하고 있었다.                                             \n"), Sleep(20);
        key = getch();
        goto return2;
    default: // 잘못된 입력 = choice 값이 a, b가 아닐 경우 다시 choice1으로 이동하여 반복
        gotoxy(5, 15), printf("                                 ");
        goto choice02;
    }

return2:
    gotoxy(1, 4), printf("어쩐지 옆에서 카스미가 킥킥대는 소리가 들렸다.                                                         \n");
    key = getch();
    gotoxy(1, 4), printf("카스미와 히비키의 도시락 통 둘다 각자의 개성이 뿜어져 나오는 도시락통이다.     \n");
    key = getch();

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    gotoxy(1, 4), printf("\"응? 유키는 매론빵이랑 에너지 드링크가 점심인거야?\"                               \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    gotoxy(1, 4), printf("카스미가 내 빵과 에너지 드링크를 보면서 물었다.                           \n");
    key = getch();
    gotoxy(1, 4),printf("\"응. 딱히 아침부터 도시락을 만드는 데에 에너지를 쓰고 싶지 않아서.\"          \n");
    key = getch();
    gotoxy(1, 4), printf("솔직히 아침 일찍 일어나서 도시락을 만드는 것은 너무 힘들다.                   \n");
    key = getch();
    gotoxy(1, 4), printf("몇 번 시도했다가 너무 힘들어서 포기하고 걍 빵으로 점심을 때우고 있다.                \n");
    key = getch();

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    gotoxy(1, 4), printf("\"흐음~ 그럼 내 도시락 반찬 조금 줄게. 자!\"                                \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    gotoxy(1, 4), printf("카스미는 자기 도시락의 반찬을 몇 개 집어서 내 빵 위에 올려놓았다.         \n");
    key = getch();

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(1, 4), printf("\"엇! 그.. 그럼 저도 조금 드릴게요!\"                                      \n");
    key = getch();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    gotoxy(1, 4), printf("히비키도 카스미의 말을 듣고 도시락에서 반찬 몇 개를 집어서 내 빵 위에 올려놨다.        \n");
    key = getch();
    gotoxy(1, 4), printf("그렇게 우리는 옥상 벤치에 앉아서 점심을 먹었다.                                       \n");
    key = getch();
    gotoxy(1, 4), printf("엄청 맛있었다.                                                                      \n");
    key = getch();
    gotoxy(1, 4),printf("다만                                \n");
    key = getch();
    gotoxy(1, 4), printf("받은 반찬에서 조금의 털이 나왔다.             \n");
    key = getch();
    gotoxy(1, 4), pirntf("음~ 역시 수인이 만든 음식이야.                \n");
    key = getch();
    gotoxy(1, 4), printf("털이 조금 묻은 점심을 다 먹은 우리는 오후 수업을 위해 각자의 반으로 돌아갔다.         \n");
    key = getch();
    gotoxy(1, 4), printf("반에 돌아오자 마자 털들이 내 기도를 막는 것을 느끼고는 반마다 고성능 공기청정기가 필요할 것 같다고 생각했다.");
    key = getch();

}