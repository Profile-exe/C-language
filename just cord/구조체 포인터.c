#include <stdio.h>

typedef struct character {
	int hp;
	int att;
	int def;
} CHAR;

void start_(CHAR* p, CHAR* m);
void option(void);
void attack(CHAR* p, CHAR* m);
void defence(CHAR* p, CHAR* m);
void status(CHAR* p, CHAR* m);

int main(void)
{
	int op;
	CHAR player, monster;
	CHAR* p;
	CHAR* m;
	p = &player;
	m = &monster;

	start_(p, m);
	while (1) {
		option();
		scanf("%d", &op);

		switch (op) {
		case 1:
			attack(p, m);
			break;
		case 2:
			defence(p, m);
			break;
		case 3:
			status(p, m);
			break;
		case 4:
			exit(0);
			break;
		}
	}


	return 0;
}

void start_(CHAR* p, CHAR* m) {
	printf("�÷��̾� Hp �Է� : ");
	scanf("%d", &p->hp);
	printf("�÷��̾� ���ݷ� �Է� : ");
	scanf("%d", &p->att);
	printf("�÷��̾� ���� �Է� : ");
	scanf("%d", &p->def);

	printf("���� Hp �Է� : ");
	scanf("%d", &m->hp);
	printf("���� ���ݷ� �Է� : ");
	scanf("%d", &m->att);
	printf("���� ���� �Է� : ");
	scanf("%d", &m->def);
}

void option(void) {
	printf("1. ����\n2. ����\n3. �������ͽ� Ȯ��\n4. ��������\n");
}
void attack(CHAR* p, CHAR* m) {
	printf("\n���� ����\n");
	m->hp -= p->att - m->def;
	if (m->hp <= 0) {
		m->hp = 0;
		printf("���� ���� Hp : %d\n", m->hp);
		printf("���� ���, ������ �����մϴ�.");
		exit(0);
	}
	printf("���� ���� Hp : %d\n\n", m->hp);
}
void defence(CHAR* p, CHAR* m) {
	printf("\n���� ����\n");
	p->hp -= m->att - p->def;
	if (p->hp <= 0) {
		p->hp = 0;
		printf("���� �÷��̾� Hp : %d\n", p->hp);
		printf("�÷��̾� ���, ������ �����մϴ�.\n");
		exit(0);
	}
	printf("���� �÷��̾� Hp : %d\n\n", p->hp);
}
void status(CHAR* p, CHAR* m) {
	printf("\n�÷��̾�\nHp : %d ���ݷ� : %d ���� : %d\n", p->hp, p->att, p->def);
	printf("\n����\nHp : %d ���ݷ� : %d ���� : %d\n\n", m->hp, m->att, m->def);
}