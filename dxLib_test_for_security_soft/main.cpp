#include <DxLib.h>
int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, LPTSTR /*lpCmdLine*/, int /*nCmdShow*/)
{
	DxLib::SetOutApplicationLogValidFlag(FALSE);
	DxLib::SetGraphMode(720, 408, 16);
	DxLib::ChangeWindowMode(TRUE);
	DxLib::SetBackgroundColor(255, 255, 255);
	if (DxLib::DxLib_Init() == -1)return -1;// エラーが起きたら直ちに終了
	DxLib::SetDrawScreen(DX_SCREEN_BACK);
	DxLib::ClearDrawScreen();
	while (DxLib::ProcessMessage() == 0 && DxLib::CheckHitKeyAll() == 0 && DxLib::GetMouseWheelRotVol() == 0 && DxLib::GetMouseInput() == 0) {
		ClearDrawScreen();
		DxLib::DrawBox(2, 2, 40, 40, DxLib::GetColor(128, 128, 128), true);
		::Sleep(20);//Win32API
		DxLib::ScreenFlip();
	}
	return 0;
}