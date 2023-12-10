#include "study_eng.h"

#include <stdio.h>

// 대화 출력 함수
void printConversation(struct Conversation *convo) {
  printf("---%s---\n", convo->situation);
  printf("%s\n", convo->expression);
  printf("----정정----\n");
  printf("%s\n", convo->correction);
}

// 단어 출력 함수
void printWord(struct Word *wd) {
  printf("---%s---\n", wd->word);
  printf("%s\n", wd->explanation);
}

// 대화 데이터를 파일에 저장하는 함수
void saveConversations(struct Conversation *conversations, int size) {
  FILE *file;
  fopen_s(&file, "conversations.txt", "w");  // 대화 데이터를 저장할 파일명
  if (file == NULL) {
    printf("파일을 열 수 없습니다.\n");
    return;
  }

  for (int i = 0; i < size; ++i) {
    fprintf(file, "%s\n%s\n%s\n", conversations[i].situation,
            conversations[i].expression, conversations[i].correction);
  }

  fclose(file);
}

// 단어 데이터를 파일에 저장하는 함수
void saveWords(struct Word *words, int size) {
  FILE *file;
  fopen_s(&file, "words.txt", "w");  // 단어 데이터를 저장할 파일명
  if (file == NULL) {
    printf("파일을 열 수 없습니다.\n");
    return;
  }

  for (int i = 0; i < size; ++i) {
    fprintf(file, "%s\n%s\n", words[i].word, words[i].explanation);
  }

  fclose(file);
}
