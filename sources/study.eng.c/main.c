#include <stdio.h>
#include "study_eng.h"


// 대화 데이터 초기화
struct Conversation conversations[] = {
    {"인사말", "hey",
     "hey: 친해진 뒤 사용! \nhow are you: 전에 만난 적 있는 사람에게 사용!"},
    {"이름묻기", "hi my name is jina", "hi i'm jina"},
    {"오랜만에 만날때", "nice to meet you", "good to see you again"},
    {"첫 만남 무례한 질문", "how old are you\nWhat's your job",
     "정말 물어보고 싶을때->\nMay i ask you age?\n what do you do for a "
     "living?"},
    {"친해지기 위해  쓰는 표현", " how old are you ",
     "what do you do in your free time"},
    {"맛이 어떤지 물어보기", "is it delicious?", "how does it taste?"},
    {"주문시 시간이 필요할때", " wait a minute",
     "atually, i think we need anoter time"},
    {"메뉴 결정을 했을때", "I decided", "I made a decision"},
    {"서비스인지 물어보기", "it's service?", "it's on us/ it's on the house"}};

// 단어 데이터 초기화
struct Word words[] = {
    {"가다 오다",
     "come: 화자와 청자가 가까워질 때 사용\ngo: 반대로 멀어질 때 사용"},
    {"패딩-padding", "puffer jacket"},
    {"우리 동네-my neighboor", "my neighborhood"},
    {"버스 정류장-bus station", "bus stop"},
    {"후드티-hood-T", "hoodie"},
    {"킥보드-kick board", "kick scooter"},
    {"미혼- solo", "single"},
    {"미팅-meeting", "blind date"},
    {"요리사-cooker", "cook"},
    {"토스트-toast", "grilled sandwich"},
    {"화장실-toilet", " bathroom "},
    {"아파트-apart", "apartment/building/complex"},
    {"원룸-one room", "studio apartment"},
    {"콘도-condo", "hotel"},
    {"빌라-villa/mansion", "apartment"},
    {"한시간 - a hour ", "an hour"},
    {"이틀전에-two days before", " two days ago "},
    {"10분 후에-after 10 minutes", "in 10 minutes"},
    {"그냥-just", "just because"},
    {"한국사람들-Korean people", "Koreans"}};

// main함수
int main() {
  int choice = 0;
  int choicee = 0;
  int choic = 0;
  int cho = 0;
  printf("----쉽게 배우는 생활영어----\n\n");
  do {
    printf("1) 회화 배우기    2) 단어 배우기    3) 종료하기\n\n");
    scanf_s("%d", &choice);

    switch (choice) {
      // 생활영어 회화 배우기 챕터
      case 1: {
        int subChoice = 0;
        do {
          printf("\n  <<생활 영어 회화 배우기>>    \n");
          printf("1) 인사하기  2) 물어보기  3) 주문하기  4) 종료하기\n\n");
          printf("선택: ");
          scanf_s("%d", &subChoice);

          if (subChoice == 1) {
            printf(" ---인사하기--- \n");
            printf("1) 인사말\n 2) 이름묻기\n 3) 오랜만에 만날 때\n");
            scanf_s("%d", &choicee);

            if (choicee == 1) {
              printConversation(conversations[choicee - 1]);
            } else if (choicee == 2) {
              printConversation(conversations[choicee - 1]);
            } else {
              printConversation(conversations[choicee - 1]);
            }
          } else if (subChoice == 2) {
            printf("---물어보기---\n\n");
            printf(
                "1)첫 만남 무례한 질문\n2)친해지기 위해서 쓰는 표현\n 3) "
                "맛이 어떤지 물어보기\n");
            scanf_s("%d", &choic);

            if (choic == 1) {
              printConversation(conversations[4 - choic]);
            } else if (choic == 2) {
              printConversation(conversations[6 - choic]);

            } else {
              printConversation(conversations[8 - choic]);
            }
          } else if (subChoice == 3) {
            printf("---주문하기----\n\n");
            printf(
                "1) 주문시 시간이 필요할때\n2) 결정을 했을때\n3)서비스인지 "
                "물얼보기");
            scanf_s("%d", &cho);

            if (cho == 1) {
              printConversation(conversations[7 - cho]);
            } else if (cho == 2) {
              printConversation(conversations[9 - cho]);
            } else if (cho == 3) {
              printConversation(conversations[11 - cho]);
            } else {
              printf("잘못된 선택입니다.");
              break;
            }

          } else if (subChoice != 4) {
            printf("잘못된 선택입니다. 다시 선택하세요.\n");
          }
        } while (subChoice != 4);
        break;
      }

      // 생활영어 단어 배우기 챕터
      case 2: {
        int subChoice = 0;
        printf(" << 생활영어 단어 배우기 >>  \n");
        do {
          printf(
              "1) 일상 용어    2) 건물    3) 회화할 때 주의할 용어    4) "
              "종료하기\n\n");
          printf("선택: ");
          scanf_s("%d", &subChoice);

          switch (subChoice) {
            case 1: {
              printf(
                  "\n1) 가다오다   2) 패딩   3) 우리동네   4) 버스 정류장   5) "
                  "후드티\n");
              printf(
                  "6) 킥보드   7) 미혼    8) 미팅   9) 요리사   10) 토스트\n");
              printf("선택: ");
              scanf_s("%d", &cho);

              if (cho >= 1 && cho <= 10) {
                printWord(words[cho - 1]);
              } else {
                printf("잘못된 선택입니다. 다시 선택하세요.\n");
              }
              break;
            }
            case 2: {
              printf(
                  "1) 화장실   2) 아파트   3) 원룸   4) 콘도   5) 빌라/맨션\n");
              printf("선택: ");
              scanf_s("%d", &cho);

              if (cho >= 1 && cho <= 5) {
                printWord(words[cho + 9]);  // 인덱스 10부터 건물 단어 시작
              } else {
                printf("잘못된 선택입니다. 다시 선택하세요.\n");
              }
              break;
            }
            case 3: {
              printf(
                  "1) 한 시간   2) 이틀 전에   3) 10분 후에   4) 그냥   5) "
                  "한국 사람들\n");
              printf("선택: ");
              scanf_s("%d", &cho);

              if (cho >= 1 && cho <= 5) {
                printWord(words[cho + 14]);  // 인덱스 15부터 회화할 때 주의할
                                             // 용어 시작
              } else {
                printf("잘못된 선택입니다. 다시 선택하세요.\n");
              }
              break;
            }
            case 4:
              printf("프로그램을 종료합니다.\n");
              break;
            default:
              printf("잘못된 선택입니다. 다시 선택하세요.\n");
          }
        } while (subChoice != 4);
        break;
      }
      case 3:
        printf("프로그램을 종료합니다.\n");
        break;
      default:
        printf("잘못된 선택입니다. 다시 선택하세요.\n");
    }
  } while (choice != 3);

  // 프로그램 종료 시 대화와 단어 데이터를 파일에 저장
  saveConversations(conversations,
                    sizeof(conversations) / sizeof(conversations[0]));
  saveWords(words, sizeof(words) / sizeof(words[0]));

  return 0;
}
