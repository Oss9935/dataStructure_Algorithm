#pragma once
#define WORD_MAX_SIZE 100

// warpping for generic
typedef struct _wordList {
	char words[WORD_MAX_SIZE];
}wordList;

typedef wordList DataType;	//for generic

/*	assistance function for generic	*/
int compareWords(DataType *source, DataType *target);
void printWord(DataType *pData);