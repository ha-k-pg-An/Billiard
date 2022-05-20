#include "ObjectManager.h"
#include "Table.h"
#include "WhiteBall.h"
#include "OtherBalls.h"

void ObjectManager::SetObject() {
	list.push_back(new Table(handles, BilliardTable, VGet(0, 0, 0)));	
	list.push_back(new WhiteBall(handles, W_Ball, VGet(0, 0, 0)));
	list.push_back(new OtherBalls(handles, OtherBall01, VGet(0, 0, 0)));
	list.push_back(new OtherBalls(handles, OtherBall02, VGet(0, 0, 0)));
	list.push_back(new OtherBalls(handles, OtherBall03, VGet(0, 0, 0)));
	list.push_back(new OtherBalls(handles, OtherBall04, VGet(0, 0, 0)));
	list.push_back(new OtherBalls(handles, OtherBall05, VGet(0, 0, 0)));
	list.push_back(new OtherBalls(handles, OtherBall06, VGet(0, 0, 0)));
	list.push_back(new OtherBalls(handles, OtherBall07, VGet(0, 0, 0)));
	list.push_back(new OtherBalls(handles, OtherBall08, VGet(0, 0, 0)));
	list.push_back(new OtherBalls(handles, OtherBall09, VGet(0, 0, 0)));
	list.push_back(new OtherBalls(handles, OtherBall10, VGet(0, 0, 0)));
	list.push_back(new OtherBalls(handles, OtherBall11, VGet(0, 0, 0)));
	list.push_back(new OtherBalls(handles, OtherBall12, VGet(0, 0, 0)));
	list.push_back(new OtherBalls(handles, OtherBall13, VGet(0, 0, 0)));
	list.push_back(new OtherBalls(handles, OtherBall14, VGet(0, 0, 0)));
	list.push_back(new OtherBalls(handles, OtherBall15, VGet(0, 0, 0)));
}

void ObjectManager::Draw() {
	for (auto* obj : list) {
		obj->Draw();
	}
}

void ObjectManager::Delete() {

}