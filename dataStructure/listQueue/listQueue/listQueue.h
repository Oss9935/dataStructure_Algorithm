#pragma once 
enum BOOL { FALSE, TRUE };

typedef struct _node Node;
struct _node
{
	int data;
	Node *next;
};

typedef struct _queue {
	Node *head;
	Node *tail;
}Queue;

BOOL createQueue(Queue * qp);		/* ť ���� �� �ʱ�ȭ �Լ� */
BOOL isQueueEmpty(const Queue *qp);			/* ť�� ������ ����ִ°� */
BOOL enqueue(Queue * qp, int enqueData);	/* ť�� ������ �ϳ��� ���� �� */
BOOL dequeue(Queue * qp, int * dequeData);	/* ť���� ������ �ϳ��� ���� */
void printQueue(const Queue * qp);			/* ť ���� ��� �����͸� ���(dequeue�ϴ� ���� �ƴ�) */
void destroyQueue(Queue * qp);				/* ť �Ҹ� �Լ� */