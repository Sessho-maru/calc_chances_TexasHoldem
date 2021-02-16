#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include "ranking_board.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h> 

typedef struct {
	int pick;
	int shape;
	int value;
} Easy; // 입력받은 카드번호, 그 카드의 모양과 숫자를 쉽게 저장하기 위한 구조체 선언
Easy hand[2] = { 0 }; // 플레이어의 카드 2장을 입력 및 저장 할 구조체 배열
Easy c[5] = { 0 }; // 공동패 5장을 입력 및 저장 할 구조체 배열
Easy card[52] = { 0 };
void cardreset();//구조체 card[52]에 값초기화
void hand1(int i, int j);
void c1(int i, int j);
int shape(int a);//위에꺼 할때 쓸거
int value(int a);//마찬가지
void FirstDeal();//첫패 2개 입력시 모든 경우의 수 출력
void SecondDeal();//커뮤니티 3개
void ThirdDeal();//4개
void FourthdDeal();//5개

int RANK(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int RSTFL(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int BSTFL(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int STFLS(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int STFLC(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int STFLD(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int STFLH(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int FOCA(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int FULL(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int FLSHS(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int FLSHC(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int FLSHD(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int FLSHH(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int MOUN(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int BST(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int ST(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int TRI(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int TWOP(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int ONEP(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int TOP(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int RANK2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int RSTFL2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int BSTFL2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int STFLS2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int STFLC2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int STFLD2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int STFLH2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int FOCA2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int FULL2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int FLSHS2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int FLSHC2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int FLSHD2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int FLSHH2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int MOUN2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int BST2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int ST2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int TRI2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int TWOP2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int ONEP2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
int TOP2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
void Deal1();
void Deal2();
void Deal3();
void Deal4();
long long RSTFLc = 0, BSTFLc = 0, STFLc = 0, FOCAc = 0, FULLc = 0, FLSHc = 0, MOUNc = 0, BSTc = 0, STc = 0, TRIc = 0, TWOPc = 0, ONEPc = 0, TOPc = 0, win1 = 0, win2 = 0, allc = 0;
int score1 = 0, score2 = 0, ab[14];
double result_array[14] = { 0.0 };
int x1, x2, x3, x4, x5, x6, x7;

namespace Project1 {



	using namespace System::ComponentModel;
	using namespace System;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// MyForm에 대한 요약입니다.
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::PictureBox^  pictureBox14;

	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;

	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;

	private: System::Windows::Forms::PictureBox^  pictureBox13;


	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;

	private: System::Windows::Forms::PictureBox^  pictureBox33;


	private: System::Windows::Forms::PictureBox^  pictureBox36;
	private: System::Windows::Forms::PictureBox^  pictureBox37;

	private: System::Windows::Forms::PictureBox^  pictureBox39;
	private: System::Windows::Forms::PictureBox^  pictureBox40;
	private: System::Windows::Forms::PictureBox^  pictureBox41;
	private: System::Windows::Forms::PictureBox^  pictureBox42;
	private: System::Windows::Forms::PictureBox^  pictureBox43;
	private: System::Windows::Forms::PictureBox^  pictureBox44;

	private: System::Windows::Forms::PictureBox^  pictureBox46;


	private: System::Windows::Forms::PictureBox^  pictureBox49;
	private: System::Windows::Forms::PictureBox^  pictureBox50;
	private: System::Windows::Forms::PictureBox^  pictureBox51;
	private: System::Windows::Forms::PictureBox^  pictureBox52;

	private: System::Windows::Forms::PictureBox^  pictureBox54;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox45;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox53;
	private: System::Windows::Forms::PictureBox^  pictureBox55;
	private: System::Windows::Forms::PictureBox^  pictureBox34;
	private: System::Windows::Forms::PictureBox^  pictureBox38;
	private: System::Windows::Forms::PictureBox^  pictureBox47;
	private: System::Windows::Forms::PictureBox^  pictureBox56;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::PictureBox^  pictureBox4;

	private: System::Windows::Forms::PictureBox^  pictureBox35;
	private: System::Windows::Forms::PictureBox^  pictureBox48;
	private: System::Windows::Forms::PictureBox^  pictureBox57;
	private: System::Windows::Forms::PictureBox^  pictureBox58;
	private: System::Windows::Forms::PictureBox^  pictureBox59;
	private: System::Windows::Forms::PictureBox^  pictureBox60;
	private: System::Windows::Forms::PictureBox^  pictureBox61;
	private: System::Windows::Forms::PictureBox^  pictureBox62;

	private: System::Windows::Forms::PictureBox^  pictureBox65;
	private: System::Windows::Forms::PictureBox^  pictureBox64;
	private: System::Windows::Forms::PictureBox^  pictureBox66;
	private: System::Windows::Forms::PictureBox^  pictureBox67;
	private: System::Windows::Forms::PictureBox^  pictureBox68;
	private: System::Windows::Forms::PictureBox^  pictureBox69;
	private: System::Windows::Forms::PictureBox^  pictureBox70;
	private: System::Windows::Forms::PictureBox^  pictureBox71;
	private: System::Windows::Forms::PictureBox^  pictureBox72;
	private: System::Windows::Forms::PictureBox^  pictureBox73;
	private: System::Windows::Forms::PictureBox^  pictureBox74;
	private: System::Windows::Forms::PictureBox^  pictureBox75;
	private: System::Windows::Forms::PictureBox^  pictureBox76;
	private: System::Windows::Forms::PictureBox^  pictureBox77;
	private: System::Windows::Forms::PictureBox^  pictureBox78;
	private: System::Windows::Forms::PictureBox^  pictureBox79;
	private: System::Windows::Forms::PictureBox^  pictureBox80;
	private: System::Windows::Forms::PictureBox^  pictureBox81;
	private: System::Windows::Forms::PictureBox^  pictureBox82;
	private: System::Windows::Forms::PictureBox^  pictureBox83;
	private: System::Windows::Forms::PictureBox^  pictureBox84;
	private: System::Windows::Forms::PictureBox^  pictureBox85;
	private: System::Windows::Forms::PictureBox^  pictureBox86;
	private: System::Windows::Forms::PictureBox^  pictureBox87;
	private: System::Windows::Forms::PictureBox^  pictureBox88;
	private: System::Windows::Forms::PictureBox^  pictureBox89;
	private: System::Windows::Forms::PictureBox^  pictureBox90;
	private: System::Windows::Forms::PictureBox^  pictureBox91;
	private: System::Windows::Forms::PictureBox^  pictureBox92;
	private: System::Windows::Forms::PictureBox^  pictureBox93;
	private: System::Windows::Forms::PictureBox^  pictureBox94;
	private: System::Windows::Forms::PictureBox^  pictureBox95;
	private: System::Windows::Forms::PictureBox^  pictureBox96;
	private: System::Windows::Forms::PictureBox^  pictureBox97;
	private: System::Windows::Forms::PictureBox^  pictureBox98;
	private: System::Windows::Forms::PictureBox^  pictureBox99;
	private: System::Windows::Forms::PictureBox^  pictureBox100;
	private: System::Windows::Forms::PictureBox^  pictureBox101;
	private: System::Windows::Forms::PictureBox^  pictureBox102;
	private: System::Windows::Forms::PictureBox^  pictureBox103;
	private: System::Windows::Forms::PictureBox^  pictureBox104;
	private: System::Windows::Forms::PictureBox^  pictureBox105;
	private: System::Windows::Forms::PictureBox^  pictureBox106;
	private: System::Windows::Forms::PictureBox^  pictureBox107;


	private: System::Windows::Forms::PictureBox^  pictureBox108;
	private: System::Windows::Forms::PictureBox^  image_reset;
	private: System::Windows::Forms::PictureBox^  two_one;
	private: System::Windows::Forms::PictureBox^  two_two;
	private: System::Windows::Forms::PictureBox^  one;
	private: System::Windows::Forms::PictureBox^  two;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;






















	private: System::Windows::Forms::PictureBox^  pictureBox110;
	private: System::Windows::Forms::Label^  Royal_St_Plush;

	private: System::Windows::Forms::Label^  St_Plush;
	private: System::Windows::Forms::Label^  four_card;
	private: System::Windows::Forms::Label^  Full_house;
	private: System::Windows::Forms::Label^  Flush;


	private: System::Windows::Forms::Label^  St;
	private: System::Windows::Forms::Label^  Triple;
	private: System::Windows::Forms::Label^  Two_card;
	private: System::Windows::Forms::Label^  One_card;
	private: System::Windows::Forms::Label^  Top;
	private: System::Windows::Forms::Label^  probability;

private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::PictureBox^  pictureBox63;
private: System::Windows::Forms::PictureBox^  pictureBox111;
private: System::Windows::Forms::PictureBox^  pictureBox112;
private: System::Windows::Forms::PictureBox^  pictureBox113;
private: System::Windows::Forms::PictureBox^  pictureBox114;
private: System::Windows::Forms::PictureBox^  pictureBox115;
private: System::Windows::Forms::PictureBox^  pictureBox116;
private: System::Windows::Forms::PictureBox^  pictureBox117;
private: System::Windows::Forms::PictureBox^  pictureBox118;
private: System::Windows::Forms::PictureBox^  pictureBox119;
private: System::Windows::Forms::Label^  Mountain;

private: System::Windows::Forms::Label^  Back_St_Plush;
private: System::Windows::Forms::Label^  Back_St;
private: System::Windows::Forms::PictureBox^  pictureBox16;
private: System::Windows::Forms::PictureBox^  pictureBox109;
private: System::Windows::Forms::TextBox^  textBox1;

















	private: System::ComponentModel::IContainer^  components;


	protected:




	protected:


	protected:






	protected:

	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox54 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox55 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox56 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox57 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox58 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox59 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox60 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox61 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox62 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox65 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox64 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox66 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox67 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox68 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox69 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox70 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox71 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox72 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox73 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox74 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox75 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox76 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox77 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox78 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox79 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox80 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox81 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox82 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox83 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox84 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox85 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox86 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox87 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox88 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox89 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox90 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox91 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox92 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox93 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox94 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox95 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox96 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox97 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox98 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox99 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox100 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox101 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox102 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox103 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox104 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox105 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox106 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox107 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox108 = (gcnew System::Windows::Forms::PictureBox());
			this->image_reset = (gcnew System::Windows::Forms::PictureBox());
			this->two_one = (gcnew System::Windows::Forms::PictureBox());
			this->two_two = (gcnew System::Windows::Forms::PictureBox());
			this->one = (gcnew System::Windows::Forms::PictureBox());
			this->two = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox110 = (gcnew System::Windows::Forms::PictureBox());
			this->Royal_St_Plush = (gcnew System::Windows::Forms::Label());
			this->St_Plush = (gcnew System::Windows::Forms::Label());
			this->four_card = (gcnew System::Windows::Forms::Label());
			this->Full_house = (gcnew System::Windows::Forms::Label());
			this->Flush = (gcnew System::Windows::Forms::Label());
			this->St = (gcnew System::Windows::Forms::Label());
			this->Triple = (gcnew System::Windows::Forms::Label());
			this->Two_card = (gcnew System::Windows::Forms::Label());
			this->One_card = (gcnew System::Windows::Forms::Label());
			this->Top = (gcnew System::Windows::Forms::Label());
			this->probability = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox63 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox111 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox112 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox113 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox114 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox115 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox116 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox117 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox118 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox119 = (gcnew System::Windows::Forms::PictureBox());
			this->Mountain = (gcnew System::Windows::Forms::Label());
			this->Back_St_Plush = (gcnew System::Windows::Forms::Label());
			this->Back_St = (gcnew System::Windows::Forms::Label());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox109 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox73))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox74))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox75))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox76))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox77))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox78))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox79))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox80))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox81))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox82))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox83))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox84))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox85))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox86))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox87))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox88))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox89))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox90))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox91))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox92))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox93))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox94))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox95))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox96))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox97))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox98))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox99))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox100))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox101))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox102))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox103))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox104))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox105))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox106))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox107))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox108))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->image_reset))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->two_one))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->two_two))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->one))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->two))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox110))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox111))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox112))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox113))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox114))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox115))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox116))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox117))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox118))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox119))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox109))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(667, 67);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(30, 44);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 5;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &MyForm::pictureBox14_Click);
			// 
			// pictureBox28
			// 
			this->pictureBox28->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(151, 67);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(30, 44);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox28->TabIndex = 5;
			this->pictureBox28->TabStop = false;
			this->pictureBox28->Click += gcnew System::EventHandler(this, &MyForm::pictureBox28_Click);
			// 
			// pictureBox29
			// 
			this->pictureBox29->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(198, 67);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(30, 44);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox29->TabIndex = 5;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Click += gcnew System::EventHandler(this, &MyForm::pictureBox29_Click);
			// 
			// pictureBox30
			// 
			this->pictureBox30->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(245, 67);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(30, 44);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox30->TabIndex = 5;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->Click += gcnew System::EventHandler(this, &MyForm::pictureBox30_Click);
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(292, 67);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(30, 44);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox31->TabIndex = 5;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Click += gcnew System::EventHandler(this, &MyForm::pictureBox31_Click);
			// 
			// pictureBox32
			// 
			this->pictureBox32->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(339, 67);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(30, 44);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox32->TabIndex = 5;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Click += gcnew System::EventHandler(this, &MyForm::pictureBox32_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(385, 67);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(30, 44);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(433, 67);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(30, 44);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(480, 67);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(30, 44);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(573, 67);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(30, 44);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 5;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::pictureBox5_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(619, 67);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(30, 44);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &MyForm::pictureBox6_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(667, 128);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(30, 44);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 5;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(103, 128);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(30, 44);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 5;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &MyForm::pictureBox8_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(151, 128);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(30, 44);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 5;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &MyForm::pictureBox9_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(198, 128);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(30, 44);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 5;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &MyForm::pictureBox10_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(245, 128);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(30, 44);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 5;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &MyForm::pictureBox11_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(339, 128);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(30, 44);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 5;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &MyForm::pictureBox13_Click);
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(433, 128);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(30, 44);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox17->TabIndex = 5;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Click += gcnew System::EventHandler(this, &MyForm::pictureBox17_Click);
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(573, 128);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(30, 44);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox18->TabIndex = 5;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Click += gcnew System::EventHandler(this, &MyForm::pictureBox18_Click);
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(480, 128);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(30, 44);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox19->TabIndex = 5;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Click += gcnew System::EventHandler(this, &MyForm::pictureBox19_Click);
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(619, 128);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(30, 44);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox20->TabIndex = 5;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Click += gcnew System::EventHandler(this, &MyForm::pictureBox20_Click);
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(667, 188);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(30, 44);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox21->TabIndex = 5;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Click += gcnew System::EventHandler(this, &MyForm::pictureBox21_Click);
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(103, 188);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(30, 44);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox22->TabIndex = 5;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Click += gcnew System::EventHandler(this, &MyForm::pictureBox22_Click);
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(151, 188);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(30, 44);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox23->TabIndex = 5;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Click += gcnew System::EventHandler(this, &MyForm::pictureBox23_Click);
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(198, 188);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(30, 44);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox24->TabIndex = 5;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Click += gcnew System::EventHandler(this, &MyForm::pictureBox24_Click);
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(245, 188);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(30, 44);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox25->TabIndex = 5;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Click += gcnew System::EventHandler(this, &MyForm::pictureBox25_Click);
			// 
			// pictureBox33
			// 
			this->pictureBox33->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(339, 188);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(30, 44);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox33->TabIndex = 5;
			this->pictureBox33->TabStop = false;
			this->pictureBox33->Click += gcnew System::EventHandler(this, &MyForm::pictureBox33_Click);
			// 
			// pictureBox36
			// 
			this->pictureBox36->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(433, 188);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(30, 44);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox36->TabIndex = 5;
			this->pictureBox36->TabStop = false;
			this->pictureBox36->Click += gcnew System::EventHandler(this, &MyForm::pictureBox36_Click);
			// 
			// pictureBox37
			// 
			this->pictureBox37->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(573, 188);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(30, 44);
			this->pictureBox37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox37->TabIndex = 5;
			this->pictureBox37->TabStop = false;
			this->pictureBox37->Click += gcnew System::EventHandler(this, &MyForm::pictureBox37_Click);
			// 
			// pictureBox39
			// 
			this->pictureBox39->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(619, 188);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(30, 44);
			this->pictureBox39->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox39->TabIndex = 5;
			this->pictureBox39->TabStop = false;
			this->pictureBox39->Click += gcnew System::EventHandler(this, &MyForm::pictureBox39_Click);
			// 
			// pictureBox40
			// 
			this->pictureBox40->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.Image")));
			this->pictureBox40->Location = System::Drawing::Point(667, 248);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(30, 44);
			this->pictureBox40->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox40->TabIndex = 5;
			this->pictureBox40->TabStop = false;
			this->pictureBox40->Click += gcnew System::EventHandler(this, &MyForm::pictureBox40_Click);
			// 
			// pictureBox41
			// 
			this->pictureBox41->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox41.Image")));
			this->pictureBox41->Location = System::Drawing::Point(103, 248);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(30, 44);
			this->pictureBox41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox41->TabIndex = 5;
			this->pictureBox41->TabStop = false;
			this->pictureBox41->Click += gcnew System::EventHandler(this, &MyForm::pictureBox41_Click);
			// 
			// pictureBox42
			// 
			this->pictureBox42->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox42.Image")));
			this->pictureBox42->Location = System::Drawing::Point(151, 248);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(30, 44);
			this->pictureBox42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox42->TabIndex = 5;
			this->pictureBox42->TabStop = false;
			this->pictureBox42->Click += gcnew System::EventHandler(this, &MyForm::pictureBox42_Click);
			// 
			// pictureBox43
			// 
			this->pictureBox43->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox43.Image")));
			this->pictureBox43->Location = System::Drawing::Point(198, 248);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(30, 44);
			this->pictureBox43->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox43->TabIndex = 5;
			this->pictureBox43->TabStop = false;
			this->pictureBox43->Click += gcnew System::EventHandler(this, &MyForm::pictureBox43_Click);
			// 
			// pictureBox44
			// 
			this->pictureBox44->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox44.Image")));
			this->pictureBox44->Location = System::Drawing::Point(245, 248);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(30, 44);
			this->pictureBox44->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox44->TabIndex = 5;
			this->pictureBox44->TabStop = false;
			this->pictureBox44->Click += gcnew System::EventHandler(this, &MyForm::pictureBox44_Click);
			// 
			// pictureBox46
			// 
			this->pictureBox46->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox46.Image")));
			this->pictureBox46->Location = System::Drawing::Point(339, 248);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(30, 44);
			this->pictureBox46->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox46->TabIndex = 5;
			this->pictureBox46->TabStop = false;
			this->pictureBox46->Click += gcnew System::EventHandler(this, &MyForm::pictureBox46_Click);
			// 
			// pictureBox49
			// 
			this->pictureBox49->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox49->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox49.Image")));
			this->pictureBox49->Location = System::Drawing::Point(433, 248);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(30, 44);
			this->pictureBox49->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox49->TabIndex = 5;
			this->pictureBox49->TabStop = false;
			this->pictureBox49->Click += gcnew System::EventHandler(this, &MyForm::pictureBox49_Click);
			// 
			// pictureBox50
			// 
			this->pictureBox50->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox50->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox50.Image")));
			this->pictureBox50->Location = System::Drawing::Point(573, 248);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(30, 44);
			this->pictureBox50->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox50->TabIndex = 5;
			this->pictureBox50->TabStop = false;
			this->pictureBox50->Click += gcnew System::EventHandler(this, &MyForm::pictureBox50_Click);
			// 
			// pictureBox51
			// 
			this->pictureBox51->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox51->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox51.Image")));
			this->pictureBox51->Location = System::Drawing::Point(480, 248);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(30, 44);
			this->pictureBox51->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox51->TabIndex = 5;
			this->pictureBox51->TabStop = false;
			this->pictureBox51->Click += gcnew System::EventHandler(this, &MyForm::pictureBox51_Click);
			// 
			// pictureBox52
			// 
			this->pictureBox52->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox52->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox52.Image")));
			this->pictureBox52->Location = System::Drawing::Point(619, 248);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(30, 44);
			this->pictureBox52->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox52->TabIndex = 5;
			this->pictureBox52->TabStop = false;
			this->pictureBox52->Click += gcnew System::EventHandler(this, &MyForm::pictureBox52_Click);
			// 
			// pictureBox54
			// 
			this->pictureBox54->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox54->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox54.Image")));
			this->pictureBox54->Location = System::Drawing::Point(292, 128);
			this->pictureBox54->Name = L"pictureBox54";
			this->pictureBox54->Size = System::Drawing::Size(30, 44);
			this->pictureBox54->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox54->TabIndex = 6;
			this->pictureBox54->TabStop = false;
			this->pictureBox54->Click += gcnew System::EventHandler(this, &MyForm::pictureBox54_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(292, 188);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(30, 44);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 7;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &MyForm::pictureBox12_Click);
			// 
			// pictureBox26
			// 
			this->pictureBox26->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(292, 248);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(30, 44);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox26->TabIndex = 9;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->Click += gcnew System::EventHandler(this, &MyForm::pictureBox26_Click);
			// 
			// pictureBox45
			// 
			this->pictureBox45->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox45.Image")));
			this->pictureBox45->Location = System::Drawing::Point(385, 128);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(30, 44);
			this->pictureBox45->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox45->TabIndex = 10;
			this->pictureBox45->TabStop = false;
			this->pictureBox45->Click += gcnew System::EventHandler(this, &MyForm::pictureBox45_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(385, 248);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(30, 44);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 11;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &MyForm::pictureBox15_Click_1);
			// 
			// pictureBox53
			// 
			this->pictureBox53->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox53->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox53.Image")));
			this->pictureBox53->Location = System::Drawing::Point(480, 188);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(30, 44);
			this->pictureBox53->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox53->TabIndex = 12;
			this->pictureBox53->TabStop = false;
			this->pictureBox53->Click += gcnew System::EventHandler(this, &MyForm::pictureBox53_Click);
			// 
			// pictureBox55
			// 
			this->pictureBox55->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox55->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox55.Image")));
			this->pictureBox55->Location = System::Drawing::Point(385, 188);
			this->pictureBox55->Name = L"pictureBox55";
			this->pictureBox55->Size = System::Drawing::Size(30, 44);
			this->pictureBox55->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox55->TabIndex = 13;
			this->pictureBox55->TabStop = false;
			this->pictureBox55->Click += gcnew System::EventHandler(this, &MyForm::pictureBox55_Click);
			// 
			// pictureBox34
			// 
			this->pictureBox34->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(527, 128);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(30, 44);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox34->TabIndex = 14;
			this->pictureBox34->TabStop = false;
			this->pictureBox34->Click += gcnew System::EventHandler(this, &MyForm::pictureBox34_Click);
			// 
			// pictureBox38
			// 
			this->pictureBox38->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(527, 67);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(30, 44);
			this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox38->TabIndex = 15;
			this->pictureBox38->TabStop = false;
			this->pictureBox38->Click += gcnew System::EventHandler(this, &MyForm::pictureBox38_Click_1);
			// 
			// pictureBox47
			// 
			this->pictureBox47->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox47->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox47.Image")));
			this->pictureBox47->Location = System::Drawing::Point(527, 188);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(30, 44);
			this->pictureBox47->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox47->TabIndex = 16;
			this->pictureBox47->TabStop = false;
			this->pictureBox47->Click += gcnew System::EventHandler(this, &MyForm::pictureBox47_Click);
			// 
			// pictureBox56
			// 
			this->pictureBox56->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox56->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox56.Image")));
			this->pictureBox56->Location = System::Drawing::Point(527, 248);
			this->pictureBox56->Name = L"pictureBox56";
			this->pictureBox56->Size = System::Drawing::Size(30, 44);
			this->pictureBox56->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox56->TabIndex = 17;
			this->pictureBox56->TabStop = false;
			this->pictureBox56->Click += gcnew System::EventHandler(this, &MyForm::pictureBox56_Click);
			// 
			// pictureBox27
			// 
			this->pictureBox27->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(104, 67);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(30, 44);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox27->TabIndex = 5;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Click += gcnew System::EventHandler(this, &MyForm::pictureBox27_Click);
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->BackColor = System::Drawing::Color::Maroon;
			this->button2->Font = (gcnew System::Drawing::Font(L"Georgia", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(6, 8);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 37);
			this->button2->TabIndex = 18;
			this->button2->Text = L"RESET";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(12, 1);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(83, 130);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 20;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// pictureBox35
			// 
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(11, 50);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(83, 130);
			this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox35->TabIndex = 22;
			this->pictureBox35->TabStop = false;
			this->pictureBox35->Visible = false;
			// 
			// pictureBox48
			// 
			this->pictureBox48->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox48.Image")));
			this->pictureBox48->Location = System::Drawing::Point(11, 45);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(83, 130);
			this->pictureBox48->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox48->TabIndex = 23;
			this->pictureBox48->TabStop = false;
			this->pictureBox48->Visible = false;
			// 
			// pictureBox57
			// 
			this->pictureBox57->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox57.Image")));
			this->pictureBox57->Location = System::Drawing::Point(11, 40);
			this->pictureBox57->Name = L"pictureBox57";
			this->pictureBox57->Size = System::Drawing::Size(83, 130);
			this->pictureBox57->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox57->TabIndex = 24;
			this->pictureBox57->TabStop = false;
			this->pictureBox57->Visible = false;
			// 
			// pictureBox58
			// 
			this->pictureBox58->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox58.Image")));
			this->pictureBox58->Location = System::Drawing::Point(12, 7);
			this->pictureBox58->Name = L"pictureBox58";
			this->pictureBox58->Size = System::Drawing::Size(83, 130);
			this->pictureBox58->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox58->TabIndex = 25;
			this->pictureBox58->TabStop = false;
			this->pictureBox58->Visible = false;
			// 
			// pictureBox59
			// 
			this->pictureBox59->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox59.Image")));
			this->pictureBox59->Location = System::Drawing::Point(11, 13);
			this->pictureBox59->Name = L"pictureBox59";
			this->pictureBox59->Size = System::Drawing::Size(83, 130);
			this->pictureBox59->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox59->TabIndex = 26;
			this->pictureBox59->TabStop = false;
			this->pictureBox59->Visible = false;
			// 
			// pictureBox60
			// 
			this->pictureBox60->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox60.Image")));
			this->pictureBox60->Location = System::Drawing::Point(11, 19);
			this->pictureBox60->Name = L"pictureBox60";
			this->pictureBox60->Size = System::Drawing::Size(83, 130);
			this->pictureBox60->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox60->TabIndex = 27;
			this->pictureBox60->TabStop = false;
			this->pictureBox60->Visible = false;
			// 
			// pictureBox61
			// 
			this->pictureBox61->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox61.Image")));
			this->pictureBox61->Location = System::Drawing::Point(11, 27);
			this->pictureBox61->Name = L"pictureBox61";
			this->pictureBox61->Size = System::Drawing::Size(83, 130);
			this->pictureBox61->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox61->TabIndex = 22;
			this->pictureBox61->TabStop = false;
			this->pictureBox61->Visible = false;
			// 
			// pictureBox62
			// 
			this->pictureBox62->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox62.Image")));
			this->pictureBox62->Location = System::Drawing::Point(11, 35);
			this->pictureBox62->Name = L"pictureBox62";
			this->pictureBox62->Size = System::Drawing::Size(83, 130);
			this->pictureBox62->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox62->TabIndex = 23;
			this->pictureBox62->TabStop = false;
			this->pictureBox62->Visible = false;
			// 
			// pictureBox65
			// 
			this->pictureBox65->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox65.Image")));
			this->pictureBox65->Location = System::Drawing::Point(11, 60);
			this->pictureBox65->Name = L"pictureBox65";
			this->pictureBox65->Size = System::Drawing::Size(83, 130);
			this->pictureBox65->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox65->TabIndex = 29;
			this->pictureBox65->TabStop = false;
			this->pictureBox65->Visible = false;
			// 
			// pictureBox64
			// 
			this->pictureBox64->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox64.Image")));
			this->pictureBox64->Location = System::Drawing::Point(11, 70);
			this->pictureBox64->Name = L"pictureBox64";
			this->pictureBox64->Size = System::Drawing::Size(83, 130);
			this->pictureBox64->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox64->TabIndex = 29;
			this->pictureBox64->TabStop = false;
			this->pictureBox64->Visible = false;
			// 
			// pictureBox66
			// 
			this->pictureBox66->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox66.Image")));
			this->pictureBox66->Location = System::Drawing::Point(11, 80);
			this->pictureBox66->Name = L"pictureBox66";
			this->pictureBox66->Size = System::Drawing::Size(83, 130);
			this->pictureBox66->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox66->TabIndex = 29;
			this->pictureBox66->TabStop = false;
			this->pictureBox66->Visible = false;
			// 
			// pictureBox67
			// 
			this->pictureBox67->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox67.Image")));
			this->pictureBox67->Location = System::Drawing::Point(11, 90);
			this->pictureBox67->Name = L"pictureBox67";
			this->pictureBox67->Size = System::Drawing::Size(83, 130);
			this->pictureBox67->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox67->TabIndex = 29;
			this->pictureBox67->TabStop = false;
			this->pictureBox67->Visible = false;
			// 
			// pictureBox68
			// 
			this->pictureBox68->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox68.Image")));
			this->pictureBox68->Location = System::Drawing::Point(11, 100);
			this->pictureBox68->Name = L"pictureBox68";
			this->pictureBox68->Size = System::Drawing::Size(83, 130);
			this->pictureBox68->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox68->TabIndex = 30;
			this->pictureBox68->TabStop = false;
			this->pictureBox68->Visible = false;
			// 
			// pictureBox69
			// 
			this->pictureBox69->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox69.Image")));
			this->pictureBox69->Location = System::Drawing::Point(12, 15);
			this->pictureBox69->Name = L"pictureBox69";
			this->pictureBox69->Size = System::Drawing::Size(83, 130);
			this->pictureBox69->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox69->TabIndex = 30;
			this->pictureBox69->TabStop = false;
			this->pictureBox69->Visible = false;
			// 
			// pictureBox70
			// 
			this->pictureBox70->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox70.Image")));
			this->pictureBox70->Location = System::Drawing::Point(12, 25);
			this->pictureBox70->Name = L"pictureBox70";
			this->pictureBox70->Size = System::Drawing::Size(83, 130);
			this->pictureBox70->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox70->TabIndex = 30;
			this->pictureBox70->TabStop = false;
			this->pictureBox70->Visible = false;
			// 
			// pictureBox71
			// 
			this->pictureBox71->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox71.Image")));
			this->pictureBox71->Location = System::Drawing::Point(12, 35);
			this->pictureBox71->Name = L"pictureBox71";
			this->pictureBox71->Size = System::Drawing::Size(83, 130);
			this->pictureBox71->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox71->TabIndex = 30;
			this->pictureBox71->TabStop = false;
			this->pictureBox71->Visible = false;
			// 
			// pictureBox72
			// 
			this->pictureBox72->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox72.Image")));
			this->pictureBox72->Location = System::Drawing::Point(12, 45);
			this->pictureBox72->Name = L"pictureBox72";
			this->pictureBox72->Size = System::Drawing::Size(83, 130);
			this->pictureBox72->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox72->TabIndex = 30;
			this->pictureBox72->TabStop = false;
			this->pictureBox72->Visible = false;
			// 
			// pictureBox73
			// 
			this->pictureBox73->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox73.Image")));
			this->pictureBox73->Location = System::Drawing::Point(12, 55);
			this->pictureBox73->Name = L"pictureBox73";
			this->pictureBox73->Size = System::Drawing::Size(83, 130);
			this->pictureBox73->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox73->TabIndex = 30;
			this->pictureBox73->TabStop = false;
			this->pictureBox73->Visible = false;
			// 
			// pictureBox74
			// 
			this->pictureBox74->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox74.Image")));
			this->pictureBox74->Location = System::Drawing::Point(12, 45);
			this->pictureBox74->Name = L"pictureBox74";
			this->pictureBox74->Size = System::Drawing::Size(83, 130);
			this->pictureBox74->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox74->TabIndex = 30;
			this->pictureBox74->TabStop = false;
			this->pictureBox74->Visible = false;
			// 
			// pictureBox75
			// 
			this->pictureBox75->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox75.Image")));
			this->pictureBox75->Location = System::Drawing::Point(12, 65);
			this->pictureBox75->Name = L"pictureBox75";
			this->pictureBox75->Size = System::Drawing::Size(83, 130);
			this->pictureBox75->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox75->TabIndex = 30;
			this->pictureBox75->TabStop = false;
			this->pictureBox75->Visible = false;
			// 
			// pictureBox76
			// 
			this->pictureBox76->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox76.Image")));
			this->pictureBox76->Location = System::Drawing::Point(12, 75);
			this->pictureBox76->Name = L"pictureBox76";
			this->pictureBox76->Size = System::Drawing::Size(83, 130);
			this->pictureBox76->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox76->TabIndex = 30;
			this->pictureBox76->TabStop = false;
			this->pictureBox76->Visible = false;
			// 
			// pictureBox77
			// 
			this->pictureBox77->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox77.Image")));
			this->pictureBox77->Location = System::Drawing::Point(12, 5);
			this->pictureBox77->Name = L"pictureBox77";
			this->pictureBox77->Size = System::Drawing::Size(83, 130);
			this->pictureBox77->TabIndex = 30;
			this->pictureBox77->TabStop = false;
			this->pictureBox77->Visible = false;
			// 
			// pictureBox78
			// 
			this->pictureBox78->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox78.Image")));
			this->pictureBox78->Location = System::Drawing::Point(12, 85);
			this->pictureBox78->Name = L"pictureBox78";
			this->pictureBox78->Size = System::Drawing::Size(83, 130);
			this->pictureBox78->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox78->TabIndex = 30;
			this->pictureBox78->TabStop = false;
			this->pictureBox78->Visible = false;
			// 
			// pictureBox79
			// 
			this->pictureBox79->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox79.Image")));
			this->pictureBox79->Location = System::Drawing::Point(12, 95);
			this->pictureBox79->Name = L"pictureBox79";
			this->pictureBox79->Size = System::Drawing::Size(83, 130);
			this->pictureBox79->TabIndex = 30;
			this->pictureBox79->TabStop = false;
			this->pictureBox79->Visible = false;
			// 
			// pictureBox80
			// 
			this->pictureBox80->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox80.Image")));
			this->pictureBox80->Location = System::Drawing::Point(12, 45);
			this->pictureBox80->Name = L"pictureBox80";
			this->pictureBox80->Size = System::Drawing::Size(83, 130);
			this->pictureBox80->TabIndex = 31;
			this->pictureBox80->TabStop = false;
			this->pictureBox80->Visible = false;
			// 
			// pictureBox81
			// 
			this->pictureBox81->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox81.Image")));
			this->pictureBox81->Location = System::Drawing::Point(12, 75);
			this->pictureBox81->Name = L"pictureBox81";
			this->pictureBox81->Size = System::Drawing::Size(83, 130);
			this->pictureBox81->TabIndex = 31;
			this->pictureBox81->TabStop = false;
			this->pictureBox81->Visible = false;
			// 
			// pictureBox82
			// 
			this->pictureBox82->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox82.Image")));
			this->pictureBox82->Location = System::Drawing::Point(12, 55);
			this->pictureBox82->Name = L"pictureBox82";
			this->pictureBox82->Size = System::Drawing::Size(83, 130);
			this->pictureBox82->TabIndex = 31;
			this->pictureBox82->TabStop = false;
			this->pictureBox82->Visible = false;
			// 
			// pictureBox83
			// 
			this->pictureBox83->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox83.Image")));
			this->pictureBox83->Location = System::Drawing::Point(12, 65);
			this->pictureBox83->Name = L"pictureBox83";
			this->pictureBox83->Size = System::Drawing::Size(83, 130);
			this->pictureBox83->TabIndex = 31;
			this->pictureBox83->TabStop = false;
			this->pictureBox83->Visible = false;
			// 
			// pictureBox84
			// 
			this->pictureBox84->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox84.Image")));
			this->pictureBox84->Location = System::Drawing::Point(12, 95);
			this->pictureBox84->Name = L"pictureBox84";
			this->pictureBox84->Size = System::Drawing::Size(83, 130);
			this->pictureBox84->TabIndex = 31;
			this->pictureBox84->TabStop = false;
			this->pictureBox84->Visible = false;
			// 
			// pictureBox85
			// 
			this->pictureBox85->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox85.Image")));
			this->pictureBox85->Location = System::Drawing::Point(12, 85);
			this->pictureBox85->Name = L"pictureBox85";
			this->pictureBox85->Size = System::Drawing::Size(83, 130);
			this->pictureBox85->TabIndex = 31;
			this->pictureBox85->TabStop = false;
			this->pictureBox85->Visible = false;
			// 
			// pictureBox86
			// 
			this->pictureBox86->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox86.Image")));
			this->pictureBox86->Location = System::Drawing::Point(12, 105);
			this->pictureBox86->Name = L"pictureBox86";
			this->pictureBox86->Size = System::Drawing::Size(83, 130);
			this->pictureBox86->TabIndex = 32;
			this->pictureBox86->TabStop = false;
			this->pictureBox86->Visible = false;
			this->pictureBox86->Click += gcnew System::EventHandler(this, &MyForm::pictureBox86_Click);
			// 
			// pictureBox87
			// 
			this->pictureBox87->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox87.Image")));
			this->pictureBox87->Location = System::Drawing::Point(12, 95);
			this->pictureBox87->Name = L"pictureBox87";
			this->pictureBox87->Size = System::Drawing::Size(83, 130);
			this->pictureBox87->TabIndex = 32;
			this->pictureBox87->TabStop = false;
			this->pictureBox87->Visible = false;
			this->pictureBox87->Click += gcnew System::EventHandler(this, &MyForm::pictureBox86_Click);
			// 
			// pictureBox88
			// 
			this->pictureBox88->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox88.Image")));
			this->pictureBox88->Location = System::Drawing::Point(12, 135);
			this->pictureBox88->Name = L"pictureBox88";
			this->pictureBox88->Size = System::Drawing::Size(83, 10);
			this->pictureBox88->TabIndex = 32;
			this->pictureBox88->TabStop = false;
			this->pictureBox88->Visible = false;
			this->pictureBox88->Click += gcnew System::EventHandler(this, &MyForm::pictureBox86_Click);
			// 
			// pictureBox89
			// 
			this->pictureBox89->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox89.Image")));
			this->pictureBox89->Location = System::Drawing::Point(12, 125);
			this->pictureBox89->Name = L"pictureBox89";
			this->pictureBox89->Size = System::Drawing::Size(83, 10);
			this->pictureBox89->TabIndex = 32;
			this->pictureBox89->TabStop = false;
			this->pictureBox89->Visible = false;
			this->pictureBox89->Click += gcnew System::EventHandler(this, &MyForm::pictureBox86_Click);
			// 
			// pictureBox90
			// 
			this->pictureBox90->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox90.Image")));
			this->pictureBox90->Location = System::Drawing::Point(12, 155);
			this->pictureBox90->Name = L"pictureBox90";
			this->pictureBox90->Size = System::Drawing::Size(83, 10);
			this->pictureBox90->TabIndex = 32;
			this->pictureBox90->TabStop = false;
			this->pictureBox90->Visible = false;
			this->pictureBox90->Click += gcnew System::EventHandler(this, &MyForm::pictureBox86_Click);
			// 
			// pictureBox91
			// 
			this->pictureBox91->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox91.Image")));
			this->pictureBox91->Location = System::Drawing::Point(12, 145);
			this->pictureBox91->Name = L"pictureBox91";
			this->pictureBox91->Size = System::Drawing::Size(83, 10);
			this->pictureBox91->TabIndex = 32;
			this->pictureBox91->TabStop = false;
			this->pictureBox91->Visible = false;
			this->pictureBox91->Click += gcnew System::EventHandler(this, &MyForm::pictureBox86_Click);
			// 
			// pictureBox92
			// 
			this->pictureBox92->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox92.Image")));
			this->pictureBox92->Location = System::Drawing::Point(12, 165);
			this->pictureBox92->Name = L"pictureBox92";
			this->pictureBox92->Size = System::Drawing::Size(83, 10);
			this->pictureBox92->TabIndex = 33;
			this->pictureBox92->TabStop = false;
			this->pictureBox92->Visible = false;
			// 
			// pictureBox93
			// 
			this->pictureBox93->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox93.Image")));
			this->pictureBox93->Location = System::Drawing::Point(12, 175);
			this->pictureBox93->Name = L"pictureBox93";
			this->pictureBox93->Size = System::Drawing::Size(83, 10);
			this->pictureBox93->TabIndex = 34;
			this->pictureBox93->TabStop = false;
			this->pictureBox93->Visible = false;
			// 
			// pictureBox94
			// 
			this->pictureBox94->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox94.Image")));
			this->pictureBox94->Location = System::Drawing::Point(12, 195);
			this->pictureBox94->Name = L"pictureBox94";
			this->pictureBox94->Size = System::Drawing::Size(83, 10);
			this->pictureBox94->TabIndex = 35;
			this->pictureBox94->TabStop = false;
			this->pictureBox94->Visible = false;
			// 
			// pictureBox95
			// 
			this->pictureBox95->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox95.Image")));
			this->pictureBox95->Location = System::Drawing::Point(12, 50);
			this->pictureBox95->Name = L"pictureBox95";
			this->pictureBox95->Size = System::Drawing::Size(83, 130);
			this->pictureBox95->TabIndex = 35;
			this->pictureBox95->TabStop = false;
			this->pictureBox95->Visible = false;
			// 
			// pictureBox96
			// 
			this->pictureBox96->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox96.Image")));
			this->pictureBox96->Location = System::Drawing::Point(12, 67);
			this->pictureBox96->Name = L"pictureBox96";
			this->pictureBox96->Size = System::Drawing::Size(83, 130);
			this->pictureBox96->TabIndex = 35;
			this->pictureBox96->TabStop = false;
			this->pictureBox96->Visible = false;
			// 
			// pictureBox97
			// 
			this->pictureBox97->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox97.Image")));
			this->pictureBox97->Location = System::Drawing::Point(12, 225);
			this->pictureBox97->Name = L"pictureBox97";
			this->pictureBox97->Size = System::Drawing::Size(83, 10);
			this->pictureBox97->TabIndex = 35;
			this->pictureBox97->TabStop = false;
			this->pictureBox97->Visible = false;
			// 
			// pictureBox98
			// 
			this->pictureBox98->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox98.Image")));
			this->pictureBox98->Location = System::Drawing::Point(12, 235);
			this->pictureBox98->Name = L"pictureBox98";
			this->pictureBox98->Size = System::Drawing::Size(83, 10);
			this->pictureBox98->TabIndex = 35;
			this->pictureBox98->TabStop = false;
			this->pictureBox98->Visible = false;
			// 
			// pictureBox99
			// 
			this->pictureBox99->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox99.Image")));
			this->pictureBox99->Location = System::Drawing::Point(12, 245);
			this->pictureBox99->Name = L"pictureBox99";
			this->pictureBox99->Size = System::Drawing::Size(83, 10);
			this->pictureBox99->TabIndex = 35;
			this->pictureBox99->TabStop = false;
			this->pictureBox99->Visible = false;
			// 
			// pictureBox100
			// 
			this->pictureBox100->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox100.Image")));
			this->pictureBox100->Location = System::Drawing::Point(12, 255);
			this->pictureBox100->Name = L"pictureBox100";
			this->pictureBox100->Size = System::Drawing::Size(83, 10);
			this->pictureBox100->TabIndex = 35;
			this->pictureBox100->TabStop = false;
			this->pictureBox100->Visible = false;
			// 
			// pictureBox101
			// 
			this->pictureBox101->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox101.Image")));
			this->pictureBox101->Location = System::Drawing::Point(12, 235);
			this->pictureBox101->Name = L"pictureBox101";
			this->pictureBox101->Size = System::Drawing::Size(83, 10);
			this->pictureBox101->TabIndex = 35;
			this->pictureBox101->TabStop = false;
			this->pictureBox101->Visible = false;
			// 
			// pictureBox102
			// 
			this->pictureBox102->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox102.Image")));
			this->pictureBox102->Location = System::Drawing::Point(12, 25);
			this->pictureBox102->Name = L"pictureBox102";
			this->pictureBox102->Size = System::Drawing::Size(83, 130);
			this->pictureBox102->TabIndex = 35;
			this->pictureBox102->TabStop = false;
			this->pictureBox102->Visible = false;
			// 
			// pictureBox103
			// 
			this->pictureBox103->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox103.Image")));
			this->pictureBox103->Location = System::Drawing::Point(12, 5);
			this->pictureBox103->Name = L"pictureBox103";
			this->pictureBox103->Size = System::Drawing::Size(83, 130);
			this->pictureBox103->TabIndex = 36;
			this->pictureBox103->TabStop = false;
			this->pictureBox103->Visible = false;
			// 
			// pictureBox104
			// 
			this->pictureBox104->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox104.Image")));
			this->pictureBox104->Location = System::Drawing::Point(12, 15);
			this->pictureBox104->Name = L"pictureBox104";
			this->pictureBox104->Size = System::Drawing::Size(83, 130);
			this->pictureBox104->TabIndex = 36;
			this->pictureBox104->TabStop = false;
			this->pictureBox104->Visible = false;
			// 
			// pictureBox105
			// 
			this->pictureBox105->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox105.Image")));
			this->pictureBox105->Location = System::Drawing::Point(12, 25);
			this->pictureBox105->Name = L"pictureBox105";
			this->pictureBox105->Size = System::Drawing::Size(83, 130);
			this->pictureBox105->TabIndex = 36;
			this->pictureBox105->TabStop = false;
			this->pictureBox105->Visible = false;
			// 
			// pictureBox106
			// 
			this->pictureBox106->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox106.Image")));
			this->pictureBox106->Location = System::Drawing::Point(12, 35);
			this->pictureBox106->Name = L"pictureBox106";
			this->pictureBox106->Size = System::Drawing::Size(83, 130);
			this->pictureBox106->TabIndex = 36;
			this->pictureBox106->TabStop = false;
			this->pictureBox106->Visible = false;
			// 
			// pictureBox107
			// 
			this->pictureBox107->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox107->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox107.Image")));
			this->pictureBox107->Location = System::Drawing::Point(118, 7);
			this->pictureBox107->Name = L"pictureBox107";
			this->pictureBox107->Size = System::Drawing::Size(566, 57);
			this->pictureBox107->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox107->TabIndex = 37;
			this->pictureBox107->TabStop = false;
			// 
			// pictureBox108
			// 
			this->pictureBox108->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox108->Location = System::Drawing::Point(86, 582);
			this->pictureBox108->Name = L"pictureBox108";
			this->pictureBox108->Size = System::Drawing::Size(120, 160);
			this->pictureBox108->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox108->TabIndex = 40;
			this->pictureBox108->TabStop = false;
			this->pictureBox108->Visible = false;
			this->pictureBox108->Click += gcnew System::EventHandler(this, &MyForm::pictureBox108_Click);
			// 
			// image_reset
			// 
			this->image_reset->BackColor = System::Drawing::Color::Aquamarine;
			this->image_reset->Location = System::Drawing::Point(715, 19);
			this->image_reset->Name = L"image_reset";
			this->image_reset->Size = System::Drawing::Size(73, 38);
			this->image_reset->TabIndex = 41;
			this->image_reset->TabStop = false;
			this->image_reset->Visible = false;
			this->image_reset->Click += gcnew System::EventHandler(this, &MyForm::image_reset_Click);
			// 
			// two_one
			// 
			this->two_one->BackColor = System::Drawing::Color::Transparent;
			this->two_one->Location = System::Drawing::Point(215, 582);
			this->two_one->Name = L"two_one";
			this->two_one->Size = System::Drawing::Size(120, 160);
			this->two_one->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->two_one->TabIndex = 42;
			this->two_one->TabStop = false;
			this->two_one->Visible = false;
			this->two_one->Click += gcnew System::EventHandler(this, &MyForm::two_one_Click);
			// 
			// two_two
			// 
			this->two_two->BackColor = System::Drawing::Color::Transparent;
			this->two_two->Location = System::Drawing::Point(344, 582);
			this->two_two->Name = L"two_two";
			this->two_two->Size = System::Drawing::Size(120, 160);
			this->two_two->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->two_two->TabIndex = 43;
			this->two_two->TabStop = false;
			this->two_two->Visible = false;
			this->two_two->Click += gcnew System::EventHandler(this, &MyForm::two_two_Click);
			// 
			// one
			// 
			this->one->BackColor = System::Drawing::Color::Transparent;
			this->one->Location = System::Drawing::Point(473, 582);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(120, 160);
			this->one->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->one->TabIndex = 44;
			this->one->TabStop = false;
			this->one->Visible = false;
			this->one->Click += gcnew System::EventHandler(this, &MyForm::one_Click);
			// 
			// two
			// 
			this->two->BackColor = System::Drawing::Color::Transparent;
			this->two->Location = System::Drawing::Point(602, 582);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(120, 160);
			this->two->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->two->TabIndex = 45;
			this->two->TabStop = false;
			this->two->Visible = false;
			this->two->Click += gcnew System::EventHandler(this, &MyForm::two_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Georgia", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(0, 497);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(800, 41);
			this->panel1->TabIndex = 48;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint_2);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(288, -3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(231, 41);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Community";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// pictureBox110
			// 
			this->pictureBox110->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox110->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox110.Image")));
			this->pictureBox110->Location = System::Drawing::Point(715, 80);
			this->pictureBox110->Name = L"pictureBox110";
			this->pictureBox110->Size = System::Drawing::Size(51, 176);
			this->pictureBox110->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox110->TabIndex = 50;
			this->pictureBox110->TabStop = false;
			this->pictureBox110->Visible = false;
			// 
			// Royal_St_Plush
			// 
			this->Royal_St_Plush->AutoSize = true;
			this->Royal_St_Plush->BackColor = System::Drawing::Color::White;
			this->Royal_St_Plush->Font = (gcnew System::Drawing::Font(L"굴림", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->Royal_St_Plush->ForeColor = System::Drawing::Color::Black;
			this->Royal_St_Plush->Location = System::Drawing::Point(845, 120);
			this->Royal_St_Plush->Name = L"Royal_St_Plush";
			this->Royal_St_Plush->Size = System::Drawing::Size(27, 27);
			this->Royal_St_Plush->TabIndex = 51;
			this->Royal_St_Plush->Text = L"\?";
			this->Royal_St_Plush->Click += gcnew System::EventHandler(this, &MyForm::Royal_St_Plush_Click);
			// 
			// St_Plush
			// 
			this->St_Plush->AutoSize = true;
			this->St_Plush->BackColor = System::Drawing::Color::White;
			this->St_Plush->Font = (gcnew System::Drawing::Font(L"굴림", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->St_Plush->ForeColor = System::Drawing::Color::Black;
			this->St_Plush->Location = System::Drawing::Point(1116, 120);
			this->St_Plush->Name = L"St_Plush";
			this->St_Plush->Size = System::Drawing::Size(27, 27);
			this->St_Plush->TabIndex = 53;
			this->St_Plush->Text = L"\?";
			this->St_Plush->Click += gcnew System::EventHandler(this, &MyForm::St_Plush_Click);
			// 
			// four_card
			// 
			this->four_card->AutoSize = true;
			this->four_card->BackColor = System::Drawing::Color::White;
			this->four_card->Font = (gcnew System::Drawing::Font(L"굴림", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->four_card->ForeColor = System::Drawing::Color::Black;
			this->four_card->Location = System::Drawing::Point(845, 265);
			this->four_card->Name = L"four_card";
			this->four_card->Size = System::Drawing::Size(27, 27);
			this->four_card->TabIndex = 54;
			this->four_card->Text = L"\?";
			this->four_card->Click += gcnew System::EventHandler(this, &MyForm::four_card_Click);
			// 
			// Full_house
			// 
			this->Full_house->AutoSize = true;
			this->Full_house->BackColor = System::Drawing::Color::White;
			this->Full_house->Font = (gcnew System::Drawing::Font(L"굴림", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->Full_house->ForeColor = System::Drawing::Color::Black;
			this->Full_house->Location = System::Drawing::Point(1116, 265);
			this->Full_house->Name = L"Full_house";
			this->Full_house->Size = System::Drawing::Size(27, 27);
			this->Full_house->TabIndex = 55;
			this->Full_house->Text = L"\?";
			this->Full_house->Click += gcnew System::EventHandler(this, &MyForm::Full_house_Click);
			// 
			// Flush
			// 
			this->Flush->AutoSize = true;
			this->Flush->BackColor = System::Drawing::Color::White;
			this->Flush->Font = (gcnew System::Drawing::Font(L"굴림", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->Flush->ForeColor = System::Drawing::Color::Black;
			this->Flush->Location = System::Drawing::Point(845, 410);
			this->Flush->Name = L"Flush";
			this->Flush->Size = System::Drawing::Size(27, 27);
			this->Flush->TabIndex = 56;
			this->Flush->Text = L"\?";
			this->Flush->Click += gcnew System::EventHandler(this, &MyForm::Flush_Click);
			// 
			// St
			// 
			this->St->AutoSize = true;
			this->St->BackColor = System::Drawing::Color::White;
			this->St->Font = (gcnew System::Drawing::Font(L"굴림", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->St->ForeColor = System::Drawing::Color::Black;
			this->St->Location = System::Drawing::Point(1116, 410);
			this->St->Name = L"St";
			this->St->Size = System::Drawing::Size(27, 27);
			this->St->TabIndex = 59;
			this->St->Text = L"\?";
			this->St->Click += gcnew System::EventHandler(this, &MyForm::St_Click);
			// 
			// Triple
			// 
			this->Triple->AutoSize = true;
			this->Triple->BackColor = System::Drawing::Color::White;
			this->Triple->Font = (gcnew System::Drawing::Font(L"굴림", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->Triple->ForeColor = System::Drawing::Color::Black;
			this->Triple->Location = System::Drawing::Point(845, 555);
			this->Triple->Name = L"Triple";
			this->Triple->Size = System::Drawing::Size(27, 27);
			this->Triple->TabIndex = 60;
			this->Triple->Text = L"\?";
			this->Triple->Click += gcnew System::EventHandler(this, &MyForm::Triple_Click);
			// 
			// Two_card
			// 
			this->Two_card->AutoSize = true;
			this->Two_card->BackColor = System::Drawing::Color::White;
			this->Two_card->Font = (gcnew System::Drawing::Font(L"굴림", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->Two_card->ForeColor = System::Drawing::Color::Black;
			this->Two_card->Location = System::Drawing::Point(1116, 555);
			this->Two_card->Name = L"Two_card";
			this->Two_card->Size = System::Drawing::Size(27, 27);
			this->Two_card->TabIndex = 61;
			this->Two_card->Text = L"\?";
			this->Two_card->Click += gcnew System::EventHandler(this, &MyForm::Two_card_Click);
			// 
			// One_card
			// 
			this->One_card->AutoSize = true;
			this->One_card->BackColor = System::Drawing::Color::White;
			this->One_card->Font = (gcnew System::Drawing::Font(L"굴림", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->One_card->ForeColor = System::Drawing::Color::Black;
			this->One_card->Location = System::Drawing::Point(845, 700);
			this->One_card->Name = L"One_card";
			this->One_card->Size = System::Drawing::Size(27, 27);
			this->One_card->TabIndex = 62;
			this->One_card->Text = L"\?";
			this->One_card->Click += gcnew System::EventHandler(this, &MyForm::One_card_Click);
			// 
			// Top
			// 
			this->Top->AutoSize = true;
			this->Top->BackColor = System::Drawing::Color::White;
			this->Top->Font = (gcnew System::Drawing::Font(L"굴림", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->Top->ForeColor = System::Drawing::Color::Black;
			this->Top->Location = System::Drawing::Point(1116, 700);
			this->Top->Name = L"Top";
			this->Top->Size = System::Drawing::Size(27, 27);
			this->Top->TabIndex = 63;
			this->Top->Text = L"\?";
			this->Top->Click += gcnew System::EventHandler(this, &MyForm::Top_Click);
			// 
			// probability
			// 
			this->probability->AutoSize = true;
			this->probability->BackColor = System::Drawing::Color::White;
			this->probability->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->probability->Font = (gcnew System::Drawing::Font(L"굴림", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->probability->ForeColor = System::Drawing::Color::Black;
			this->probability->Location = System::Drawing::Point(1019, 749);
			this->probability->Name = L"probability";
			this->probability->Size = System::Drawing::Size(144, 29);
			this->probability->TabIndex = 64;
			this->probability->Text = L"probability";
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::Color::Maroon;
			this->button1->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(749, 760);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(46, 25);
			this->button1->TabIndex = 66;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox63
			// 
			this->pictureBox63->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox63.Image")));
			this->pictureBox63->Location = System::Drawing::Point(845, 15);
			this->pictureBox63->Name = L"pictureBox63";
			this->pictureBox63->Size = System::Drawing::Size(189, 100);
			this->pictureBox63->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox63->TabIndex = 67;
			this->pictureBox63->TabStop = false;
			// 
			// pictureBox111
			// 
			this->pictureBox111->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox111.Image")));
			this->pictureBox111->Location = System::Drawing::Point(1116, 15);
			this->pictureBox111->Name = L"pictureBox111";
			this->pictureBox111->Size = System::Drawing::Size(189, 100);
			this->pictureBox111->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox111->TabIndex = 67;
			this->pictureBox111->TabStop = false;
			// 
			// pictureBox112
			// 
			this->pictureBox112->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox112.Image")));
			this->pictureBox112->Location = System::Drawing::Point(845, 160);
			this->pictureBox112->Name = L"pictureBox112";
			this->pictureBox112->Size = System::Drawing::Size(189, 100);
			this->pictureBox112->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox112->TabIndex = 67;
			this->pictureBox112->TabStop = false;
			// 
			// pictureBox113
			// 
			this->pictureBox113->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox113.Image")));
			this->pictureBox113->Location = System::Drawing::Point(1116, 160);
			this->pictureBox113->Name = L"pictureBox113";
			this->pictureBox113->Size = System::Drawing::Size(189, 100);
			this->pictureBox113->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox113->TabIndex = 67;
			this->pictureBox113->TabStop = false;
			// 
			// pictureBox114
			// 
			this->pictureBox114->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox114.Image")));
			this->pictureBox114->Location = System::Drawing::Point(845, 305);
			this->pictureBox114->Name = L"pictureBox114";
			this->pictureBox114->Size = System::Drawing::Size(189, 100);
			this->pictureBox114->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox114->TabIndex = 67;
			this->pictureBox114->TabStop = false;
			// 
			// pictureBox115
			// 
			this->pictureBox115->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox115.Image")));
			this->pictureBox115->Location = System::Drawing::Point(1116, 305);
			this->pictureBox115->Name = L"pictureBox115";
			this->pictureBox115->Size = System::Drawing::Size(189, 100);
			this->pictureBox115->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox115->TabIndex = 67;
			this->pictureBox115->TabStop = false;
			// 
			// pictureBox116
			// 
			this->pictureBox116->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox116.Image")));
			this->pictureBox116->Location = System::Drawing::Point(845, 450);
			this->pictureBox116->Name = L"pictureBox116";
			this->pictureBox116->Size = System::Drawing::Size(189, 100);
			this->pictureBox116->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox116->TabIndex = 67;
			this->pictureBox116->TabStop = false;
			// 
			// pictureBox117
			// 
			this->pictureBox117->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox117.Image")));
			this->pictureBox117->Location = System::Drawing::Point(1116, 450);
			this->pictureBox117->Name = L"pictureBox117";
			this->pictureBox117->Size = System::Drawing::Size(189, 100);
			this->pictureBox117->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox117->TabIndex = 67;
			this->pictureBox117->TabStop = false;
			// 
			// pictureBox118
			// 
			this->pictureBox118->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox118.Image")));
			this->pictureBox118->Location = System::Drawing::Point(845, 595);
			this->pictureBox118->Name = L"pictureBox118";
			this->pictureBox118->Size = System::Drawing::Size(189, 100);
			this->pictureBox118->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox118->TabIndex = 67;
			this->pictureBox118->TabStop = false;
			// 
			// pictureBox119
			// 
			this->pictureBox119->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox119.Image")));
			this->pictureBox119->Location = System::Drawing::Point(1116, 595);
			this->pictureBox119->Name = L"pictureBox119";
			this->pictureBox119->Size = System::Drawing::Size(189, 100);
			this->pictureBox119->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox119->TabIndex = 67;
			this->pictureBox119->TabStop = false;
			// 
			// Mountain
			// 
			this->Mountain->AutoSize = true;
			this->Mountain->Location = System::Drawing::Point(728, 425);
			this->Mountain->Name = L"Mountain";
			this->Mountain->Size = System::Drawing::Size(38, 12);
			this->Mountain->TabIndex = 68;
			this->Mountain->Text = L"label2";
			this->Mountain->Visible = false;
			// 
			// Back_St_Plush
			// 
			this->Back_St_Plush->AutoSize = true;
			this->Back_St_Plush->Location = System::Drawing::Point(728, 438);
			this->Back_St_Plush->Name = L"Back_St_Plush";
			this->Back_St_Plush->Size = System::Drawing::Size(38, 12);
			this->Back_St_Plush->TabIndex = 69;
			this->Back_St_Plush->Text = L"label3";
			this->Back_St_Plush->Visible = false;
			// 
			// Back_St
			// 
			this->Back_St->AutoSize = true;
			this->Back_St->Location = System::Drawing::Point(728, 451);
			this->Back_St->Name = L"Back_St";
			this->Back_St->Size = System::Drawing::Size(38, 12);
			this->Back_St->TabIndex = 70;
			this->Back_St->Text = L"label4";
			this->Back_St->Visible = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox16->Location = System::Drawing::Point(312, 310);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(120, 160);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox16->TabIndex = 21;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Click += gcnew System::EventHandler(this, &MyForm::pictureBox16_Click);
			// 
			// pictureBox109
			// 
			this->pictureBox109->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox109->Location = System::Drawing::Point(366, 322);
			this->pictureBox109->Name = L"pictureBox109";
			this->pictureBox109->Size = System::Drawing::Size(120, 160);
			this->pictureBox109->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox109->TabIndex = 39;
			this->pictureBox109->TabStop = false;
			this->pictureBox109->Visible = false;
			this->pictureBox109->Click += gcnew System::EventHandler(this, &MyForm::pictureBox109_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Georgia", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(815, 741);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(203, 37);
			this->textBox1->TabIndex = 71;
			this->textBox1->Text = L"Can I win \? ->";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1350, 788);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox109);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->Back_St);
			this->Controls->Add(this->Back_St_Plush);
			this->Controls->Add(this->Mountain);
			this->Controls->Add(this->pictureBox119);
			this->Controls->Add(this->pictureBox117);
			this->Controls->Add(this->pictureBox115);
			this->Controls->Add(this->pictureBox113);
			this->Controls->Add(this->pictureBox111);
			this->Controls->Add(this->pictureBox118);
			this->Controls->Add(this->pictureBox116);
			this->Controls->Add(this->pictureBox114);
			this->Controls->Add(this->pictureBox112);
			this->Controls->Add(this->pictureBox63);
			this->Controls->Add(this->probability);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Triple);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Top);
			this->Controls->Add(this->One_card);
			this->Controls->Add(this->pictureBox110);
			this->Controls->Add(this->Two_card);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->St);
			this->Controls->Add(this->two);
			this->Controls->Add(this->one);
			this->Controls->Add(this->St_Plush);
			this->Controls->Add(this->two_two);
			this->Controls->Add(this->two_one);
			this->Controls->Add(this->Royal_St_Plush);
			this->Controls->Add(this->four_card);
			this->Controls->Add(this->image_reset);
			this->Controls->Add(this->Full_house);
			this->Controls->Add(this->pictureBox108);
			this->Controls->Add(this->Flush);
			this->Controls->Add(this->pictureBox107);
			this->Controls->Add(this->pictureBox106);
			this->Controls->Add(this->pictureBox105);
			this->Controls->Add(this->pictureBox104);
			this->Controls->Add(this->pictureBox103);
			this->Controls->Add(this->pictureBox96);
			this->Controls->Add(this->pictureBox102);
			this->Controls->Add(this->pictureBox101);
			this->Controls->Add(this->pictureBox100);
			this->Controls->Add(this->pictureBox99);
			this->Controls->Add(this->pictureBox98);
			this->Controls->Add(this->pictureBox97);
			this->Controls->Add(this->pictureBox95);
			this->Controls->Add(this->pictureBox94);
			this->Controls->Add(this->pictureBox93);
			this->Controls->Add(this->pictureBox92);
			this->Controls->Add(this->pictureBox91);
			this->Controls->Add(this->pictureBox90);
			this->Controls->Add(this->pictureBox89);
			this->Controls->Add(this->pictureBox88);
			this->Controls->Add(this->pictureBox87);
			this->Controls->Add(this->pictureBox86);
			this->Controls->Add(this->pictureBox85);
			this->Controls->Add(this->pictureBox84);
			this->Controls->Add(this->pictureBox83);
			this->Controls->Add(this->pictureBox81);
			this->Controls->Add(this->pictureBox82);
			this->Controls->Add(this->pictureBox80);
			this->Controls->Add(this->pictureBox79);
			this->Controls->Add(this->pictureBox75);
			this->Controls->Add(this->pictureBox71);
			this->Controls->Add(this->pictureBox78);
			this->Controls->Add(this->pictureBox74);
			this->Controls->Add(this->pictureBox69);
			this->Controls->Add(this->pictureBox77);
			this->Controls->Add(this->pictureBox73);
			this->Controls->Add(this->pictureBox70);
			this->Controls->Add(this->pictureBox76);
			this->Controls->Add(this->pictureBox72);
			this->Controls->Add(this->pictureBox68);
			this->Controls->Add(this->pictureBox67);
			this->Controls->Add(this->pictureBox66);
			this->Controls->Add(this->pictureBox64);
			this->Controls->Add(this->pictureBox65);
			this->Controls->Add(this->pictureBox35);
			this->Controls->Add(this->pictureBox48);
			this->Controls->Add(this->pictureBox57);
			this->Controls->Add(this->pictureBox62);
			this->Controls->Add(this->pictureBox61);
			this->Controls->Add(this->pictureBox60);
			this->Controls->Add(this->pictureBox59);
			this->Controls->Add(this->pictureBox58);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox56);
			this->Controls->Add(this->pictureBox47);
			this->Controls->Add(this->pictureBox38);
			this->Controls->Add(this->pictureBox34);
			this->Controls->Add(this->pictureBox55);
			this->Controls->Add(this->pictureBox53);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox45);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox54);
			this->Controls->Add(this->pictureBox52);
			this->Controls->Add(this->pictureBox39);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox51);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox50);
			this->Controls->Add(this->pictureBox37);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox49);
			this->Controls->Add(this->pictureBox36);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox46);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->pictureBox44);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox43);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->pictureBox42);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->pictureBox41);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->pictureBox40);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox28);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->pictureBox14);
			this->ForeColor = System::Drawing::SystemColors::Control;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"2 = 0";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox73))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox74))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox75))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox76))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox77))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox78))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox79))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox80))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox81))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox82))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox83))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox84))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox85))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox86))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox87))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox88))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox89))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox90))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox91))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox92))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox93))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox94))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox95))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox96))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox97))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox98))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox99))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox100))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox101))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox102))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox103))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox104))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox105))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox106))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox107))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox108))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->image_reset))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->two_one))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->two_two))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->one))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->two))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox110))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox111))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox112))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox113))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox114))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox115))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox116))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox117))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox118))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox119))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox109))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}




#pragma endregion

		int i = 0;
		int card_n;
		int suit;
		int clubs = 10;
		int hearts = 20;
		int diamonds = 30;
		int spades = 40;

		//int x1, x2, x3, x4, x5, x6, x7;







		/*int cal(int number, int suit) {
			result = number * suit;
			return result;
		}*/

	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void panel1_Paint_1(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}

	private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void panel14_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void panel53_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox15_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox31_Click(System::Object^  sender, System::EventArgs^  e) {

		pictureBox31->Enabled = false;

		card_n = 16;
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox61->Image; i++; /*pictureBox16->Disable*/ }
		else if (i == 1) { pictureBox109->Image = pictureBox61->Image; pictureBox109->Visible = true; i++;

		x2 = card_n;
			Deal1();
			Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
			Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
			St_Plush->Text = Convert::ToString(result_array[2] + "%" );
			four_card->Text = Convert::ToString(result_array[3] + "%" );
			Full_house->Text = Convert::ToString(result_array[4] + "%" );
			Flush->Text = Convert::ToString(result_array[5] + "%" );
			Mountain->Text = Convert::ToString(result_array[6] + "%" );
			Back_St->Text = Convert::ToString(result_array[7] + "%" );
			St->Text = Convert::ToString(result_array[8] + "%" );
			Triple->Text = Convert::ToString(result_array[9] + "%" );
			Two_card->Text = Convert::ToString(result_array[10] + "%" );
			One_card->Text = Convert::ToString(result_array[11] + "%" );
			Top->Text = Convert::ToString(result_array[12] + "%" );
			probability->Text = Convert::ToString(result_array[13] + "%" );

			for (int j = 0; j < 13; j++) {
				result_array[j] = 0;
			}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox61->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox61->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox61->Image; two_two->Visible = true; two_two->BringToFront(); i++;


		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox61->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox61->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox24->Enabled = false;

		card_n = 24;
		
		if (i == 0) {x1 = card_n; pictureBox16->Image = pictureBox57->Image; i++; }
		else if (i == 1) {
			pictureBox109->Image = pictureBox57->Image; pictureBox109->Visible = true; i++;
			// 2장 뽑았을때 랭크별 확률  

			x2 = card_n;

			Deal1();

			Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
			Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
			St_Plush->Text = Convert::ToString(result_array[2] + "%" );
			four_card->Text = Convert::ToString(result_array[3] + "%" );
			Full_house->Text = Convert::ToString(result_array[4] + "%" );
			Flush->Text = Convert::ToString(result_array[5] + "%" );
			Mountain->Text = Convert::ToString(result_array[6] + "%" );
			Back_St->Text = Convert::ToString(result_array[7] + "%" );
			St->Text = Convert::ToString(result_array[8] + "%" );
			Triple->Text = Convert::ToString(result_array[9] + "%" );
			Two_card->Text = Convert::ToString(result_array[10] + "%" );
			One_card->Text = Convert::ToString(result_array[11] + "%" );
			Top->Text = Convert::ToString(result_array[12] + "%" );
			probability->Text = Convert::ToString(result_array[13] + "%" );

			for (int j = 0; j < 13; j++) {
				result_array[j] = 0;
			}

		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox57->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox57->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox57->Image; two_two->Visible = true; two_two->BringToFront(); i++;

		x5 = card_n;

			Deal2();

			Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
			Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
			St_Plush->Text = Convert::ToString(result_array[2] + "%" );
			four_card->Text = Convert::ToString(result_array[3] + "%" );
			Full_house->Text = Convert::ToString(result_array[4] + "%" );
			Flush->Text = Convert::ToString(result_array[5] + "%" );
			Mountain->Text = Convert::ToString(result_array[6] + "%" );
			Back_St->Text = Convert::ToString(result_array[7] + "%" );
			St->Text = Convert::ToString(result_array[8] + "%" );
			Triple->Text = Convert::ToString(result_array[9] + "%" );
			Two_card->Text = Convert::ToString(result_array[10] + "%" );
			One_card->Text = Convert::ToString(result_array[11] + "%" );
			Top->Text = Convert::ToString(result_array[12] + "%" );
			probability->Text = Convert::ToString(result_array[13] + "%" );

			for (int j = 0; j < 13; j++) {
				result_array[j] = 0;
			}
		}
		else if (i == 5) { one->Image = pictureBox57->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox57->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox10_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox10->Enabled = false;
		
		card_n = 9;
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox70->Image; i++; }
		else if (i == 1) {pictureBox109->Image = pictureBox70->Image; pictureBox109->Visible = true; i++;

		x2 = card_n;


			Deal1();

			Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
			Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
			St_Plush->Text = Convert::ToString(result_array[2] + "%" );
			four_card->Text = Convert::ToString(result_array[3] + "%" );
			Full_house->Text = Convert::ToString(result_array[4] + "%" );
			Flush->Text = Convert::ToString(result_array[5] + "%" );
			Mountain->Text = Convert::ToString(result_array[6] + "%" );
			Back_St->Text = Convert::ToString(result_array[7] + "%" );
			St->Text = Convert::ToString(result_array[8] + "%" );
			Triple->Text = Convert::ToString(result_array[9] + "%" );
			Two_card->Text = Convert::ToString(result_array[10] + "%" );
			One_card->Text = Convert::ToString(result_array[11] + "%" );
			Top->Text = Convert::ToString(result_array[12] + "%" );
			probability->Text = Convert::ToString(result_array[13] + "%" );

			for (int j = 0; j < 13; j++) {
				result_array[j] = 0;
			}

		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox70->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox70->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox70->Image; two_two->Visible = true; two_two->BringToFront(); i++; 

		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox70->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox70->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}

	}
	private: System::Void pictureBox25_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox25->Enabled = false;

		card_n = 14;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox81->Image; i++; }
		else if (i == 1) {pictureBox109->Image = pictureBox81->Image; pictureBox109->Visible = true; i++;
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}

		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox81->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox81->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox81->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox81->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox81->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox46_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox46->Enabled = false;
		
		card_n = 23;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox99->Image; i++; }
		else if (i == 1) {pictureBox109->Image = pictureBox99->Image; pictureBox109->Visible = true; i++;
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}

		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox99->Image; pictureBox108->Visible = true;  pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox99->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox99->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox99->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox99->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox51_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox51->Enabled = false;
		
		card_n = 35;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox102->Image; i++; }
		else if (i == 1) {pictureBox109->Image = pictureBox102->Image; pictureBox109->Visible = true; i++;
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}


		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox102->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox102->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox102->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox102->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox102->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox40_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox40->Enabled = false;

		card_n = 51;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox106->Image; i++; }
	    else if (i == 1) { pictureBox109->Image = pictureBox106->Image; pictureBox109->Visible = true; i++;
			
		    x2 = card_n;

			Deal1();
			Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
			Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
			St_Plush->Text = Convert::ToString(result_array[2] + "%" );
			four_card->Text = Convert::ToString(result_array[3] + "%" );
			Full_house->Text = Convert::ToString(result_array[4] + "%" );
			Flush->Text = Convert::ToString(result_array[5] + "%" );
			Mountain->Text = Convert::ToString(result_array[6] + "%" );
			Back_St->Text = Convert::ToString(result_array[7] + "%" );
			St->Text = Convert::ToString(result_array[8] + "%" );
			Triple->Text = Convert::ToString(result_array[9] + "%" );
			Two_card->Text = Convert::ToString(result_array[10] + "%" );
			One_card->Text = Convert::ToString(result_array[11] + "%" );
			Top->Text = Convert::ToString(result_array[12] + "%" );
			probability->Text = Convert::ToString(result_array[13] + "%" );

			for (int j = 0; j < 14; j++) {
				result_array[j] = 0;
			}

		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox106->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox106->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox106->Image; two_two->Visible = true; two_two->BringToFront(); i++; 

		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}

		
		}
		else if (i == 5) { one->Image = pictureBox106->Image; one->Visible = true; one->BringToFront(); i++; 
		
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}


		}
		else if (i == 6) { two->Image = pictureBox106->Image; two->Visible = true; two->BringToFront(); i++;
		
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox27_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox27->Enabled = false;
		
		card_n = 0;
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox4->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox4->Image; pictureBox109->Visible = true; i++;
			
			x2 = card_n;
			
			Deal1();
			Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
			Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
			St_Plush->Text = Convert::ToString(result_array[2] + "%" );
			four_card->Text = Convert::ToString(result_array[3] + "%" );
			Full_house->Text = Convert::ToString(result_array[4] + "%" );
			Flush->Text = Convert::ToString(result_array[5] + "%" );
			Mountain->Text = Convert::ToString(result_array[6] + "%" );
			Back_St->Text = Convert::ToString(result_array[7] + "%" );
			St->Text = Convert::ToString(result_array[8] + "%" );
			Triple->Text = Convert::ToString(result_array[9] + "%" );
			Two_card->Text = Convert::ToString(result_array[10] + "%" );
			One_card->Text = Convert::ToString(result_array[11] + "%" );
			Top->Text = Convert::ToString(result_array[12] + "%" );
			probability->Text = Convert::ToString(result_array[13] + "%" );

			for (int j = 0; j < 14; j++) {
				result_array[j] = 0;
			}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox4->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox4->Image; two_one->Visible = true; two_one->BringToFront(); i++;}
		else if (i == 4) { two_two->Image = pictureBox4->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}


		}
		else if (i == 5) {one->Image = pictureBox4->Image; one->Visible = true; one->BringToFront(); i++;

		x6 = card_n;

		Deal3();

		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}

			


		}
		else if (i == 6) { two->Image = pictureBox4->Image; two->Visible = true; two->BringToFront(); i++; 
	
		x7 = card_n;

		Deal4();

		Royal_St_Plush->Text = Convert::ToString(result_array[0]+"%");
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%");
		St_Plush->Text = Convert::ToString(result_array[2] + "%");
		four_card->Text = Convert::ToString(result_array[3] + "%");
		Full_house->Text = Convert::ToString(result_array[4] + "%");
		Flush->Text = Convert::ToString(result_array[5] + "%");
		Mountain->Text = Convert::ToString(result_array[6] + "%");
		Back_St->Text = Convert::ToString(result_array[7] + "%");
		St->Text = Convert::ToString(result_array[8] + "%");
		Triple->Text = Convert::ToString(result_array[9] + "%");
		Two_card->Text = Convert::ToString(result_array[10] + "%");
		One_card->Text = Convert::ToString(result_array[11] + "%");
		Top->Text = Convert::ToString(result_array[12] + "%");
		probability->Text = Convert::ToString(result_array[13] + "%");

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}


		}

	}
	private: System::Void pictureBox28_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox28->Enabled = false;

		card_n = 4;
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox58->Image; i++; }
		else if (i == 1) {pictureBox109->Image = pictureBox58->Image; pictureBox109->Visible = true; i++;

		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}




		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox58->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox58->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox58->Image; two_two->Visible = true; two_two->BringToFront(); i++;
			
		x5 = card_n;

			Deal2();
			Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
			Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
			St_Plush->Text = Convert::ToString(result_array[2] + "%" );
			four_card->Text = Convert::ToString(result_array[3] + "%" );
			Full_house->Text = Convert::ToString(result_array[4] + "%" );
			Flush->Text = Convert::ToString(result_array[5] + "%" );
			Mountain->Text = Convert::ToString(result_array[6] + "%" );
			Back_St->Text = Convert::ToString(result_array[7] + "%" );
			St->Text = Convert::ToString(result_array[8] + "%" );
			Triple->Text = Convert::ToString(result_array[9] + "%" );
			Two_card->Text = Convert::ToString(result_array[10] + "%" );
			One_card->Text = Convert::ToString(result_array[11] + "%" );
			Top->Text = Convert::ToString(result_array[12] + "%" );
			probability->Text = Convert::ToString(result_array[13] + "%" );

			for (int j = 0; j < 14; j++) {
				result_array[j] = 0;
			}
		}





		else if (i == 5) { one->Image = pictureBox58->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}




		else if (i == 6) { two->Image = pictureBox58->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}






	}
	private: System::Void pictureBox8_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox8->Enabled = false;
		
		card_n = 1;
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox68->Image; i++; }
		else if (i == 1) {pictureBox109->Image = pictureBox68->Image; pictureBox109->Visible = true; i++;

		x2 = card_n;

			Deal1();
			Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
			Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
			St_Plush->Text = Convert::ToString(result_array[2] + "%" );
			four_card->Text = Convert::ToString(result_array[3] + "%" );
			Full_house->Text = Convert::ToString(result_array[4] + "%" );
			Flush->Text = Convert::ToString(result_array[5] + "%" );
			Mountain->Text = Convert::ToString(result_array[6] + "%" );
			Back_St->Text = Convert::ToString(result_array[7] + "%" );
			St->Text = Convert::ToString(result_array[8] + "%" );
			Triple->Text = Convert::ToString(result_array[9] + "%" );
			Two_card->Text = Convert::ToString(result_array[10] + "%" );
			One_card->Text = Convert::ToString(result_array[11] + "%" );
			Top->Text = Convert::ToString(result_array[12] + "%" );
			probability->Text = Convert::ToString(result_array[13] + "%" );

			for (int j = 0; j < 14; j++) {
				result_array[j] = 0;
			}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox68->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox68->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox68->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox68->Image; one->Visible = true; one->BringToFront(); i++; 

		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox68->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox22_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox22->Enabled = false;
		
		card_n = 2;
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox80->Image; i++; }
		else if (i == 1) {pictureBox109->Image = pictureBox80->Image; pictureBox109->Visible = true; i++; 
		
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox80->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox80->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox80->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox80->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox80->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox41_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox41->Enabled = false;

		card_n = 3;
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox94->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox94->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox94->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox94->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox94->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox94->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox94->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox9->Enabled = false;
		
		card_n = 5;
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox69->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox69->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox69->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox69->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox69->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox69->Image; one->Visible = true; one->BringToFront(); i++;
		
		x6 = card_n;
		

			Deal3();
			Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
			Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
			St_Plush->Text = Convert::ToString(result_array[2] + "%" );
			four_card->Text = Convert::ToString(result_array[3] + "%" );
			Full_house->Text = Convert::ToString(result_array[4] + "%" );
			Flush->Text = Convert::ToString(result_array[5] + "%" );
			Mountain->Text = Convert::ToString(result_array[6] + "%" );
			Back_St->Text = Convert::ToString(result_array[7] + "%" );
			St->Text = Convert::ToString(result_array[8] + "%" );
			Triple->Text = Convert::ToString(result_array[9] + "%" );
			Two_card->Text = Convert::ToString(result_array[10] + "%" );
			One_card->Text = Convert::ToString(result_array[11] + "%" );
			Top->Text = Convert::ToString(result_array[12] + "%" );
			probability->Text = Convert::ToString(result_array[13] + "%" );

			for (int j = 0; j < 14; j++) {
				result_array[j] = 0;
			}
		}
		else if (i == 6) { two->Image = pictureBox69->Image; two->Visible = true; two->BringToFront(); i++; 

		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox23_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox23->Enabled = false;
		
		card_n = 6;
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox82->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox82->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox82->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox82->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox82->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox82->Image; one->Visible = true; one->BringToFront(); i++; 

		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) {two->Image = pictureBox82->Image; two->Visible = true; two->BringToFront(); i++;
			
		x7 = card_n;
		
		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
			Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
			St_Plush->Text = Convert::ToString(result_array[2] + "%" );
			four_card->Text = Convert::ToString(result_array[3] + "%" );
			Full_house->Text = Convert::ToString(result_array[4] + "%" );
			Flush->Text = Convert::ToString(result_array[5] + "%" );
			Mountain->Text = Convert::ToString(result_array[6] + "%" );
			Back_St->Text = Convert::ToString(result_array[7] + "%" );
			St->Text = Convert::ToString(result_array[8] + "%" );
			Triple->Text = Convert::ToString(result_array[9] + "%" );
			Two_card->Text = Convert::ToString(result_array[10] + "%" );
			One_card->Text = Convert::ToString(result_array[11] + "%" );
			Top->Text = Convert::ToString(result_array[12] + "%" );
			probability->Text = Convert::ToString(result_array[13] + "%" );

			//for (int j = 0; j < 14; j++) {
			//	result_array[j] = 0;
			//}
		}


	}
	private: System::Void pictureBox42_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox42->Enabled = false;
		
		card_n = 7;
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox95->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox95->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox95->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox95->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox95->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox95->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox95->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox29_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox29->Enabled = false;
		
		card_n = 8;
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox59->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox59->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox59->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox59->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox59->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox59->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox59->Image; two->Visible = true; two->BringToFront(); i++; 

		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox24_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox24->Enabled = false;
		
		card_n = 10;
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox83->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox83->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox83->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox83->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox83->Image; two_two->Visible = true; two_two->BringToFront(); i++; 

		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox83->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox83->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox43_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox43->Enabled = false;
		
		card_n = 11;
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox96->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox96->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox96->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox96->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox96->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox96->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox96->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox30_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox30->Enabled = false;
		
		card_n = 12;
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox60->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox60->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox60->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox60->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox60->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox60->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox60->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox11_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox11->Enabled = false;
		
		card_n = 13;
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox71->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox71->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox71->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox71->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox71->Image; two_two->Visible = true; two_two->BringToFront(); i++; 

		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox71->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox71->Image; two->Visible = true; two->BringToFront(); i++; 

		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox44_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox44->Enabled = false;

		card_n = 15;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox97->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox97->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox97->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox97->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox97->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox97->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox97->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox32_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox32->Enabled = false;

		card_n = 20;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox62->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox62->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox62->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox62->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox62->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox62->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox62->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox54_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox54->Enabled = false;

		card_n = 17;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox72->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox72->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox72->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox72->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox72->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox72->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox72->Image; two->Visible = true; two->BringToFront(); i++; 

		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox12_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox12->Enabled = false;
		
		card_n = 18;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox85->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox85->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox85->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox85->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox85->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox85->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox85->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox26_Click(System::Object^  sender, System::EventArgs^  e) {
	
		pictureBox26->Enabled = false;
		
		card_n = 19;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox98->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox98->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox98->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox98->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox98->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox98->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox98->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox13_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox13->Enabled = false;
		
		card_n = 21;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox74->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox74->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox74->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox74->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox74->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox74->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox74->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox33_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox33->Enabled = false;
		
		card_n = 22;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox84->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox84->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox84->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox84->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox84->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox84->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox84->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox45_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox45->Enabled = false;
		
		card_n = 25;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox73->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox73->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox73->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox73->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox73->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox73->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox73->Image; two->Visible = true; two->BringToFront(); i++; 

		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox55_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox55->Enabled = false;
		
		card_n = 26;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox87->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox87->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox87->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox87->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox87->Image; two_two->Visible = true; two_two->BringToFront(); i++; 

		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox87->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox87->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}///////////////////////////////////////////////////////////////
	private: System::Void pictureBox15_Click_1(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox15->Enabled = false;
		
		card_n = 27;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox100->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox100->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox100->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox100->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox100->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox100->Image; one->Visible = true; one->BringToFront(); i++; 

		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox100->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox2->Enabled = false;
		
		card_n = 28;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox48->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox48->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox48->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox48->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox48->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}

		}
		else if (i == 5) { one->Image = pictureBox48->Image; one->Visible = true; one->BringToFront(); i++; 

		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox48->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox17_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox17->Enabled = false;
		
		card_n = 29;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox75->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox75->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox75->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox75->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox75->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox75->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox75->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox36_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox36->Enabled = false;
		
		card_n = 30;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox86->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox86->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox86->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox86->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox86->Image; two_two->Visible = true; two_two->BringToFront(); i++; 

		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox86->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox86->Image; two->Visible = true; two->BringToFront(); i++; 

		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox49_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox49->Enabled = false;
		
		card_n = 31;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox101->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox101->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox101->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox101->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox101->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox101->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox101->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox3->Enabled = false;
		
		card_n = 32;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox35->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox35->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox35->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox35->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox35->Image; two_two->Visible = true; two_two->BringToFront(); i++; 

		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox35->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox35->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox19_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox19->Enabled = false;
		
		card_n = 33;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox76->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox76->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox76->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox76->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox76->Image; two_two->Visible = true; two_two->BringToFront(); i++; 

		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox76->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox76->Image; two->Visible = true; two->BringToFront(); i++; 

		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox53_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox53->Enabled = false;

		card_n = 34;
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox89->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox89->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox89->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox89->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox89->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox89->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox89->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox38_Click_1(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox38->Enabled = false;
		
		card_n = 36;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox65->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox65->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox65->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox65->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox65->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox65->Image; one->Visible = true; one->BringToFront(); i++; 

		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox65->Image; two->Visible = true; two->BringToFront(); i++; 

		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox34_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox34->Enabled = false;
		
		card_n = 37;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox78->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox78->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox78->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox78->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox78->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox78->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox78->Image; two->Visible = true; two->BringToFront(); i++; 

		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	};
	private: System::Void pictureBox47_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox47->Enabled = false;
		
		card_n = 38;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox88->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox88->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox88->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox88->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox88->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox88->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox88->Image; two->Visible = true; two->BringToFront(); i++; 

		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox56_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox56->Enabled = false;
		
		card_n = 39;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox103->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox103->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox103->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox103->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox103->Image; two_two->Visible = true; two_two->BringToFront(); i++; 

		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox103->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox103->Image; two->Visible = true; two->BringToFront(); i++; 

		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox5->Enabled = false;
		
		card_n = 40;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox64->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox64->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox64->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox64->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox64->Image; two_two->Visible = true; two_two->BringToFront(); i++; 

		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}

		}
		else if (i == 5) { one->Image = pictureBox64->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}

		}
		else if (i == 6) { two->Image = pictureBox64->Image; two->Visible = true; two->BringToFront(); i++; 

		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox18_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox18->Enabled = false;
		
		card_n = 41;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox77->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox77->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox77->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox77->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox77->Image; two_two->Visible = true; two_two->BringToFront(); i++; 

		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox77->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox77->Image; two->Visible = true; two->BringToFront(); i++; 

		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox37_Click(System::Object^  sender, System::EventArgs^  e) {
	
		pictureBox37->Enabled = false;
		
		card_n = 42;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox91->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox91->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox91->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox91->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox91->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox91->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox91->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox50_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox50->Enabled = false;

		card_n = 43;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox104->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox104->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox104->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox104->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox104->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox104->Image; one->Visible = true; one->BringToFront(); i++; 

		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox104->Image; two->Visible = true; two->BringToFront(); i++; 

		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox6->Enabled = false;
		
		card_n = 44;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox66->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox66->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox66->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox66->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox66->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox66->Image; one->Visible = true; one->BringToFront(); i++; 

		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox66->Image; two->Visible = true; two->BringToFront(); i++; 


		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox20_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox20->Enabled = false;
		
		card_n = 45;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox79->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox79->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox79->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox79->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox79->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 5) { one->Image = pictureBox79->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox79->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox39_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox39->Enabled = false;
		
		card_n = 46;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox90->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox90->Image; pictureBox109->Visible = true; i++; 
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox90->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox90->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox90->Image; two_two->Visible = true; two_two->BringToFront(); i++; 

		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		
		}
		else if (i == 5) { one->Image = pictureBox90->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox90->Image; two->Visible = true; two->BringToFront(); i++; 


		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox52_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox52->Enabled = false;
		
		card_n = 47;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox105->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox105->Image; pictureBox109->Visible = true; i++; 

		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox105->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox105->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox105->Image; two_two->Visible = true; two_two->BringToFront(); i++; 

		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		
		}

		else if (i == 5) { one->Image = pictureBox105->Image; one->Visible = true; one->BringToFront(); i++; 
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox105->Image; two->Visible = true; two->BringToFront(); i++; 
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox14_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox14->Enabled = false;
		
		card_n = 48;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox67->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox67->Image; pictureBox109->Visible = true; i++; 
		
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox67->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox67->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox67->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}


		
		}
		else if (i == 5) { one->Image = pictureBox67->Image; one->Visible = true; one->BringToFront(); i++; 
		
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 6) { two->Image = pictureBox67->Image; two->Visible = true; two->BringToFront(); i++; 
		
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox7->Enabled = false;
		
		card_n = 49;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox93->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox93->Image; pictureBox109->Visible = true; i++; 
		
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox93->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox93->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox93->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}

		}
		else if (i == 5) { one->Image = pictureBox93->Image; one->Visible = true; one->BringToFront(); i++; 
		
		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		
		}
		else if (i == 6) { two->Image = pictureBox93->Image; two->Visible = true; two->BringToFront(); i++; 
		
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void pictureBox21_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pictureBox21->Enabled = false;
		
		card_n = 50;
		
		if (i == 0) { x1 = card_n; pictureBox16->Image = pictureBox92->Image; i++; }
		else if (i == 1) { pictureBox109->Image = pictureBox92->Image; pictureBox109->Visible = true; i++; 
		
		x2 = card_n;

		Deal1();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}

		
		}
		else if (i == 2) { x3 = card_n; pictureBox108->Image = pictureBox92->Image; pictureBox108->Visible = true; pictureBox108->BringToFront(); i++; }
		else if (i == 3) { x4 = card_n; two_one->Image = pictureBox92->Image; two_one->Visible = true; two_one->BringToFront(); i++; }
		else if (i == 4) { two_two->Image = pictureBox92->Image; two_two->Visible = true; two_two->BringToFront(); i++; 
		
		x5 = card_n;

		Deal2();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}

		
		}
		else if (i == 5) { one->Image = pictureBox92->Image; one->Visible = true; one->BringToFront(); i++; 

		x6 = card_n;

		Deal3();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}

		}
		else if (i == 6) { two->Image = pictureBox92->Image; two->Visible = true; two->BringToFront(); i++; 
		
		x7 = card_n;

		Deal4();
		Royal_St_Plush->Text = Convert::ToString(result_array[0] + "%" );
		Back_St_Plush->Text = Convert::ToString(result_array[1] + "%" );
		St_Plush->Text = Convert::ToString(result_array[2] + "%" );
		four_card->Text = Convert::ToString(result_array[3] + "%" );
		Full_house->Text = Convert::ToString(result_array[4] + "%" );
		Flush->Text = Convert::ToString(result_array[5] + "%" );
		Mountain->Text = Convert::ToString(result_array[6] + "%" );
		Back_St->Text = Convert::ToString(result_array[7] + "%" );
		St->Text = Convert::ToString(result_array[8] + "%" );
		Triple->Text = Convert::ToString(result_array[9] + "%" );
		Two_card->Text = Convert::ToString(result_array[10] + "%" );
		One_card->Text = Convert::ToString(result_array[11] + "%" );
		Top->Text = Convert::ToString(result_array[12] + "%" );
		probability->Text = Convert::ToString(result_array[13] + "%" );

		for (int j = 0; j < 14; j++) {
			result_array[j] = 0;
		}
		}


	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		//MessageBox::Show("sleepGround");
		i = 0;
		pictureBox16->Image = image_reset->Image;

		pictureBox109->Image = image_reset->Image;
		pictureBox109->Visible = false;

		pictureBox108->Image = image_reset->Image;
		pictureBox108->Visible = false;

		two_one->Image = image_reset->Image;
		two_one->Visible = false;

		two_two->Image = image_reset->Image;
		two_two->Visible = false;

		one->Image = image_reset->Image;
		one->Visible = false;

		two->Image = image_reset->Image;
		two->Visible = false;

		//Royal_St_Plush->BackColor = Color::Yellow;
		//Royal_St_Plush->Text = Convert::ToString(0.003400);
		
		
		Royal_St_Plush->Text = "0";
		Back_St_Plush->Text = "0";
		St_Plush->Text = "0";
		four_card->Text = "0";
		Full_house->Text = "0";
		Flush->Text = "0";
		Mountain->Text = "0";
		Back_St->Text = "0";
		St->Text = "0";
		Triple->Text = "0";
		Two_card->Text = "0";
		One_card->Text = "0";
		Top->Text = "0";
		probability->Text = "?";

		pictureBox36->Enabled = true;
		pictureBox49->Enabled = true;
		pictureBox3->Enabled = true;
		pictureBox19->Enabled = true;
		pictureBox53->Enabled = true;
		pictureBox38->Enabled = true;
		pictureBox34->Enabled = true;
		pictureBox47->Enabled = true;
		pictureBox56->Enabled = true;
		pictureBox5->Enabled = true;
		pictureBox18->Enabled = true;
		pictureBox37->Enabled = true;
		pictureBox50->Enabled = true;
		pictureBox6->Enabled = true;
		pictureBox20->Enabled = true;
		pictureBox39->Enabled = true;
		pictureBox52->Enabled = true;
		pictureBox14->Enabled = true;
		pictureBox7->Enabled = true;
		pictureBox21->Enabled = true;
		pictureBox31->Enabled = true;
		pictureBox24->Enabled = true;
		pictureBox10->Enabled = true;
		pictureBox25->Enabled = true;
		pictureBox46->Enabled = true;
		pictureBox51->Enabled = true;
		pictureBox40->Enabled = true;
		pictureBox27->Enabled = true;
		pictureBox28->Enabled = true;
		pictureBox8->Enabled = true;
		pictureBox22->Enabled = true;
		pictureBox41->Enabled = true;
		pictureBox9->Enabled = true;
		pictureBox23->Enabled = true;
		pictureBox42->Enabled = true;
		pictureBox29->Enabled = true;
		pictureBox24->Enabled = true;
		pictureBox43->Enabled = true;
		pictureBox30->Enabled = true;
		pictureBox11->Enabled = true;
		pictureBox44->Enabled = true;
		pictureBox32->Enabled = true;
		pictureBox54->Enabled = true;
		pictureBox12->Enabled = true;
		pictureBox26->Enabled = true;
		pictureBox13->Enabled = true;
		pictureBox33->Enabled = true;
		pictureBox45->Enabled = true;
		pictureBox55->Enabled = true;
		pictureBox15->Enabled = true;
		pictureBox2->Enabled = true;
		pictureBox17->Enabled = true;




	}
	private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox16_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox16->BringToFront();
	}
	private: System::Void pictureBox86_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox109_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox109->BringToFront();
	}
	private: System::Void pictureBox108_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox108->BringToFront();
	}
	private: System::Void two_one_Click(System::Object^  sender, System::EventArgs^  e) {
		two_one->BringToFront();
	}
	private: System::Void two_two_Click(System::Object^  sender, System::EventArgs^  e) {
		two_two->BringToFront();
	}
	private: System::Void one_Click(System::Object^  sender, System::EventArgs^  e) {
		one->BringToFront();
	}
	private: System::Void two_Click(System::Object^  sender, System::EventArgs^  e) {
		two->BringToFront();
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		ranking_board^ rb = gcnew ranking_board();
		rb->Show();

	}
	private: System::Void panel1_Paint_2(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void clubs_score_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void hearts_score_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox63_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void panel2_Paint_1(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void image_reset_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();

}
private: System::Void Royal_St_Plush_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void St_Plush_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Full_house_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void four_card_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Flush_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void St_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Two_card_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Triple_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void One_card_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Top_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}

void Deal1()
{
	cardreset();
	hand1(0, x1); hand1(1, x2);
	FirstDeal();
}
void Deal2()
{

	c1(0, x3); c1(1, x4); c1(2, x5);
	SecondDeal();
}
void Deal3()
{
	c1(3, x6);
	ThirdDeal();
}

void Deal4()
{
	c1(4, x7);
	FourthdDeal();
}

void cardreset()
{
	int i;
	for (i = 0; i < 52; i++)
	{
		card[i].pick = i;
		card[i].shape = shape(i);
		card[i].value = value(i);
	}
}
void hand1(int i, int j)
{
	hand[i].pick = j;
	hand[i].shape = shape(j);
	hand[i].value = value(j);
}
void c1(int i, int j)
{
	c[i].pick = j;
	c[i].shape = shape(j);
	c[i].value = value(j);
}

int shape(int a)
{
	if ((a + 1) % 4 == 0)
		return 4;
	else
		return (a + 1) % 4;
}
int value(int a)
{
	if ((a + 1) % 4 == 0)
		return (a + 1) / 4;
	else
		return ((a + 1) / 4) + 1;
}


void FirstDeal()
{
	int x, y;
	int card1[50] = { 0 };//입력된 패를 제외한 카드의 배열
	int hidden[45] = { 0 };//손패+커뮤니티 를 제외한 카드 배열
	int h1 = 0, h2 = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;// 전부 임시로 정해준 변수라 봐도 무방함

	for (x = 0, y = 0; x < 50; x++, y++)//손패 ab를 제외한 배열 만들기
	{
		if (y == hand[0].pick || y == hand[1].pick)
			x--;
		else
			card1[x] = card[y].pick;
	}


	for (c1 = 0; c1 < 46; c1++)
	{
		for (c2 = c1 + 1; c2 < 47; c2++)
		{
			for (c3 = c2 + 1; c3 < 48; c3++)
			{
				for (c4 = c3 + 1; c4 < 49; c4++)
				{
					for (c5 = c4 + 1; c5 < 50; c5++)
					{
						int j, k;
						int num[7];
						int temp;

						num[0] = card1[c1];    num[1] = card1[c2];    num[2] = card1[c3];    num[3] = card1[c4];    num[4] = card1[c5];    num[5] = hand[0].pick;    num[6] = hand[1].pick;
						for (j = 0; j < 7; j++)
						{
							for (k = 0; k < 6; k++)
							{
								if (num[k] > num[k + 1])
								{
									temp = num[k];
									num[k] = num[k + 1];
									num[k + 1] = temp;
								}
							}
						}
						score1 = RANK(num[0], num[1], num[2], num[3], num[4], num[5], num[6]);

						allc++;

						if (allc >= 1000000 && allc % 1000000 == 0)
							printf("%d %d %d %d %d %d %d\n로딩 %d \n", num[0], num[1], num[2], num[3], num[4], num[5], num[6], allc);


					}
				}
			}
		}

	}

	ab[0] = (double)RSTFLc / allc * 100000;
	ab[1] = (double)BSTFLc / allc * 100000;
	ab[2] = (double)STFLc / allc * 100000;
	ab[3] = (double)FOCAc / allc * 100000;
	ab[4] = (double)FULLc / allc * 100000;
	ab[5] = (double)FLSHc / allc * 100000;
	ab[6] = (double)MOUNc / allc * 100000;
	ab[7] = (double)BSTc / allc * 100000;
	ab[8] = (double)STc / allc * 100000;
	ab[9] = (double)TRIc / allc * 100000;
	ab[10] = (double)TWOPc / allc * 100000;
	ab[11] = (double)ONEPc / allc * 100000;
	ab[12] = (double)TOPc / allc * 100000;
	ab[13] = (double)win1 / allc * 100000;
	int i;
	for (i = 0; i < 14; i++)
	{
		result_array[i] = (double)ab[i] / 1000;
	}
	printf("로스플 확률 : %.3lf\n백스플 확률 : %.3lf\n스플 확률 : %lf\n포카드 확률 : %lf\n풀하우스 확률 : %lf\n플러쉬 확률 : %lf\n마운틴 확률 : %lf\n백스트 확률 : %lf\n스트레이트 확률 : %lf\n트리플 확률 : %lf\n투페어 확률 : %lf\n원페어 확률 : %lf\n탑 확률 : %lf\n승리 확률 : %lf\n"
		, result_array[0], result_array[1], result_array[2], result_array[3], result_array[4], result_array[5], result_array[6], result_array[7], result_array[8], result_array[9], result_array[10], result_array[11], result_array[12], result_array[13]);
	RSTFLc = 0, BSTFLc = 0, STFLc = 0, FOCAc = 0, FULLc = 0, FLSHc = 0, MOUNc = 0, BSTc = 0, STc = 0, TRIc = 0, TWOPc = 0, ONEPc = 0, TOPc = 0, win1 = 0, win2 = 0, allc = 0;
	score1 = 0, score2 = 0;
}



void SecondDeal()
{
	int x, y;
	int card1[47] = { 0 };//입력된 패를 제외한 카드의 배열
	int hidden[45] = { 0 };//손패+커뮤니티 를 제외한 카드 배열
	int h1 = 0, h2 = 0, c1 = 0, c2 = 0;// 전부 임시로 정해준 변수라 봐도 무방함

	for (x = 0, y = 0; x < 47; x++, y++)//손패 ab+커뮤니티3장을 제외한 배열 만들기
	{
		if (y == hand[0].pick || y == hand[1].pick || y == c[0].pick || y == c[1].pick || y == c[2].pick)
			x--;
		else
			card1[x] = card[y].pick;
	}

	for (c1 = 0; c1 < 46; c1++)
	{
		for (c2 = c1 + 1; c2 < 47; c2++)
		{
			for (x = 0, y = 0; x < 45; x++, y++)//내패+커뮤니티 와 겹치지 않는 상대패를 배열로 만들기
			{
				if (y == c1 || y == c2)
					x--;
				else
					hidden[x] = card1[y];

			}
			for (h1 = 0; h1 < 44; h1++)
			{
				for (h2 = h1 + 1; h2 < 45; h2++)
				{
					int j, k;
					int num[7];
					int num2[7];
					int temp;


					num[0] = card1[c1];    num[1] = card1[c2];    num[2] = c[0].pick;  num[3] = c[1].pick;  num[4] = c[2].pick;    num[5] = hand[0].pick;    num[6] = hand[1].pick;
					for (j = 0; j < 7; j++)
					{
						for (k = 0; k < 6; k++)
						{
							if (num[k] > num[k + 1])
							{
								temp = num[k];
								num[k] = num[k + 1];
								num[k + 1] = temp;
							}
						}
					}
					score1 = RANK(num[0], num[1], num[2], num[3], num[4], num[5], num[6]);

					num2[0] = card1[c1];    num2[1] = card1[c2];    num2[2] = c[0].pick;  num2[3] = c[1].pick;  num2[4] = c[2].pick;      num2[5] = hidden[h1];    num2[6] = hidden[h2];
					for (j = 0; j < 7; j++)
					{
						for (k = 0; k < 6; k++)
						{
							if (num2[k] > num2[k + 1])
							{
								temp = num2[k];
								num2[k] = num2[k + 1];
								num2[k + 1] = temp;
							}
						}
					}
					score2 = RANK2(num2[0], num2[1], num2[2], num2[3], num2[4], num2[5], num2[6]);
					if (score1 > score2)
						win1++;
					else if (score2 > score1)
						win2++;
					else if (score1 == score2)
					{
						int b1, s1, b2, s2;

						if (hidden[h1] > hidden[h2])
						{
							b2 = hidden[h1]; s2 = hidden[h2];
						}
						else
						{
							b2 = hidden[h2]; s2 = hidden[h1];
						}
						if (hand[0].pick > hand[1].pick)
						{
							b1 = hand[0].pick; s1 = hand[1].pick;
						}
						else
						{
							b1 = hand[1].pick; s1 = hand[0].pick;
						}
						if (card[b1].value == card[b2].value)
						{
							if (card[s1].value == card[s2].value)
							{
								if (card[b1].shape > card[b2].shape)
									win1++;
								else
									win2++;
							}
							else if (card[s1].value > card[s2].value)
								win1++;
							else
								win2++;
						}
						else if (card[b1].value > card[b2].value)
							win1++;
						else
							win2++;
					}
					allc++;
				}
			}

		}
	}
	ab[0] = (double)RSTFLc / allc * 100000;
	ab[1] = (double)BSTFLc / allc * 100000;
	ab[2] = (double)STFLc / allc * 100000;
	ab[3] = (double)FOCAc / allc * 100000;
	ab[4] = (double)FULLc / allc * 100000;
	ab[5] = (double)FLSHc / allc * 100000;
	ab[6] = (double)MOUNc / allc * 100000;
	ab[7] = (double)BSTc / allc * 100000;
	ab[8] = (double)STc / allc * 100000;
	ab[9] = (double)TRIc / allc * 100000;
	ab[10] = (double)TWOPc / allc * 100000;
	ab[11] = (double)ONEPc / allc * 100000;
	ab[12] = (double)TOPc / allc * 100000;
	ab[13] = (double)win1 / allc * 100000;
	int i;
	for (i = 0; i < 14; i++)
	{
		result_array[i] = (double)ab[i] / 1000;
	}
	printf("로스플 확률 : %.3lf\n백스플 확률 : %.3lf\n스플 확률 : %lf\n포카드 확률 : %lf\n풀하우스 확률 : %lf\n플러쉬 확률 : %lf\n마운틴 확률 : %lf\n백스트 확률 : %lf\n스트레이트 확률 : %lf\n트리플 확률 : %lf\n투페어 확률 : %lf\n원페어 확률 : %lf\n탑 확률 : %lf\n승리 확률 : %lf\n"
		, result_array[0], result_array[1], result_array[2], result_array[3], result_array[4], result_array[5], result_array[6], result_array[7], result_array[8], result_array[9], result_array[10], result_array[11], result_array[12], result_array[13]);
	RSTFLc = 0, BSTFLc = 0, STFLc = 0, FOCAc = 0, FULLc = 0, FLSHc = 0, MOUNc = 0, BSTc = 0, STc = 0, TRIc = 0, TWOPc = 0, ONEPc = 0, TOPc = 0, win1 = 0, win2 = 0, allc = 0;
	score1 = 0, score2 = 0;
}

void ThirdDeal()
{
	int x, y;
	int card1[46] = { 0 };//입력된 패를 제외한 카드의 배열
	int hidden[45] = { 0 };//손패+커뮤니티 를 제외한 카드 배열
	int h1 = 0, h2 = 0, c1 = 0;// 전부 임시로 정해준 변수라 봐도 무방함

	for (x = 0, y = 0; x < 46; x++, y++)//손패 ab+커뮤니티3장을 제외한 배열 만들기
	{
		if (y == hand[0].pick || y == hand[1].pick || y == c[0].pick || y == c[1].pick || y == c[2].pick || y == c[3].pick)
			x--;
		else
			card1[x] = card[y].pick;
	}

	for (c1 = 0; c1 < 46; c1++)
	{
		for (x = 0, y = 0; x < 45; x++, y++)//내패+커뮤니티 와 겹치지 않는 상대패를 배열로 만들기
		{
			if (y == c1)
				x--;
			else
				hidden[x] = card1[y];

		}
		for (h1 = 0; h1 < 44; h1++)
		{
			for (h2 = h1 + 1; h2 < 45; h2++)
			{

				int j, k;
				int num[7];
				int num2[7];
				int temp;


				num[0] = card1[c1];    num[1] = c[3].pick;    num[2] = c[0].pick;  num[3] = c[1].pick;  num[4] = c[2].pick;    num[5] = hand[0].pick;    num[6] = hand[1].pick;
				for (j = 0; j < 7; j++)
				{
					for (k = 0; k < 6; k++)
					{
						if (num[k] > num[k + 1])
						{
							temp = num[k];
							num[k] = num[k + 1];
							num[k + 1] = temp;
						}
					}
				}

				score1 = RANK(num[0], num[1], num[2], num[3], num[4], num[5], num[6]);

				num2[0] = card1[c1];    num2[1] = c[3].pick;    num2[2] = c[0].pick;  num2[3] = c[1].pick;  num2[4] = c[2].pick;    num2[5] = hidden[h1];    num2[6] = hidden[h2];
				for (j = 0; j < 7; j++)
				{
					for (k = 0; k < 6; k++)
					{
						if (num2[k] > num2[k + 1])
						{
							temp = num2[k];
							num2[k] = num2[k + 1];
							num2[k + 1] = temp;
						}
					}
				}

				score2 = RANK2(num2[0], num2[1], num2[2], num2[3], num2[4], num2[5], num2[6]);
				if (score1 > score2)
					win1++;
				else if (score2 > score1)
					win2++;
				else if (score1 == score2)
				{
					int b1, s1, b2, s2;

					if (hidden[h1] > hidden[h2])
					{
						b2 = hidden[h1]; s2 = hidden[h2];
					}
					else
					{
						b2 = hidden[h2]; s2 = hidden[h1];
					}
					if (hand[0].pick > hand[1].pick)
					{
						b1 = hand[0].pick; s1 = hand[1].pick;
					}
					else
					{
						b1 = hand[1].pick; s1 = hand[0].pick;
					}
					if (card[b1].value == card[b2].value)
					{
						if (card[s1].value == card[s2].value)
						{
							if (card[b1].shape > card[b2].shape)
								win1++;
							else
								win2++;
						}
						else if (card[s1].value > card[s2].value)
							win1++;
						else
							win2++;
					}
					else if (card[b1].value > card[b2].value)
						win1++;
					else
						win2++;
				}
				allc++;
			}
		}
	}
	ab[0] = (double)RSTFLc / allc * 100000;
	ab[1] = (double)BSTFLc / allc * 100000;
	ab[2] = (double)STFLc / allc * 100000;
	ab[3] = (double)FOCAc / allc * 100000;
	ab[4] = (double)FULLc / allc * 100000;
	ab[5] = (double)FLSHc / allc * 100000;
	ab[6] = (double)MOUNc / allc * 100000;
	ab[7] = (double)BSTc / allc * 100000;
	ab[8] = (double)STc / allc * 100000;
	ab[9] = (double)TRIc / allc * 100000;
	ab[10] = (double)TWOPc / allc * 100000;
	ab[11] = (double)ONEPc / allc * 100000;
	ab[12] = (double)TOPc / allc * 100000;
	ab[13] = (double)win1 / allc * 100000;
	int i;
	for (i = 0; i < 14; i++)
	{
		result_array[i] = (double)ab[i] / 1000;
	}
	printf("로스플 확률 : %.3lf\n백스플 확률 : %.3lf\n스플 확률 : %lf\n포카드 확률 : %lf\n풀하우스 확률 : %lf\n플러쉬 확률 : %lf\n마운틴 확률 : %lf\n백스트 확률 : %lf\n스트레이트 확률 : %lf\n트리플 확률 : %lf\n투페어 확률 : %lf\n원페어 확률 : %lf\n탑 확률 : %lf\n승리 확률 : %lf\n"
		, result_array[0], result_array[1], result_array[2], result_array[3], result_array[4], result_array[5], result_array[6], result_array[7], result_array[8], result_array[9], result_array[10], result_array[11], result_array[12], result_array[13]);
	RSTFLc = 0, BSTFLc = 0, STFLc = 0, FOCAc = 0, FULLc = 0, FLSHc = 0, MOUNc = 0, BSTc = 0, STc = 0, TRIc = 0, TWOPc = 0, ONEPc = 0, TOPc = 0, win1 = 0, win2 = 0, allc = 0;
	score1 = 0, score2 = 0;

}
void FourthdDeal()
{
	int x, y;
	int hidden[45] = { 0 };//손패+커뮤니티 를 제외한 카드 배열
	int h1 = 0, h2 = 0;// 전부 임시로 정해준 변수라 봐도 무방함

	for (x = 0, y = 0; x < 45; x++, y++)//손패 ab+커뮤니티3장을 제외한 배열 만들기
	{
		if (y == hand[0].pick || y == hand[1].pick || y == c[0].pick || y == c[1].pick || y == c[2].pick || y == c[3].pick || y == c[4].pick)
			x--;
		else
			hidden[x] = card[y].pick;
	}


	for (h1 = 0; h1 < 44; h1++)
	{
		for (h2 = h1 + 1; h2 < 45; h2++)
		{
			int j, k;
			int num[7];
			int num2[7];
			int temp;

			num[0] = c[4].pick;    num[1] = c[3].pick;    num[2] = c[0].pick;  num[3] = c[1].pick;  num[4] = c[2].pick;    num[5] = hand[0].pick;    num[6] = hand[1].pick;
			for (j = 0; j < 7; j++)
			{
				for (k = 0; k < 6; k++)
				{
					if (num[k] > num[k + 1])
					{
						temp = num[k];
						num[k] = num[k + 1];
						num[k + 1] = temp;
					}
				}
			}

			score1 = RANK(num[0], num[1], num[2], num[3], num[4], num[5], num[6]);

			num2[0] = c[4].pick;    num2[1] = c[3].pick;    num2[2] = c[0].pick;  num2[3] = c[1].pick;  num2[4] = c[2].pick;      num2[5] = hidden[h1];    num2[6] = hidden[h2];
			for (j = 0; j < 7; j++)
			{
				for (k = 0; k < 6; k++)
				{
					if (num2[k] > num2[k + 1])
					{
						temp = num2[k];
						num2[k] = num2[k + 1];
						num2[k + 1] = temp;
					}
				}
			}

			score2 = RANK2(num2[0], num2[1], num2[2], num2[3], num2[4], num2[5], num2[6]);
			if (score1 > score2)
				win1++;
			else if (score2 > score1)
				win2++;
			else if (score1 == score2)
			{
				int b1, s1, b2, s2;

				if (hidden[h1] > hidden[h2])
				{
					b2 = hidden[h1]; s2 = hidden[h2];
				}
				else
				{
					b2 = hidden[h2]; s2 = hidden[h1];
				}
				if (hand[0].pick > hand[1].pick)
				{
					b1 = hand[0].pick; s1 = hand[1].pick;
				}
				else
				{
					b1 = hand[1].pick; s1 = hand[0].pick;
				}
				if (card[b1].value == card[b2].value)
				{
					if (card[s1].value == card[s2].value)
					{
						if (card[b1].shape > card[b2].shape)
							win1++;
						else
							win2++;
					}
					else if (card[s1].value > card[s2].value)
						win1++;
					else
						win2++;
				}
				else if (card[b1].value > card[b2].value)
					win1++;
				else
					win2++;
			}
			allc++;
		}
	}
	ab[0] = (double)RSTFLc / allc * 100000;
	ab[1] = (double)BSTFLc / allc * 100000;
	ab[2] = (double)STFLc / allc * 100000;
	ab[3] = (double)FOCAc / allc * 100000;
	ab[4] = (double)FULLc / allc * 100000;
	ab[5] = (double)FLSHc / allc * 100000;
	ab[6] = (double)MOUNc / allc * 100000;
	ab[7] = (double)BSTc / allc * 100000;
	ab[8] = (double)STc / allc * 100000;
	ab[9] = (double)TRIc / allc * 100000;
	ab[10] = (double)TWOPc / allc * 100000;
	ab[11] = (double)ONEPc / allc * 100000;
	ab[12] = (double)TOPc / allc * 100000;
	ab[13] = (double)win1 / allc * 100000;
	int i;
	for (i = 0; i < 14; i++)
	{
		result_array[i] = (double)ab[i] / 1000;
	}
	printf("로스플 확률 : %.3lf\n백스플 확률 : %.3lf\n스플 확률 : %lf\n포카드 확률 : %lf\n풀하우스 확률 : %lf\n플러쉬 확률 : %lf\n마운틴 확률 : %lf\n백스트 확률 : %lf\n스트레이트 확률 : %lf\n트리플 확률 : %lf\n투페어 확률 : %lf\n원페어 확률 : %lf\n탑 확률 : %lf\n승리 확률 : %lf\n"
		, result_array[0], result_array[1], result_array[2], result_array[3], result_array[4], result_array[5], result_array[6], result_array[7], result_array[8], result_array[9], result_array[10], result_array[11], result_array[12], result_array[13]);
	RSTFLc = 0, BSTFLc = 0, STFLc = 0, FOCAc = 0, FULLc = 0, FLSHc = 0, MOUNc = 0, BSTc = 0, STc = 0, TRIc = 0, TWOPc = 0, ONEPc = 0, TOPc = 0, win1 = 0, win2 = 0, allc = 0;
	score1 = 0, score2 = 0;

}




int RSTFL(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	if (card[a7].value != 13)
		return 0;

	int i;
	int num[7];
	int s = 0, c = 0, h = 0, d = 0;

	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;


	for (i = 0; i < 7; i++)
	{
		if (num[i] == 51 || num[i] == 47 || num[i] == 43 || num[i] == 39 || num[i] == 35)
			s++;
		else if (num[i] == 50 || num[i] == 46 || num[i] == 42 || num[i] == 38 || num[i] == 34)
			d++;
		else if (num[i] == 49 || num[i] == 45 || num[i] == 41 || num[i] == 37 || num[i] == 33)
			h++;
		else if (num[i] == 48 || num[i] == 44 || num[i] == 40 || num[i] == 36 || num[i] == 32)
			c++;
	}
	if (s > 4)
	{
		RSTFLc++; return 210000000;
	}
	else if (d > 4)
	{
		RSTFLc++; return 210000000;
	}
	else if (h > 4)
	{
		RSTFLc++; return 210000000;
	}
	else if (c > 4)
	{
		RSTFLc++; return 210000000;
	}

	return 0;
}


int BSTFL(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	if (card[a7].value != 13)
		return 0;

	int i;
	int num[7];
	int s = 0, c = 0, h = 0, d = 0;

	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;


	for (i = 0; i < 7; i++)
	{
		if (num[i] == 51 || num[i] == 3 || num[i] == 7 || num[i] == 11 || num[i] == 15)
			s++;
		else if (num[i] == 50 || num[i] == 6 || num[i] == 2 || num[i] == 14 || num[i] == 10)
			d++;
		else if (num[i] == 49 || num[i] == 5 || num[i] == 1 || num[i] == 9 || num[i] == 13)
			h++;
		else if (num[i] == 48 || num[i] == 4 || num[i] == 0 || num[i] == 8 || num[i] == 12)
			c++;
	}
	if (s > 4)
	{
		STFLc++; return 209000000;
	}
	else if (d > 4)
	{
		STFLc++; return 209000000;
	}
	else if (h > 4)
	{
		STFLc++; return 209000000;
	}
	else if (c > 4)
	{
		STFLc++; return 209000000;
	}

	return 0;
}

int STFLS(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	if (card[a7].value < 5)
		return 0;

	int j, k;
	int num[7];
	int s[7] = { 100,100,100,100,100,100,100 };

	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	for (j = 0, k = 0; j < 7; j++, k++)
	{
		if (num[j] % 4 == 3)
			s[k] = num[j];
		else
			k--;
	}

	if (s[4] == 100)
		return 0;

	if (s[6] == s[5] + 4 && s[5] + 4 == s[4] + 8 && s[4] + 8 == s[3] + 12 && s[3] + 12 == s[2] + 16)
	{
		STFLc++; return 205000000 + (card[s[6]].value * 10) + card[s[6]].shape;
	}
	else if (s[5] == s[4] + 4 && s[4] + 4 == s[3] + 8 && s[3] + 8 == s[2] + 12 && s[2] + 12 == s[1] + 16)
	{
		STFLc++; return 205000000 + (card[s[5]].value * 10) + card[s[5]].shape;
	}
	else if (s[4] == s[3] + 4 && s[3] + 4 == s[2] + 8 && s[2] + 8 == s[1] + 12 && s[1] + 12 == s[0] + 16)
	{
		STFLc++; return 205000000 + (card[s[4]].value * 10) + card[s[4]].shape;
	}
	return 0;
}

int STFLD(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	if (card[a7].value < 5)
		return 0;

	int j, k;
	int num[7];
	int s[7] = { 100,100,100,100,100,100,100 };
	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	for (j = 0, k = 0; j < 7; j++, k++)
	{
		if (num[j] % 4 == 2)
			s[k] = num[j];
		else
			k--;
	}

	if (s[4] == 100)
		return 0;

	if (s[6] == s[5] + 4 && s[5] + 4 == s[4] + 8 && s[4] + 8 == s[3] + 12 && s[3] + 12 == s[2] + 16)
	{
		STFLc++; return 205000000 + (card[s[6]].value * 10) + card[s[6]].shape;
	}
	else if (s[5] == s[4] + 4 && s[4] + 4 == s[3] + 8 && s[3] + 8 == s[2] + 12 && s[2] + 12 == s[1] + 16)
	{
		STFLc++; return 205000000 + (card[s[5]].value * 10) + card[s[5]].shape;
	}
	else if (s[4] == s[3] + 4 && s[3] + 4 == s[2] + 8 && s[2] + 8 == s[1] + 12 && s[1] + 12 == s[0] + 16)
	{
		STFLc++; return 205000000 + (card[s[4]].value * 10) + card[s[4]].shape;
	}
	return 0;
}
int STFLH(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	if (card[a7].value < 5)
		return 0;

	int j, k;
	int num[7];
	int s[7] = { 100,100,100,100,100,100,100 };

	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	for (j = 0, k = 0; j < 7; j++, k++)
	{
		if (num[j] % 4 == 1)
			s[k] = num[j];
		else
			k--;
	}

	if (s[4] == 100)
		return 0;

	if (s[6] == s[5] + 4 && s[5] + 4 == s[4] + 8 && s[4] + 8 == s[3] + 12 && s[3] + 12 == s[2] + 16)
	{
		STFLc++; return 205000000 + (card[s[6]].value * 10) + card[s[6]].shape;
	}
	else if (s[5] == s[4] + 4 && s[4] + 4 == s[3] + 8 && s[3] + 8 == s[2] + 12 && s[2] + 12 == s[1] + 16)
	{
		STFLc++; return 205000000 + (card[s[5]].value * 10) + card[s[5]].shape;
	}
	else if (s[4] == s[3] + 4 && s[3] + 4 == s[2] + 8 && s[2] + 8 == s[1] + 12 && s[1] + 12 == s[0] + 16)
	{
		STFLc++; return 205000000 + (card[s[4]].value * 10) + card[s[4]].shape;
	}
	return 0;
}

int STFLC(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	if (card[a7].value < 5)
		return 0;

	int j, k;
	int num[7];
	int s[7] = { 100,100,100,100,100,100,100 };

	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	for (j = 0, k = 0; j < 7; j++, k++)
	{
		if (num[j] % 4 == 0)
			s[k] = num[j];
		else
			k--;
	}

	if (s[4] == 100)
		return 0;

	if (s[6] == s[5] + 4 && s[5] + 4 == s[4] + 8 && s[4] + 8 == s[3] + 12 && s[3] + 12 == s[2] + 16)
	{
		STFLc++; return 205000000 + (card[s[6]].value * 10) + card[s[6]].shape;
	}
	else if (s[5] == s[4] + 4 && s[4] + 4 == s[3] + 8 && s[3] + 8 == s[2] + 12 && s[2] + 12 == s[1] + 16)
	{
		STFLc++; return 205000000 + (card[s[5]].value * 10) + card[s[5]].shape;
	}
	else if (s[4] == s[3] + 4 && s[3] + 4 == s[2] + 8 && s[2] + 8 == s[1] + 12 && s[1] + 12 == s[0] + 16)
	{
		STFLc++; return 205000000 + (card[s[4]].value * 10) + card[s[4]].shape;
	}

	return 0;
}

int FOCA(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	int i, j;
	int num[7];
	int poca[13] = { 0, };
	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	for (i = 0; i < 7; i++)
	{
		poca[card[num[i]].value - 1]++;
	}

	for (j = 0; j < 13; j++)
	{
		if (poca[j] == 4)
		{
			FOCAc++;
			return 201000000 + j;
		}
	}

	return 0;
}

int FULL(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	int i, j, k;
	int num[7];
	int full[13] = { 0, };
	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	for (i = 0; i < 7; i++)
	{
		full[card[num[i]].value - 1]++;
	}

	for (j = 12; j >= 0; j--)
	{
		if (full[j] == 3)
		{
			for (k = j - 1; k >= 0; k--)
			{
				if (full[k] >= 2)
				{
					FULLc++;
					return 200000000 + (j * 100) + k;
				}
			}
		}
	}
	return 0;
}

int FLSHS(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	int j, k;
	int num[7];
	int s[7] = { 100,100,100,100,100,100,100 };
	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	for (j = 0, k = 0; j < 7; j++, k++)
	{
		if (num[j] % 4 == 3)
			s[k] = num[j];
		else
			k--;
	}

	if (s[4] == 100)
		return 0;

	if (s[6] != 100)
	{
		FLSHc++;
		return 190000000 + (card[s[6]].value * 10000) + (card[s[5]].value * 1000) + (card[s[4]].value * 100) + (card[s[3]].value * 10) + card[s[2]].value;
	}
	else if (s[5] != 100)
	{
		FLSHc++;
		return 190000000 + (card[s[5]].value * 10000) + (card[s[4]].value * 1000) + (card[s[3]].value * 100) + (card[s[2]].value * 10) + card[s[1]].value;
	}
	else if (s[4] != 100)
	{
		FLSHc++;
		return 190000000 + (card[s[4]].value * 10000) + (card[s[3]].value * 1000) + (card[s[2]].value * 100) + (card[s[1]].value * 10) + card[s[0]].value;
	}
	else
		return 0;
}

int FLSHD(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	int j, k;
	int num[7];
	int s[7] = { 100,100,100,100,100,100,100 };
	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	for (j = 0, k = 0; j < 7; j++, k++)
	{
		if (num[j] % 4 == 2)
			s[k] = num[j];
		else
			k--;
	}

	if (s[4] == 100)
		return 0;

	if (s[6] != 100)
	{
		FLSHc++;
		return 190000000 + (card[s[6]].value * 10000) + (card[s[5]].value * 1000) + (card[s[4]].value * 100) + (card[s[3]].value * 10) + card[s[2]].value;
	}
	else if (s[5] != 100)
	{
		FLSHc++;
		return 190000000 + (card[s[5]].value * 10000) + (card[s[4]].value * 1000) + (card[s[3]].value * 100) + (card[s[2]].value * 10) + card[s[1]].value;
	}
	else if (s[4] != 100)
	{
		FLSHc++;
		return 190000000 + (card[s[4]].value * 10000) + (card[s[3]].value * 1000) + (card[s[2]].value * 100) + (card[s[1]].value * 10) + card[s[0]].value;
	}
	else
		return 0;
}
int FLSHH(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	int j, k;
	int num[7];
	int s[7] = { 100,100,100,100,100,100,100 };
	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	for (j = 0, k = 0; j < 7; j++, k++)
	{
		if (num[j] % 4 == 1)
			s[k] = num[j];
		else
			k--;
	}

	if (s[4] == 100)
		return 0;

	if (s[6] != 100)
	{
		FLSHc++;
		return 190000000 + (card[s[6]].value * 10000) + (card[s[5]].value * 1000) + (card[s[4]].value * 100) + (card[s[3]].value * 10) + card[s[2]].value;
	}
	else if (s[5] != 100)
	{
		FLSHc++;
		return 190000000 + (card[s[5]].value * 10000) + (card[s[4]].value * 1000) + (card[s[3]].value * 100) + (card[s[2]].value * 10) + card[s[1]].value;
	}
	else if (s[4] != 100)
	{
		FLSHc++;
		return 190000000 + (card[s[4]].value * 10000) + (card[s[3]].value * 1000) + (card[s[2]].value * 100) + (card[s[1]].value * 10) + card[s[0]].value;
	}
	else
		return 0;
}
int FLSHC(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	int j, k;
	int num[7];
	int s[7] = { 100,100,100,100,100,100,100 };
	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	for (j = 0, k = 0; j < 7; j++, k++)
	{
		if (num[j] % 4 == 0)
			s[k] = num[j];
		else
			k--;
	}

	if (s[4] == 100)
		return 0;

	if (s[6] != 100)
	{
		FLSHc++;
		return 190000000 + (card[s[6]].value * 10000) + (card[s[5]].value * 1000) + (card[s[4]].value * 100) + (card[s[3]].value * 10) + card[s[2]].value;
	}
	else if (s[5] != 100)
	{
		FLSHc++;
		return 190000000 + (card[s[5]].value * 10000) + (card[s[4]].value * 1000) + (card[s[3]].value * 100) + (card[s[2]].value * 10) + card[s[1]].value;
	}
	else if (s[4] != 100)
	{
		FLSHc++;
		return 190000000 + (card[s[4]].value * 10000) + (card[s[3]].value * 1000) + (card[s[2]].value * 100) + (card[s[1]].value * 10) + card[s[0]].value;
	}
	else
		return 0;
}
int MOUN(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	int j;
	int num[7];
	int s[5] = { 0, };
	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	if (card[a7].value != 13)
		return 0;

	for (j = 0; j < 7; j++)
	{
		if (card[num[j]].value == 13)
			s[0]++;
		else if (card[num[j]].value == 12)
			s[1]++;
		else if (card[num[j]].value == 11)
			s[2]++;
		else if (card[num[j]].value == 10)
			s[3]++;
		else if (card[num[j]].value == 9)
			s[4]++;
	}
	if (s[0] > 0 && s[1] > 0 && s[2] > 0 && s[3] > 0 && s[4] > 0)
	{
		STc++;
		return 185000000 + a7;
	}
	else
		return 0;
}

int BST(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	int j;
	int num[7];
	int s[5] = { 0, };
	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	if (card[a7].value != 13)
		return 0;

	for (j = 0; j < 7; j++)
	{
		if (card[num[j]].value == 13)
			s[0]++;
		else if (card[num[j]].value == 2)
			s[1]++;
		else if (card[num[j]].value == 1)
			s[2]++;
		else if (card[num[j]].value == 3)
			s[3]++;
		else if (card[num[j]].value == 4)
			s[4]++;
	}
	if (s[0] > 0 && s[1] > 0 && s[2] > 0 && s[3] > 0 && s[4] > 0)
	{
		STc++;
		return 184000000 + a7;
	}
	else
		return 0;
}

int ST(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	int j, k;
	int num[7];
	int s[7] = { 51,51,51,51,51,51,51 };
	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	if (card[a7].value < 5)
		return 0;

	for (j = 6, k = 6; j >= 0; j--, k--)
	{
		if (j>2)
		{
			if (card[num[j]].value == card[num[j - 1]].value && card[num[j - 1]].value == card[num[j - 2]].value)
			{
				s[k] = num[j];
				j = j - 2;
			}
			else if (card[num[j]].value == card[num[j - 1]].value)
			{
				s[k] = num[j];
				j = j - 1;
			}
			else
				s[k] = num[j];
		}
		else if (j > 1)
		{
			if (card[num[j]].value == card[num[j - 1]].value)
			{
				s[k] = num[j];
				j = j - 1;
			}
			else
				s[k] = num[j];
		}
		else
			s[k] = num[j];
	}

	if (card[s[6]].value - card[s[2]].value == 4)
	{
		STc++;
		return 180000000 + (card[s[6]].value * 10000) + (card[s[6]].shape * 100);
	}
	else if (card[s[5]].value - card[s[1]].value == 4)
	{
		STc++;
		return 180000000 + (card[s[5]].value * 10000) + (card[s[5]].shape * 100);
	}
	else if (card[s[4]].value - card[s[0]].value == 4)
	{
		STc++;
		return 180000000 + (card[s[4]].value * 10000) + (card[s[4]].shape * 100);
	}

	return 0;
}

int TRI(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	int i, j;
	int num[7];
	int tri[13] = { 0, };
	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	for (i = 0; i < 7; i++)
	{
		tri[card[num[i]].value - 1]++;
	}

	for (j = 12; j >= 0; j--)
	{
		if (tri[j] == 3)
		{
			TRIc++;
			return 170000000 + j;
		}
	}
	return 0;
}

int TWOP(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	int i, j, k;
	int num[7];
	int twop[13] = { 0, };
	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	for (i = 0; i < 7; i++)
	{
		twop[card[num[i]].value - 1]++;
	}

	for (j = 12; j >= 0; j--)
	{
		if (twop[j] == 2)
		{
			for (k = j - 1; k >= 0; k--)
			{
				if (twop[k] == 2)
				{
					TWOPc++;
					return 160000000 + (j * 100) + k;
				}
			}
		}
	}
	return 0;
}
int ONEP(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	int i, j;
	int num[7];
	int onep[13] = { 0, };
	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	for (i = 0; i < 7; i++)
	{
		onep[card[num[i]].value - 1]++;
	}

	for (j = 12; j >= 0; j--)
	{
		if (onep[j] == 2)
		{
			ONEPc++;
			return 150000000 + (j * 100);
		}
	}
	return 0;
}
int TOP(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	TOPc++;
	return 100;

}

int RANK(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	int z = 0;
	z = RSTFL(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = BSTFL(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = STFLS(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = STFLC(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = STFLD(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = STFLH(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = FOCA(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = FULL(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = FLSHS(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = FLSHD(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = FLSHH(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = FLSHC(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = MOUN(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = BST(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = ST(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = TRI(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = TWOP(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = ONEP(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	else
		return TOP(a1, a2, a3, a4, a5, a6, a7);

}



int RSTFL2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	if (card[a7].value != 13)
		return 0;

	int i;
	int num[7];
	int s = 0, c = 0, h = 0, d = 0;

	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;


	for (i = 0; i < 7; i++)
	{
		if (num[i] == 51 || num[i] == 47 || num[i] == 43 || num[i] == 39 || num[i] == 35)
			s++;
		else if (num[i] == 50 || num[i] == 46 || num[i] == 42 || num[i] == 38 || num[i] == 34)
			d++;
		else if (num[i] == 49 || num[i] == 45 || num[i] == 41 || num[i] == 37 || num[i] == 33)
			h++;
		else if (num[i] == 48 || num[i] == 44 || num[i] == 40 || num[i] == 36 || num[i] == 32)
			c++;
	}
	if (s > 4)
	{
		return 210000000;
	}
	else if (d > 4)
	{
		return 210000000;
	}
	else if (h > 4)
	{
		return 210000000;
	}
	else if (c > 4)
	{
		return 210000000;
	}

	return 0;
}


int BSTFL2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	if (card[a7].value != 13)
		return 0;

	int i;
	int num[7];
	int s = 0, c = 0, h = 0, d = 0;

	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;


	for (i = 0; i < 7; i++)
	{
		if (num[i] == 51 || num[i] == 3 || num[i] == 7 || num[i] == 11 || num[i] == 15)
			s++;
		else if (num[i] == 50 || num[i] == 6 || num[i] == 2 || num[i] == 14 || num[i] == 10)
			d++;
		else if (num[i] == 49 || num[i] == 5 || num[i] == 1 || num[i] == 9 || num[i] == 13)
			h++;
		else if (num[i] == 48 || num[i] == 4 || num[i] == 0 || num[i] == 8 || num[i] == 12)
			c++;
	}
	if (s > 4)
	{
		return 209000000;
	}
	else if (d > 4)
	{
		return 209000000;
	}
	else if (h > 4)
	{
		return 209000000;
	}
	else if (c > 4)
	{
		return 209000000;
	}

	return 0;
}

int STFLS2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	if (card[a7].value < 5)
		return 0;

	int j, k;
	int num[7];
	int s[7] = { 100,100,100,100,100,100,100 };

	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	for (j = 0, k = 0; j < 7; j++, k++)
	{
		if (num[j] % 4 == 3)
			s[k] = num[j];
		else
			k--;
	}

	if (s[4] == 100)
		return 0;

	if (s[6] == s[5] + 4 && s[5] + 4 == s[4] + 8 && s[4] + 8 == s[3] + 12 && s[3] + 12 == s[2] + 16)
	{
		return 205000000 + (card[s[6]].value * 10) + card[s[6]].shape;
	}
	else if (s[5] == s[4] + 4 && s[4] + 4 == s[3] + 8 && s[3] + 8 == s[2] + 12 && s[2] + 12 == s[1] + 16)
	{
		return 205000000 + (card[s[5]].value * 10) + card[s[5]].shape;
	}
	else if (s[4] == s[3] + 4 && s[3] + 4 == s[2] + 8 && s[2] + 8 == s[1] + 12 && s[1] + 12 == s[0] + 16)
	{
		return 205000000 + (card[s[4]].value * 10) + card[s[4]].shape;
	}
	return 0;
}

int STFLD2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	if (card[a7].value < 5)
		return 0;

	int j, k;
	int num[7];
	int s[7] = { 100,100,100,100,100,100,100 };
	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	for (j = 0, k = 0; j < 7; j++, k++)
	{
		if (num[j] % 4 == 2)
			s[k] = num[j];
		else
			k--;
	}

	if (s[4] == 100)
		return 0;

	if (s[6] == s[5] + 4 && s[5] + 4 == s[4] + 8 && s[4] + 8 == s[3] + 12 && s[3] + 12 == s[2] + 16)
	{
		return 205000000 + (card[s[6]].value * 10) + card[s[6]].shape;
	}
	else if (s[5] == s[4] + 4 && s[4] + 4 == s[3] + 8 && s[3] + 8 == s[2] + 12 && s[2] + 12 == s[1] + 16)
	{
		return 205000000 + (card[s[5]].value * 10) + card[s[5]].shape;
	}
	else if (s[4] == s[3] + 4 && s[3] + 4 == s[2] + 8 && s[2] + 8 == s[1] + 12 && s[1] + 12 == s[0] + 16)
	{
		return 205000000 + (card[s[4]].value * 10) + card[s[4]].shape;
	}

	return 0;
}
int STFLH2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	if (card[a7].value < 5)
		return 0;

	int j, k;
	int num[7];
	int s[7] = { 100,100,100,100,100,100,100 };

	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	for (j = 0, k = 0; j < 7; j++, k++)
	{
		if (num[j] % 4 == 1)
			s[k] = num[j];
		else
			k--;
	}

	if (s[4] == 100)
		return 0;

	if (s[6] == s[5] + 4 && s[5] + 4 == s[4] + 8 && s[4] + 8 == s[3] + 12 && s[3] + 12 == s[2] + 16)
	{
		return 205000000 + (card[s[6]].value * 10) + card[s[6]].shape;
	}
	else if (s[5] == s[4] + 4 && s[4] + 4 == s[3] + 8 && s[3] + 8 == s[2] + 12 && s[2] + 12 == s[1] + 16)
	{
		return 205000000 + (card[s[5]].value * 10) + card[s[5]].shape;
	}
	else if (s[4] == s[3] + 4 && s[3] + 4 == s[2] + 8 && s[2] + 8 == s[1] + 12 && s[1] + 12 == s[0] + 16)
	{
		return 205000000 + (card[s[4]].value * 10) + card[s[4]].shape;
	}

	return 0;
}

int STFLC2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	if (card[a7].value < 5)
		return 0;

	int j, k;
	int num[7];
	int s[7] = { 100,100,100,100,100,100,100 };

	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	for (j = 0, k = 0; j < 7; j++, k++)
	{
		if (num[j] % 4 == 0)
			s[k] = num[j];
		else
			k--;
	}

	if (s[4] == 100)
		return 0;

	if (s[6] == s[5] + 4 && s[5] + 4 == s[4] + 8 && s[4] + 8 == s[3] + 12 && s[3] + 12 == s[2] + 16)
	{
		return 205000000 + (card[s[6]].value * 10) + card[s[6]].shape;
	}
	else if (s[5] == s[4] + 4 && s[4] + 4 == s[3] + 8 && s[3] + 8 == s[2] + 12 && s[2] + 12 == s[1] + 16)
	{
		return 205000000 + (card[s[5]].value * 10) + card[s[5]].shape;
	}
	else if (s[4] == s[3] + 4 && s[3] + 4 == s[2] + 8 && s[2] + 8 == s[1] + 12 && s[1] + 12 == s[0] + 16)
	{
		return 205000000 + (card[s[4]].value * 10) + card[s[4]].shape;
	}


	return 0;
}

int FOCA2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	int i, j;
	int num[7];
	int poca[13] = { 0, };
	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	for (i = 0; i < 7; i++)
	{
		poca[card[num[i]].value - 1]++;
	}

	for (j = 0; j < 13; j++)
	{
		if (poca[j] == 4)
		{
			return 201000000 + j;
		}
	}

	return 0;
}

int FULL2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	int i, j, k;
	int num[7];
	int full[13] = { 0, };
	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	for (i = 0; i < 7; i++)
	{
		full[card[num[i]].value - 1]++;
	}

	for (j = 12; j >= 0; j--)
	{
		if (full[j] == 3)
		{
			for (k = j - 1; k >= 0; k--)
			{
				if (full[k] >= 2)
				{
					return 200000000 + (j * 100) + k;
				}
			}
		}
	}
	return 0;
}

int FLSHS2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	int j, k;
	int num[7];
	int s[7] = { 100,100,100,100,100,100,100 };
	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	for (j = 0, k = 0; j < 7; j++, k++)
	{
		if (num[j] % 4 == 3)
			s[k] = num[j];
		else
			k--;
	}

	if (s[4] == 100)
		return 0;

	if (s[6] != 100)
	{
		return 190000000 + (card[s[6]].value * 10000) + (card[s[5]].value * 1000) + (card[s[4]].value * 100) + (card[s[3]].value * 10) + card[s[2]].value;
	}
	else if (s[5] != 100)
	{
		return 190000000 + (card[s[5]].value * 10000) + (card[s[4]].value * 1000) + (card[s[3]].value * 100) + (card[s[2]].value * 10) + card[s[1]].value;
	}
	else if (s[4] != 100)
	{
		return 190000000 + (card[s[4]].value * 10000) + (card[s[3]].value * 1000) + (card[s[2]].value * 100) + (card[s[1]].value * 10) + card[s[0]].value;
	}
	else
		return 0;
}

int FLSHD2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	int j, k;
	int num[7];
	int s[7] = { 100,100,100,100,100,100,100 };
	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	for (j = 0, k = 0; j < 7; j++, k++)
	{
		if (num[j] % 4 == 2)
			s[k] = num[j];
		else
			k--;
	}

	if (s[4] == 100)
		return 0;

	if (s[6] != 100)
	{
		return 190000000 + (card[s[6]].value * 10000) + (card[s[5]].value * 1000) + (card[s[4]].value * 100) + (card[s[3]].value * 10) + card[s[2]].value;
	}
	else if (s[5] != 100)
	{
		return 190000000 + (card[s[5]].value * 10000) + (card[s[4]].value * 1000) + (card[s[3]].value * 100) + (card[s[2]].value * 10) + card[s[1]].value;
	}
	else if (s[4] != 100)
	{
		return 190000000 + (card[s[4]].value * 10000) + (card[s[3]].value * 1000) + (card[s[2]].value * 100) + (card[s[1]].value * 10) + card[s[0]].value;
	}
	else
		return 0;
}
int FLSHH2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	int j, k;
	int num[7];
	int s[7] = { 100,100,100,100,100,100,100 };
	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	for (j = 0, k = 0; j < 7; j++, k++)
	{
		if (num[j] % 4 == 1)
			s[k] = num[j];
		else
			k--;
	}

	if (s[4] == 100)
		return 0;

	if (s[6] != 100)
	{
		return 190000000 + (card[s[6]].value * 10000) + (card[s[5]].value * 1000) + (card[s[4]].value * 100) + (card[s[3]].value * 10) + card[s[2]].value;
	}
	else if (s[5] != 100)
	{
		return 190000000 + (card[s[5]].value * 10000) + (card[s[4]].value * 1000) + (card[s[3]].value * 100) + (card[s[2]].value * 10) + card[s[1]].value;
	}
	else if (s[4] != 100)
	{
		return 190000000 + (card[s[4]].value * 10000) + (card[s[3]].value * 1000) + (card[s[2]].value * 100) + (card[s[1]].value * 10) + card[s[0]].value;
	}
	else
		return 0;
}
int FLSHC2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	int j, k;
	int num[7];
	int s[7] = { 100,100,100,100,100,100,100 };
	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	for (j = 0, k = 0; j < 7; j++, k++)
	{
		if (num[j] % 4 == 0)
			s[k] = num[j];
		else
			k--;
	}

	if (s[4] == 100)
		return 0;

	if (s[6] != 100)
	{
		return 190000000 + (card[s[6]].value * 10000) + (card[s[5]].value * 1000) + (card[s[4]].value * 100) + (card[s[3]].value * 10) + card[s[2]].value;
	}
	else if (s[5] != 100)
	{
		return 190000000 + (card[s[5]].value * 10000) + (card[s[4]].value * 1000) + (card[s[3]].value * 100) + (card[s[2]].value * 10) + card[s[1]].value;
	}
	else if (s[4] != 100)
	{
		return 190000000 + (card[s[4]].value * 10000) + (card[s[3]].value * 1000) + (card[s[2]].value * 100) + (card[s[1]].value * 10) + card[s[0]].value;
	}
	else
		return 0;
}
int MOUN2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	int j;
	int num[7];
	int s[5] = { 0, };
	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	if (card[a7].value != 13)
		return 0;

	for (j = 0; j < 7; j++)
	{
		if (card[num[j]].value == 13)
			s[0]++;
		else if (card[num[j]].value == 12)
			s[1]++;
		else if (card[num[j]].value == 11)
			s[2]++;
		else if (card[num[j]].value == 10)
			s[3]++;
		else if (card[num[j]].value == 9)
			s[4]++;
	}
	if (s[0] > 0 && s[1] > 0 && s[2] > 0 && s[3] > 0 && s[4] > 0)
	{
		return 185000000 + a7;
	}
	else
		return 0;
}

int BST2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	int j;
	int num[7];
	int s[5] = { 0, };
	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	if (card[a7].value != 13)
		return 0;

	for (j = 0; j < 7; j++)
	{
		if (card[num[j]].value == 13)
			s[0]++;
		else if (card[num[j]].value == 2)
			s[1]++;
		else if (card[num[j]].value == 1)
			s[2]++;
		else if (card[num[j]].value == 3)
			s[3]++;
		else if (card[num[j]].value == 4)
			s[4]++;
	}
	if (s[0] > 0 && s[1] > 0 && s[2] > 0 && s[3] > 0 && s[4] > 0)
	{
		return 184000000 + a7;
	}
	else
		return 0;
}

int ST2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	int j, k;
	int num[7];
	int s[7] = { 51,51,51,51,51,51,51 };
	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	if (card[a7].value < 5)
		return 0;

	for (j = 6, k = 6; j >= 0; j--, k--)
	{
		if (j>2)
		{
			if (card[num[j]].value == card[num[j - 1]].value && card[num[j - 1]].value == card[num[j - 2]].value)
			{
				s[k] = num[j];
				j = j - 2;
			}
			else if (card[num[j]].value == card[num[j - 1]].value)
			{
				s[k] = num[j];
				j = j - 1;
			}
			else
				s[k] = num[j];
		}
		else if (j > 1)
		{
			if (card[num[j]].value == card[num[j - 1]].value)
			{
				s[k] = num[j];
				j = j - 1;
			}
			else
				s[k] = num[j];
		}
		else
			s[k] = num[j];
	}

	if (card[s[6]].value - card[s[2]].value == 4)
	{
		return 180000000 + (card[s[6]].value * 10000) + (card[s[6]].shape * 100);
	}
	else if (card[s[5]].value - card[s[1]].value == 4)
	{
		return 180000000 + (card[s[5]].value * 10000) + (card[s[5]].shape * 100);
	}
	else if (card[s[4]].value - card[s[0]].value == 4)
	{
		return 180000000 + (card[s[4]].value * 10000) + (card[s[4]].shape * 100);
	}

	return 0;
}

int TRI2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	int i, j;
	int num[7];
	int tri[13] = { 0, };
	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	for (i = 0; i < 7; i++)
	{
		tri[card[num[i]].value - 1]++;
	}

	for (j = 12; j >= 0; j--)
	{
		if (tri[j] == 3)
		{
			return 170000000 + j;
		}
	}
	return 0;
}

int TWOP2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	int i, j, k;
	int num[7];
	int twop[13] = { 0, };
	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	for (i = 0; i < 7; i++)
	{
		twop[card[num[i]].value - 1]++;
	}

	for (j = 12; j >= 0; j--)
	{
		if (twop[j] == 2)
		{
			for (k = j - 1; k >= 0; k--)
			{
				if (twop[k] == 2)
				{
					return 160000000 + (j * 100) + k;
				}
			}
		}
	}
	return 0;
}
int ONEP2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	int i, j;
	int num[7];
	int onep[13] = { 0, };
	num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;

	for (i = 0; i < 7; i++)
	{
		onep[card[num[i]].value - 1]++;
	}

	for (j = 12; j >= 0; j--)
	{
		if (onep[j] == 2)
		{
			return 150000000 + (j * 100);
		}
	}
	return 0;
}
int TOP2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	return 100;

}

int RANK2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
{
	int z = 0;
	z = RSTFL2(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = BSTFL2(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = STFLS2(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = STFLC2(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = STFLD2(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = STFLH2(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = FOCA2(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = FULL2(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = FLSHS2(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = FLSHD2(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = FLSHH2(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = FLSHC2(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = MOUN2(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = BST2(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = ST2(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = TRI2(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = TWOP2(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	z = ONEP2(a1, a2, a3, a4, a5, a6, a7);
	if (z != 0)
		return z;

	else
		return TOP2(a1, a2, a3, a4, a5, a6, a7);

}