# 動機
>https://twitter.com/Inatsuka/status/737524711530188800 
>DXライブラリで
>while(ProcessMessage()==0 && CheckHitKeyAll()==0 && GetMouseWheelRotVol()==0 && GetMouseInput()==0)
>ってループ回すとAVGにウィルス扱いされてexe没収される件

とのことだったので再現コードを作る。

# 環境
## コンパイラ
- Visual Studio 2010 ～ 2015(CTPは除く)

## 環境変数
- ``DXLIB_ROOT`` : ``D:\lib\DxLib_VC\プロジェクトに追加すべきファイル_VC用``など。