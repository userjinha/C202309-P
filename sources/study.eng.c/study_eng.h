#ifndef STUDY_ENG_H
#define STUDY_ENG_H

// ��ȭ ������ ����ü ����
struct Conversation {
  char situation[50];
  char expression[100];
  char correction[100];
};

// �ܾ� ������ ����ü ����
struct Word {
  char word[50];
  char explanation[100];
};

// �Լ� ����
void saveConversations(struct Conversation *conversations, int size);
void saveWords(struct Word *words, int size);
void printConversation(struct Conversation *convo);
void printWord(struct Word *wd);

#endif /* STUDY_ENG_H */
