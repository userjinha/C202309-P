#include <stdio.h>
#include "study_eng.h"


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
    {"�ֹ��� �ð��� �ʿ��Ҷ�", " wait a minute",
     "atually, i think we need anoter time"},
    {"�޴� ������ ������", "I decided", "I made a decision"},
    {"�������� �����", "it's service?", "it's on us/ it's on the house"}};

// �ܾ� ������ �ʱ�ȭ
struct Word words[] = {
    {"���� ����",
     "come: ȭ�ڿ� û�ڰ� ������� �� ���\ngo: �ݴ�� �־��� �� ���"},
    {"�е�-padding", "puffer jacket"},
    {"�츮 ����-my neighboor", "my neighborhood"},
    {"���� ������-bus station", "bus stop"},
    {"�ĵ�Ƽ-hood-T", "hoodie"},
    {"ű����-kick board", "kick scooter"},
    {"��ȥ- solo", "single"},
    {"����-meeting", "blind date"},
    {"�丮��-cooker", "cook"},
    {"�佺Ʈ-toast", "grilled sandwich"},
    {"ȭ���-toilet", " bathroom "},
    {"����Ʈ-apart", "apartment/building/complex"},
    {"����-one room", "studio apartment"},
    {"�ܵ�-condo", "hotel"},
    {"����-villa/mansion", "apartment"},
    {"�ѽð� - a hour ", "an hour"},
    {"��Ʋ����-two days before", " two days ago "},
    {"10�� �Ŀ�-after 10 minutes", "in 10 minutes"},
    {"�׳�-just", "just because"},
    {"�ѱ������-Korean people", "Koreans"}};

// main�Լ�
int main() {
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
            printf("1) �λ縻\n 2) �̸�����\n 3) �������� ���� ��\n");
            scanf_s("%d", &choicee);

            if (choicee == 1) {
              printConversation(conversations[choicee - 1]);
            } else if (choicee == 2) {
              printConversation(conversations[choicee - 1]);
            } else {
              printConversation(conversations[choicee - 1]);
            }
          } else if (subChoice == 2) {
            printf("---�����---\n\n");
            printf(
                "1)ù ���� ������ ����\n2)ģ������ ���ؼ� ���� ǥ��\n 3) "
                "���� ��� �����\n");
            scanf_s("%d", &choic);

            if (choic == 1) {
              printConversation(conversations[4 - choic]);
            } else if (choic == 2) {
              printConversation(conversations[6 - choic]);

            } else {
              printConversation(conversations[8 - choic]);
            }
          } else if (subChoice == 3) {
            printf("---�ֹ��ϱ�----\n\n");
            printf(
                "1) �ֹ��� �ð��� �ʿ��Ҷ�\n2) ������ ������\n3)�������� "
                "���󺸱�");
            scanf_s("%d", &cho);

            if (cho == 1) {
              printConversation(conversations[7 - cho]);
            } else if (cho == 2) {
              printConversation(conversations[9 - cho]);
            } else if (cho == 3) {
              printConversation(conversations[11 - cho]);
            } else {
              printf("�߸��� �����Դϴ�.");
              break;
            }

          } else if (subChoice != 4) {
            printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
          }
        } while (subChoice != 4);
        break;
      }

      // ��Ȱ���� �ܾ� ���� é��
      case 2: {
        int subChoice = 0;
        printf(" << ��Ȱ���� �ܾ� ���� >>  \n");
        do {
          printf(
              "1) �ϻ� ���    2) �ǹ�    3) ȸȭ�� �� ������ ���    4) "
              "�����ϱ�\n\n");
          printf("����: ");
          scanf_s("%d", &subChoice);

          switch (subChoice) {
            case 1: {
              printf(
                  "\n1) ���ٿ���   2) �е�   3) �츮����   4) ���� ������   5) "
                  "�ĵ�Ƽ\n");
              printf(
                  "6) ű����   7) ��ȥ    8) ����   9) �丮��   10) �佺Ʈ\n");
              printf("����: ");
              scanf_s("%d", &cho);

              if (cho >= 1 && cho <= 10) {
                printWord(words[cho - 1]);
              } else {
                printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
              }
              break;
            }
            case 2: {
              printf(
                  "1) ȭ���   2) ����Ʈ   3) ����   4) �ܵ�   5) ����/�Ǽ�\n");
              printf("����: ");
              scanf_s("%d", &cho);

              if (cho >= 1 && cho <= 5) {
                printWord(words[cho + 9]);  // �ε��� 10���� �ǹ� �ܾ� ����
              } else {
                printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
              }
              break;
            }
            case 3: {
              printf(
                  "1) �� �ð�   2) ��Ʋ ����   3) 10�� �Ŀ�   4) �׳�   5) "
                  "�ѱ� �����\n");
              printf("����: ");
              scanf_s("%d", &cho);

              if (cho >= 1 && cho <= 5) {
                printWord(words[cho + 14]);  // �ε��� 15���� ȸȭ�� �� ������
                                             // ��� ����
              } else {
                printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
              }
              break;
            }
            case 4:
              printf("���α׷��� �����մϴ�.\n");
              break;
            default:
              printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
          }
        } while (subChoice != 4);
        break;
      }
      case 3:
        printf("���α׷��� �����մϴ�.\n");
        break;
      default:
        printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
    }
  } while (choice != 3);

  // ���α׷� ���� �� ��ȭ�� �ܾ� �����͸� ���Ͽ� ����
  saveConversations(conversations,
                    sizeof(conversations) / sizeof(conversations[0]));
  saveWords(words, sizeof(words) / sizeof(words[0]));

  return 0;
}
