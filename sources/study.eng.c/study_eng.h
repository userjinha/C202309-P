#ifndef STUDY_ENG_H
#define STUDY_ENG_H

// 대화 데이터 구조체 정의
struct Conversation {
  char situation[50];
  char expression[100];
  char correction[100];
};

// 단어 데이터 구조체 정의
struct Word {
  char word[50];
  char explanation[100];
};

// 함수 선언
void saveConversations(struct Conversation *conversations, int size);
void saveWords(struct Word *words, int size);
void printConversation(struct Conversation *convo);
void printWord(struct Word *wd);

#endif /* STUDY_ENG_H */
