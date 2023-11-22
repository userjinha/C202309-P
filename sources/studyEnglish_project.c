#include <stdio.h>
#include <string.h>

// ��ȭ ������ ����ü ����
struct Conversation {
  char situation[50];
  char expression[100];
  char correction[100];
};

struct Word {
  char word[50];
  char explanation[100];
};

// ��ȭ ������ �ʱ�ȭ
struct Conversation conversations[] = {
    {"�λ縻", "hey",
     "hey: ģ���� �� ���! \nhow are you: ���� ���� �� �ִ� ������� ���!"},
    {"�̸�����", "hi my name is jina", "hi i'm jina"},
    {"�������� ������", "nice to meet you", "good to see you again"},
    {"ù ���� ������ ����", "how old are you\nWhat's your job",
     "���� ����� ������->\nMay i ask you age?\n what do you do for a "
     "living?"},
    {"ģ������ ����  ���� ǥ��", " how old are you ",
     "what do you do in your free time"},
    {"���� ��� �����", "is it delicious?", "how does it taste?"},
    {"�ֹ��� �ð��� �ʿ��Ҷ�", " wait a minute", "atually, i think we need anoter time"}
    };


// �ܾ� ������ �ʱ�ȭ
struct Word words[] = {
    {"���",
     "promise: ��� �� ����\nplans: "
     "�̹� ������ ������ ������ �˸� �� ���"},
    {"���� ����",
     "come: ȭ�ڿ� û�ڰ� ������� �� ���\ngo: �ݴ�� �־��� �� ���"}};

// ��ȭ ��� �Լ�
void printConversation(struct Conversation convo) {
  printf("---%s---\n", convo.situation);
  printf("%s\n", convo.expression);
  printf("----����----\n");
  printf("%s\n", convo.correction);
}

// �ܾ� ��� �Լ�
void printWord(struct Word wd) {
  printf("---%s---\n", wd.word);
  printf("%s\n", wd.explanation);
}



  int main() {

    // �޴� ���� ����
    int choice = 0;
    int choicee = 0;
    int choic = 0;
    int cho = 0;
    printf("----���� ���� ��Ȱ����----\n\n");
    do {
     
      printf("1) ȸȭ ����    2) �ܾ� ����    3) �����ϱ�\n\n");
      scanf_s("%d", &choice);

      switch (choice) {
          // ��Ȱ���� ȸȭ ���� é��
        case 1: {
          int subChoice = 0;
          do {
            printf("\n  <<��Ȱ ���� ȸȭ ����>>    \n");
            printf("1) �λ��ϱ�  2) �����  3) �ֹ��ϱ�  4) �����ϱ�\n\n");
            printf("����: ");
            scanf_s("%d", &subChoice);

            if (subChoice == 1) {
              printf(" ---�λ��ϱ�--- \n");
              printf("1) �λ縻\n 2) �����\n 3) �������� ���� ��\n");
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
              printf("---�����---\n\n");
              printf(
                  "1)ù ���� ������ ���� 2)ģ������ ���ؼ� ���� ǥ�� 3) "
                  "���� ��� �����");
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
              printf("---�ֹ��ϱ�----\n\n");
              printf("1) �ֹ��� �ð��� �ʿ��Ҷ�");
              scanf_s("%d", &cho);

              if (cho == 1) {
                printConversation(conversations[7- cho]);
              } else {
                printf("�߸��� �����Դϴ�.");
                break;
              }
            
            
            
            }
            else if (subChoice != 4) {
              printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
            }
          } while (subChoice != 4);
          break;
        }
              // ��Ȱ���� �ܾ� ���� é��
        case 2: {
          int subChoice = 0;
          do {
            printf(" << ��Ȱ���� �ܾ� ���� >>  \n");
            printf("1) ���   2) ���� ����   3) �����ϱ�\n");
            printf("����: ");
            scanf_s("%d", &subChoice);

            if (subChoice >= 1 && subChoice <= 2) {
              // �ش��ϴ� �ܾ� ���
              printWord(words[subChoice - 1]);
            } else if (subChoice != 3) {
              printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
            }
          } while (subChoice != 3);
          break;
        }
      }
    } while (choice != 3);

    printf("���α׷��� �����մϴ�.\n");

    return 0;
  }
