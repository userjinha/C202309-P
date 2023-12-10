#include "study_eng.h"

#include <stdio.h>

// ��ȭ ��� �Լ�
void printConversation(struct Conversation *convo) {
  printf("---%s---\n", convo->situation);
  printf("%s\n", convo->expression);
  printf("----����----\n");
  printf("%s\n", convo->correction);
}

// �ܾ� ��� �Լ�
void printWord(struct Word *wd) {
  printf("---%s---\n", wd->word);
  printf("%s\n", wd->explanation);
}

// ��ȭ �����͸� ���Ͽ� �����ϴ� �Լ�
void saveConversations(struct Conversation *conversations, int size) {
  FILE *file;
  fopen_s(&file, "conversations.txt", "w");  // ��ȭ �����͸� ������ ���ϸ�
  if (file == NULL) {
    printf("������ �� �� �����ϴ�.\n");
    return;
  }

  for (int i = 0; i < size; ++i) {
    fprintf(file, "%s\n%s\n%s\n", conversations[i].situation,
            conversations[i].expression, conversations[i].correction);
  }

  fclose(file);
}

// �ܾ� �����͸� ���Ͽ� �����ϴ� �Լ�
void saveWords(struct Word *words, int size) {
  FILE *file;
  fopen_s(&file, "words.txt", "w");  // �ܾ� �����͸� ������ ���ϸ�
  if (file == NULL) {
    printf("������ �� �� �����ϴ�.\n");
    return;
  }

  for (int i = 0; i < size; ++i) {
    fprintf(file, "%s\n%s\n", words[i].word, words[i].explanation);
  }

  fclose(file);
}
