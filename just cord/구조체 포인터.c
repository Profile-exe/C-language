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
	printf("플레이어 Hp 입력 : ");
	scanf("%d", &p->hp);
	printf("플레이어 공격력 입력 : ");
	scanf("%d", &p->att);
	printf("플레이어 방어력 입력 : ");
	scanf("%d", &p->def);

	printf("몬스터 Hp 입력 : ");
	scanf("%d", &m->hp);
	printf("몬스터 공격력 입력 : ");
	scanf("%d", &m->att);
	printf("몬스터 방어력 입력 : ");
	scanf("%d", &m->def);
}

void option(void) {
	printf("1. 공격\n2. 수비\n3. 스테이터스 확인\n4. 전투종료\n");
}
void attack(CHAR* p, CHAR* m) {
	printf("\n공격 시작\n");
	m->hp -= p->att - m->def;
	if (m->hp <= 0) {
		m->hp = 0;
		printf("현재 몬스터 Hp : %d\n", m->hp);
		printf("몬스터 사망, 전투를 종료합니다.");
		exit(0);
	}
	printf("현재 몬스터 Hp : %d\n\n", m->hp);
}
void defence(CHAR* p, CHAR* m) {
	printf("\n수비 시작\n");
	p->hp -= m->att - p->def;
	if (p->hp <= 0) {
		p->hp = 0;
		printf("현재 플레이어 Hp : %d\n", p->hp);
		printf("플레이어 사망, 전투를 종료합니다.\n");
		exit(0);
	}
	printf("현재 플레이어 Hp : %d\n\n", p->hp);
}
void status(CHAR* p, CHAR* m) {
	printf("\n플레이어\nHp : %d 공격력 : %d 방어력 : %d\n", p->hp, p->att, p->def);
	printf("\n몬스터\nHp : %d 공격력 : %d 방어력 : %d\n\n", m->hp, m->att, m->def);
}