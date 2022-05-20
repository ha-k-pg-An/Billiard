#include "DxLib.h"
#include "SceneManager.h"
#include "ObjectManager.h"

// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ChangeWindowMode(true);

	SetGraphMode(800, 600, 32);

	if (DxLib_Init() == -1)		// �c�w���C�u��������������
	{
		return -1;			// �G���[���N�����璼���ɏI��
	}

	SceneManager::Instance()->Change(SceneKind::Title);

//	SetCameraNearFar(0, 1000);

	SetCameraPositionAndTarget_UpVecY(
		VGet(-173, 340, 0),			// �J�������W
		VGet(-173, 77, -1)	// �����_
		);

	//���C�����[�v
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		//SceneManager::Instance()->Update();
		//SceneManager::Instance()->Draw();

		ClearDrawScreen();

		ObjectManager::Instance()->Draw();

		ScreenFlip();
	}
		
	DxLib_End();				// �c�w���C�u�����g�p�̏I������

	return 0;				// �\�t�g�̏I�� 
}