#ifndef __Player_H__
#define __Player_H__

#include "Boss.h"
#include "Bullet.h"
#include "Monster.h"
USING_NS_CC;

class Monster;
class Boss;

class Player :public Entity
{
public:
	Player();
	~Player();
	virtual bool init();
	CREATE_FUNC(Player);

	void BindBoss(Boss* boss);
	int GetCurrentHP();
	int GetFullHP();
	void SetCurrentHP(int hp);
	void SetPower(int atk); //����Ӣ�۹�����
	void SetMonsterArray(Vector<Monster* >* Array); //���С������

	void Attack(float scale);
	void Hurt(int atk);
	void Move(short x, short y);

	void SetBullet(int num, int state); //�����ӵ�����Դ�ļ� ����֡�� �ӵ�����
	void HurtingAnimation(int atk); //���˶���

	void update(float delta);
private:
	int fullHP;
	int currentHP;
	int power;

	Boss* pBoss;
	MoveBy* moveAction;
	int plistNum;
	int bulletState;
	bool bulletLife; //�ӵ��Ƿ���

	Vector<Bullet* > bulletArray; //�ӵ�����
	Vector<Monster* >* monsterArray; //С������
};





#endif