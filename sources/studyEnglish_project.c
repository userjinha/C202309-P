#include <stdio.h>
#include <string.h>

// 대화 데이터 구조체 정의
struct Conversation {
  char situation[50];
  char expression[100];
  char correction[100];
};

struct Word {
  char word[50];
  char explanation[100];
};

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
    {"주문시 시간이 필요할때", " wait a minute", "atually, i think we need anoter time"}
    };


// 단어 데이터 초기화
struct Word words[] = {
    {"약속",
     "promise: 결심 및 다짐\nplans: "
     "이미 예정된 일정이 있음을 알릴 때 사용"},
    {"가다 오다",
     "come: 화자와 청자가 가까워질 때 사용\ngo: 반대로 멀어질 때 사용"}};

// 대화 출력 함수
void printConversation(struct Conversation convo) {
  printf("---%s---\n", convo.situation);
  printf("%s\n", convo.expression);
  printf("----정정----\n");
  printf("%s\n", convo.correction);
}

// 단어 출력 함수
void printWord(struct Word wd) {
  printf("---%s---\n", wd.word);
  printf("%s\n", wd.explanation);
}



  int main() {

    // 메뉴 선택 변수
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
              printf("1) 인사말\n 2) 물어보기\n 3) 오랜만에 만날 때\n");
              scanf_s("%d", &choicee);

              if (choicee == 1) {
                printConversation(conversations[choicee - 1]);
              } else if (choicee == 2) {
               
                printConversation(conversations[choicee - 1]);
              } else {
                printConversation(conversations[choicee - 1]);
              }
            } 
            else if (subChoice == 2) {
              printf("---물어보기---\n\n");
              printf(
                  "1)첫 만남 무례한 질문 2)친해지기 위해서 쓰는 표현 3) "
                  "맛이 어떤지 물어보기");
              scanf_s("%d", &choic);

              if (choic == 1) {
                printConversation(conversations[4-choic]);
              } else if (choic == 2) {
                printConversation(conversations[6- choic]);
                
              } else {
                printConversation(conversations[8-choic]);
               
              }
            } 
           else if (subChoice == 3) {
              printf("---주문하기----\n\n");
              printf("1) 주문시 시간이 필요할때");
              scanf_s("%d", &cho);

              if (cho == 1) {
                printConversation(conversations[7- cho]);
              } else {
                printf("잘못된 선택입니다.");
                break;
              }
            
            
            
            }
            else if (subChoice != 4) {
              printf("잘못된 선택입니다. 다시 선택하세요.\n");
            }
          } while (subChoice != 4);
          break;
        }
              // 생활영어 단어 배우기 챕터
        case 2: {
          int subChoice = 0;
          do {
            printf(" << 생활영어 단어 배우기 >>  \n");
            printf("1) 약속   2) 가다 오다   3) 종료하기\n");
            printf("선택: ");
            scanf_s("%d", &subChoice);

            if (subChoice >= 1 && subChoice <= 2) {
              // 해당하는 단어 출력
              printWord(words[subChoice - 1]);
            } else if (subChoice != 3) {
              printf("잘못된 선택입니다. 다시 선택하세요.\n");
            }
          } while (subChoice != 3);
          break;
        }
      }
    } while (choice != 3);

    printf("프로그램을 종료합니다.\n");

    return 0;
  }
