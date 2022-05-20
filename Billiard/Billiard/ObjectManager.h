#ifndef OBJECT_MANAGER_H_
#define OBJECT_MANAGER_H_

#include <vector>
#include "ObjectBase.h"
#include "Common.h"

class ObjectManager
{
public:
	static ObjectManager* Instance() {
		static ObjectManager instance;
		return &instance;
	}

public:
	~ObjectManager() {
//		DeleteAll();
	}

	void SetObject();
	void Draw();
	void Delete();
	void DeleteAll();

private:
	int handles;
	std::vector<ObjectBase*> list;

	//描画に必要なフレーム番号
	std::vector<int> BilliardTable{
		TABLE_LEGS,
		M_PLANE,
		DIAMONDS,
		INNER_EDGES,
		OUTER_EDGES,
		POCKETS,
	};

	std::vector<int> W_Ball{
		W_BALL,
	};

	std::vector<int> OtherBall01{
		BALL1,
	};

	std::vector<int> OtherBall02{
		BALL2,
	};

	std::vector<int> OtherBall03{
		BALL3,
	};

	std::vector<int> OtherBall04{
		BALL4,
	};

	std::vector<int> OtherBall05{
		BALL5,
	};

	std::vector<int> OtherBall06{
		BALL6,
	};

	std::vector<int> OtherBall07{
		BALL7,
	};

	std::vector<int> OtherBall08{
		BALL8,
	};

	std::vector<int> OtherBall09{
		BALL9,
	};

	std::vector<int> OtherBall10{
		BALL10,
	};

	std::vector<int> OtherBall11{
		BALL11,
	};

	std::vector<int> OtherBall12{
		BALL12,
	};

	std::vector<int> OtherBall13{
		BALL13,
	};

	std::vector<int> OtherBall14{
		BALL14,
	};

	std::vector<int> OtherBall15{
		BALL15,
	};

	std::vector<int> Cue{
		CUE,
	};

private:
	ObjectManager() {
		handles = MV1LoadModel("Res/Billiard_set.mv1");
		SetObject();
	}

	ObjectManager(ObjectManager& instance) = delete;
};

#endif // !OBJECT_MANAGER_H_

