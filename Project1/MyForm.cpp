#define _CRT_SECURE_NO_WARNINGS
#include "MyForm.h"
//#include <iostream>
//#include <stdio.h>
//#include<stdio.h>
//#include<stdlib.h> //system("PAUSE");를 위한 헤더
//
//typedef struct {
//	int pick;
//	int shape;
//	int value;
//} Easy; // 입력받은 카드번호, 그 카드의 모양과 숫자를 쉽게 저장하기 위한 구조체 선언
//Easy hand[2] = { 0 }; // 플레이어의 카드 2장을 입력 및 저장 할 구조체 배열
//Easy c[5] = { 0 }; // 공동패 5장을 입력 및 저장 할 구조체 배열
//Easy card[52] = { 0 };
//void cardreset();//구조체 card[52]에 값초기화
//void hand1(int i, int j);
//void c1(int i, int j);
//int shape(int a);//위에꺼 할때 쓸거
//int value(int a);//마찬가지
//void FirstDeal();//첫패 2개 입력시 모든 경우의 수 출력
//void SecondDeal();//커뮤니티 3개
//void ThirdDeal();//4개
//void FourthdDeal();//5개
//
//int RANK(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int RSTFL(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int BSTFL(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int STFLS(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int STFLC(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int STFLD(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int STFLH(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int FOCA(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int FULL(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int FLSHS(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int FLSHC(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int FLSHD(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int FLSHH(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int MOUN(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int BST(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int ST(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int TRI(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int TWOP(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int ONEP(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int TOP(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int RANK2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int RSTFL2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int BSTFL2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int STFLS2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int STFLC2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int STFLD2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int STFLH2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int FOCA2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int FULL2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int FLSHS2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int FLSHC2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int FLSHD2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int FLSHH2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int MOUN2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int BST2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int ST2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int TRI2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int TWOP2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int ONEP2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//int TOP2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7);
//void Deal1();
//void Deal2();
//void Deal3();
//void Deal4();
//long long RSTFLc = 0, BSTFLc = 0, STFLc = 0, FOCAc = 0, FULLc = 0, FLSHc = 0, MOUNc = 0, BSTc = 0, STc = 0, TRIc = 0, TWOPc = 0, ONEPc = 0, TOPc = 0, win1 = 0, win2 = 0, allc = 0;
//int score1 = 0, score2 = 0, ab[14];
//double result_array[14];
//int x1, x2, x3, x4, x5, x6, x7;
////void print();

using namespace System;
using namespace System::Windows::Forms;
//using namespace std;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(%form);

	using namespace std;
	//printf("%d", test[3]);

	/*if (test[3] == 3) {
		MessageBox::Show("Heptagram");
	}
	*/
}
//	void main()
//	{
//		for (;;)
//		{
//			
//			
//			scanf("%d %d %d", &x3, &x4, &x5);
//			Deal2();
//			scanf("%d", &x6);
//			Deal3();
//			scanf("%d", &x7);
//			Deal4();
//
//		}
//
//	}
//	void Deal1()
//	{
//		cardreset();
//		hand1(0, x1); hand1(1, x2);
//		FirstDeal();
//	}
//	void Deal2()
//	{
//
//		c1(0, x3); c1(1, x4); c1(2, x5);
//		SecondDeal();
//	}
//	void Deal3()
//	{
//		c1(3, x6);
//		ThirdDeal();
//	}
//
//	void Deal4()
//	{
//		c1(4, x7);
//		FourthdDeal();
//	}
//
//	void cardreset()
//	{
//		int i;
//		for (i = 0; i<52; i++)
//		{
//			card[i].pick = i;
//			card[i].shape = shape(i);
//			card[i].value = value(i);
//		}
//	}
//	void hand1(int i, int j)
//	{
//		hand[i].pick = j;
//		hand[i].shape = shape(j);
//		hand[i].value = value(j);
//	}
//	void c1(int i, int j)
//	{
//		c[i].pick = j;
//		c[i].shape = shape(j);
//		c[i].value = value(j);
//	}
//
//	int shape(int a)
//	{
//		if ((a + 1) % 4 == 0)
//			return 4;
//		else
//			return (a + 1) % 4;
//	}
//	int value(int a)
//	{
//		if ((a + 1) % 4 == 0)
//			return (a + 1) / 4;
//		else
//			return ((a + 1) / 4) + 1;
//	}
//
//	void FirstDeal()
//	{
//		int x, y;
//		int card1[50] = { 0 };//입력된 패를 제외한 카드의 배열
//		int hidden[45] = { 0 };//손패+커뮤니티 를 제외한 카드 배열
//		int h1 = 0, h2 = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;// 전부 임시로 정해준 변수라 봐도 무방함
//
//		for (x = 0, y = 0; x < 50; x++, y++)//손패 ab를 제외한 배열 만들기
//		{
//			if (y == hand[0].pick || y == hand[1].pick)
//				x--;
//			else
//				card1[x] = card[y].pick;
//		}
//
//
//		for (c1 = 0; c1 < 46; c1++)
//		{
//			for (c2 = c1 + 1; c2 < 47; c2++)
//			{
//				for (c3 = c2 + 1; c3 < 48; c3++)
//				{
//					for (c4 = c3 + 1; c4 < 49; c4++)
//					{
//						for (c5 = c4 + 1; c5 < 50; c5++)
//						{
//							int j, k;
//							int num[7];
//							int temp;
//
//							num[0] = card1[c1];    num[1] = card1[c2];    num[2] = card1[c3];    num[3] = card1[c4];    num[4] = card1[c5];    num[5] = hand[0].pick;    num[6] = hand[1].pick;
//							for (j = 0; j < 7; j++)
//							{
//								for (k = 0; k < 6; k++)
//								{
//									if (num[k] > num[k + 1])
//									{
//										temp = num[k];
//										num[k] = num[k + 1];
//										num[k + 1] = temp;
//									}
//								}
//							}
//							score1 = RANK(num[0], num[1], num[2], num[3], num[4], num[5], num[6]);
//
//							allc++;
//
//							if (allc >= 1000000 && allc % 1000000 == 0)
//								printf("%d %d %d %d %d %d %d\n로딩 %d \n", num[0], num[1], num[2], num[3], num[4], num[5], num[6], allc);
//
//
//						}
//					}
//				}
//			}
//
//		}
//
//		ab[0] = (double)RSTFLc / allc * 100000;
//		ab[1] = (double)BSTFLc / allc * 100000;
//		ab[2] = (double)STFLc / allc * 100000;
//		ab[3] = (double)FOCAc / allc * 100000;
//		ab[4] = (double)FULLc / allc * 100000;
//		ab[5] = (double)FLSHc / allc * 100000;
//		ab[6] = (double)MOUNc / allc * 100000;
//		ab[7] = (double)BSTc / allc * 100000;
//		ab[8] = (double)STc / allc * 100000;
//		ab[9] = (double)TRIc / allc * 100000;
//		ab[10] = (double)TWOPc / allc * 100000;
//		ab[11] = (double)ONEPc / allc * 100000;
//		ab[12] = (double)TOPc / allc * 100000;
//		ab[13] = (double)win1 / allc * 100000;
//		int i;
//		for (i = 0; i < 14; i++)
//		{
//			result_array[i] = (double)ab[i] / 1000;
//		}
//
//		printf("로스플 확률 : %.3lf\n백스플 확률 : %.3lf\n스플 확률 : %lf\n포카드 확률 : %lf\n풀하우스 확률 : %lf\n플러쉬 확률 : %lf\n마운틴 확률 : %lf\n백스트 확률 : %lf\n스트레이트 확률 : %lf\n트리플 확률 : %lf\n투페어 확률 : %lf\n원페어 확률 : %lf\n탑 확률 : %lf\n승리 확률 : %lf\n"
//			, result_array[0], result_array[1], result_array[2], result_array[3], result_array[4], result_array[5], result_array[6], result_array[7], result_array[8], result_array[9], result_array[10], result_array[11], result_array[12], result_array[13]);
//		RSTFLc = 0, BSTFLc = 0, STFLc = 0, FOCAc = 0, FULLc = 0, FLSHc = 0, MOUNc = 0, BSTc = 0, STc = 0, TRIc = 0, TWOPc = 0, ONEPc = 0, TOPc = 0, win1 = 0, win2 = 0, allc = 0;
//		score1 = 0, score2 = 0;
//
//		system("PAUSE");
//	}
//
//
//
//	void SecondDeal()
//	{
//		int x, y;
//		int card1[47] = { 0 };//입력된 패를 제외한 카드의 배열
//		int hidden[45] = { 0 };//손패+커뮤니티 를 제외한 카드 배열
//		int h1 = 0, h2 = 0, c1 = 0, c2 = 0;// 전부 임시로 정해준 변수라 봐도 무방함
//
//		for (x = 0, y = 0; x < 47; x++, y++)//손패 ab+커뮤니티3장을 제외한 배열 만들기
//		{
//			if (y == hand[0].pick || y == hand[1].pick || y == c[0].pick || y == c[1].pick || y == c[2].pick)
//				x--;
//			else
//				card1[x] = card[y].pick;
//		}
//
//		for (c1 = 0; c1 < 46; c1++)
//		{
//			for (c2 = c1 + 1; c2 < 47; c2++)
//			{
//				for (x = 0, y = 0; x < 45; x++, y++)//내패+커뮤니티 와 겹치지 않는 상대패를 배열로 만들기
//				{
//					if (y == c1 || y == c2)
//						x--;
//					else
//						hidden[x] = card1[y];
//
//				}
//				for (h1 = 0; h1 < 44; h1++)
//				{
//					for (h2 = h1 + 1; h2 < 45; h2++)
//					{
//						int j, k;
//						int num[7];
//						int num2[7];
//						int temp;
//
//
//						num[0] = card1[c1];    num[1] = card1[c2];    num[2] = c[0].pick;  num[3] = c[1].pick;  num[4] = c[2].pick;    num[5] = hand[0].pick;    num[6] = hand[1].pick;
//						for (j = 0; j < 7; j++)
//						{
//							for (k = 0; k < 6; k++)
//							{
//								if (num[k] > num[k + 1])
//								{
//									temp = num[k];
//									num[k] = num[k + 1];
//									num[k + 1] = temp;
//								}
//							}
//						}
//						score1 = RANK(num[0], num[1], num[2], num[3], num[4], num[5], num[6]);
//
//						num2[0] = card1[c1];    num2[1] = card1[c2];    num2[2] = c[0].pick;  num2[3] = c[1].pick;  num2[4] = c[2].pick;      num2[5] = hidden[h1];    num2[6] = hidden[h2];
//						for (j = 0; j < 7; j++)
//						{
//							for (k = 0; k < 6; k++)
//							{
//								if (num2[k] > num2[k + 1])
//								{
//									temp = num2[k];
//									num2[k] = num2[k + 1];
//									num2[k + 1] = temp;
//								}
//							}
//						}
//						score2 = RANK2(num2[0], num2[1], num2[2], num2[3], num2[4], num2[5], num2[6]);
//						if (score1 > score2)
//							win1++;
//						else if (score2 > score1)
//							win2++;
//						else if (score1 == score2)
//						{
//							int b1, s1, b2, s2;
//
//							if (hidden[h1] > hidden[h2])
//							{
//								b2 = hidden[h1]; s2 = hidden[h2];
//							}
//							else
//							{
//								b2 = hidden[h2]; s2 = hidden[h1];
//							}
//							if (hand[0].pick > hand[1].pick)
//							{
//								b1 = hand[0].pick; s1 = hand[1].pick;
//							}
//							else
//							{
//								b1 = hand[1].pick; s1 = hand[0].pick;
//							}
//							if (card[b1].value == card[b2].value)
//							{
//								if (card[s1].value == card[s2].value)
//								{
//									if (card[b1].shape > card[b2].shape)
//										win1++;
//									else
//										win2++;
//								}
//								else if (card[s1].value > card[s2].value)
//									win1++;
//								else
//									win2++;
//							}
//							else if (card[b1].value > card[b2].value)
//								win1++;
//							else
//								win2++;
//						}
//						allc++;
//					}
//				}
//
//			}
//		}
//		printf("로스플 확률 : %5.3f\n백스플 확률 : %5.3f\n스플 확률 : %5.3f\n포카드 확률 : %5.3f\n풀하우스 확률 : %5.3f\n플러쉬 확률 : %5.3f\n마운틴 확률 : %5.3f\n백스트 확률 : %5.3f\n스트레이트 확률 : %5.3f\n트리플 확률 : %5.3f\n투페어 확률 : %5.3f\n원페어 확률 : %5.3f\n탑 확률 : %5.3f\n승리 확률 : %5.3f\n"
//			, (double)RSTFLc / allc * 100, (double)BSTFLc / allc * 100, (double)STFLc / allc * 100, (double)FOCAc / allc * 100, (double)FULLc / allc * 100, (double)FLSHc / allc * 100, (double)MOUNc / allc * 100, (double)BSTc / allc * 100, (double)STc / allc * 100, (double)TRIc / allc * 100, (double)TWOPc / allc * 100, (double)ONEPc / allc * 100, (double)TOPc / allc * 100, (double)win1 / allc * 100);
//		RSTFLc = 0, BSTFLc = 0, STFLc = 0, FOCAc = 0, FULLc = 0, FLSHc = 0, MOUNc = 0, BSTc = 0, STc = 0, TRIc = 0, TWOPc = 0, ONEPc = 0, TOPc = 0, win1 = 0, win2 = 0, allc = 0;
//		score1 = 0, score2 = 0;
//		system("PAUSE");
//	}
//
//	void ThirdDeal()
//	{
//		int x, y;
//		int card1[46] = { 0 };//입력된 패를 제외한 카드의 배열
//		int hidden[45] = { 0 };//손패+커뮤니티 를 제외한 카드 배열
//		int h1 = 0, h2 = 0, c1 = 0;// 전부 임시로 정해준 변수라 봐도 무방함
//
//		for (x = 0, y = 0; x < 46; x++, y++)//손패 ab+커뮤니티3장을 제외한 배열 만들기
//		{
//			if (y == hand[0].pick || y == hand[1].pick || y == c[0].pick || y == c[1].pick || y == c[2].pick || y == c[3].pick)
//				x--;
//			else
//				card1[x] = card[y].pick;
//		}
//
//		for (c1 = 0; c1 < 46; c1++)
//		{
//			for (x = 0, y = 0; x < 45; x++, y++)//내패+커뮤니티 와 겹치지 않는 상대패를 배열로 만들기
//			{
//				if (y == c1)
//					x--;
//				else
//					hidden[x] = card1[y];
//
//			}
//			for (h1 = 0; h1 < 44; h1++)
//			{
//				for (h2 = h1 + 1; h2 < 45; h2++)
//				{
//
//					int j, k;
//					int num[7];
//					int num2[7];
//					int temp;
//
//
//					num[0] = card1[c1];    num[1] = c[3].pick;    num[2] = c[0].pick;  num[3] = c[1].pick;  num[4] = c[2].pick;    num[5] = hand[0].pick;    num[6] = hand[1].pick;
//					for (j = 0; j < 7; j++)
//					{
//						for (k = 0; k < 6; k++)
//						{
//							if (num[k] > num[k + 1])
//							{
//								temp = num[k];
//								num[k] = num[k + 1];
//								num[k + 1] = temp;
//							}
//						}
//					}
//
//					score1 = RANK(num[0], num[1], num[2], num[3], num[4], num[5], num[6]);
//
//					num2[0] = card1[c1];    num2[1] = c[3].pick;    num2[2] = c[0].pick;  num2[3] = c[1].pick;  num2[4] = c[2].pick;    num2[5] = hidden[h1];    num2[6] = hidden[h2];
//					for (j = 0; j < 7; j++)
//					{
//						for (k = 0; k < 6; k++)
//						{
//							if (num2[k] > num2[k + 1])
//							{
//								temp = num2[k];
//								num2[k] = num2[k + 1];
//								num2[k + 1] = temp;
//							}
//						}
//					}
//
//					score2 = RANK2(num2[0], num2[1], num2[2], num2[3], num2[4], num2[5], num2[6]);
//					if (score1 > score2)
//						win1++;
//					else if (score2 > score1)
//						win2++;
//					else if (score1 == score2)
//					{
//						int b1, s1, b2, s2;
//
//						if (hidden[h1] > hidden[h2])
//						{
//							b2 = hidden[h1]; s2 = hidden[h2];
//						}
//						else
//						{
//							b2 = hidden[h2]; s2 = hidden[h1];
//						}
//						if (hand[0].pick > hand[1].pick)
//						{
//							b1 = hand[0].pick; s1 = hand[1].pick;
//						}
//						else
//						{
//							b1 = hand[1].pick; s1 = hand[0].pick;
//						}
//						if (card[b1].value == card[b2].value)
//						{
//							if (card[s1].value == card[s2].value)
//							{
//								if (card[b1].shape > card[b2].shape)
//									win1++;
//								else
//									win2++;
//							}
//							else if (card[s1].value > card[s2].value)
//								win1++;
//							else
//								win2++;
//						}
//						else if (card[b1].value > card[b2].value)
//							win1++;
//						else
//							win2++;
//					}
//					allc++;
//				}
//			}
//		}
//		printf("로스플 확률 : %5.3f\n백스플 확률 : %5.3f\n스플 확률 : %5.3f\n포카드 확률 : %5.3f\n풀하우스 확률 : %5.3f\n플러쉬 확률 : %5.3f\n마운틴 확률 : %5.3f\n백스트 확률 : %5.3f\n스트레이트 확률 : %5.3f\n트리플 확률 : %5.3f\n투페어 확률 : %5.3f\n원페어 확률 : %5.3f\n탑 확률 : %5.3f\n승리 확률 : %5.3f\n"
//			, (double)RSTFLc / allc * 100, (double)BSTFLc / allc * 100, (double)STFLc / allc * 100, (double)FOCAc / allc * 100, (double)FULLc / allc * 100, (double)FLSHc / allc * 100, (double)MOUNc / allc * 100, (double)BSTc / allc * 100, (double)STc / allc * 100, (double)TRIc / allc * 100, (double)TWOPc / allc * 100, (double)ONEPc / allc * 100, (double)TOPc / allc * 100, (double)win1 / allc * 100);
//		RSTFLc = 0, BSTFLc = 0, STFLc = 0, FOCAc = 0, FULLc = 0, FLSHc = 0, MOUNc = 0, BSTc = 0, STc = 0, TRIc = 0, TWOPc = 0, ONEPc = 0, TOPc = 0, win1 = 0, win2 = 0, allc = 0;
//		score1 = 0, score2 = 0;
//		system("PAUSE");
//	}
//	void FourthdDeal()
//	{
//		int x, y;
//		int hidden[45] = { 0 };//손패+커뮤니티 를 제외한 카드 배열
//		int h1 = 0, h2 = 0;// 전부 임시로 정해준 변수라 봐도 무방함
//
//		for (x = 0, y = 0; x < 45; x++, y++)//손패 ab+커뮤니티3장을 제외한 배열 만들기
//		{
//			if (y == hand[0].pick || y == hand[1].pick || y == c[0].pick || y == c[1].pick || y == c[2].pick || y == c[3].pick || y == c[4].pick)
//				x--;
//			else
//				hidden[x] = card[y].pick;
//		}
//
//
//		for (h1 = 0; h1 < 44; h1++)
//		{
//			for (h2 = h1 + 1; h2 < 45; h2++)
//			{
//				int j, k;
//				int num[7];
//				int num2[7];
//				int temp;
//
//				num[0] = c[4].pick;    num[1] = c[3].pick;    num[2] = c[0].pick;  num[3] = c[1].pick;  num[4] = c[2].pick;    num[5] = hand[0].pick;    num[6] = hand[1].pick;
//				for (j = 0; j < 7; j++)
//				{
//					for (k = 0; k < 6; k++)
//					{
//						if (num[k] > num[k + 1])
//						{
//							temp = num[k];
//							num[k] = num[k + 1];
//							num[k + 1] = temp;
//						}
//					}
//				}
//
//				score1 = RANK(num[0], num[1], num[2], num[3], num[4], num[5], num[6]);
//
//				num2[0] = c[4].pick;    num2[1] = c[3].pick;    num2[2] = c[0].pick;  num2[3] = c[1].pick;  num2[4] = c[2].pick;      num2[5] = hidden[h1];    num2[6] = hidden[h2];
//				for (j = 0; j < 7; j++)
//				{
//					for (k = 0; k < 6; k++)
//					{
//						if (num2[k] > num2[k + 1])
//						{
//							temp = num2[k];
//							num2[k] = num2[k + 1];
//							num2[k + 1] = temp;
//						}
//					}
//				}
//
//				score2 = RANK2(num2[0], num2[1], num2[2], num2[3], num2[4], num2[5], num2[6]);
//				if (score1 > score2)
//					win1++;
//				else if (score2 > score1)
//					win2++;
//				else if (score1 == score2)
//				{
//					int b1, s1, b2, s2;
//
//					if (hidden[h1] > hidden[h2])
//					{
//						b2 = hidden[h1]; s2 = hidden[h2];
//					}
//					else
//					{
//						b2 = hidden[h2]; s2 = hidden[h1];
//					}
//					if (hand[0].pick > hand[1].pick)
//					{
//						b1 = hand[0].pick; s1 = hand[1].pick;
//					}
//					else
//					{
//						b1 = hand[1].pick; s1 = hand[0].pick;
//					}
//					if (card[b1].value == card[b2].value)
//					{
//						if (card[s1].value == card[s2].value)
//						{
//							if (card[b1].shape > card[b2].shape)
//								win1++;
//							else
//								win2++;
//						}
//						else if (card[s1].value > card[s2].value)
//							win1++;
//						else
//							win2++;
//					}
//					else if (card[b1].value > card[b2].value)
//						win1++;
//					else
//						win2++;
//				}
//				allc++;
//			}
//		}
//		printf("로스플 확률 : %5.3f\n백스플 확률 : %5.3f\n스플 확률 : %5.3f\n포카드 확률 : %5.3f\n풀하우스 확률 : %5.3f\n플러쉬 확률 : %5.3f\n마운틴 확률 : %5.3f\n백스트 확률 : %5.3f\n스트레이트 확률 : %5.3f\n트리플 확률 : %5.3f\n투페어 확률 : %5.3f\n원페어 확률 : %5.3f\n탑 확률 : %5.3f\n승리 확률 : %5.3f\n"
//			, (double)RSTFLc / allc * 100, (double)BSTFLc / allc * 100, (double)STFLc / allc * 100, (double)FOCAc / allc * 100, (double)FULLc / allc * 100, (double)FLSHc / allc * 100, (double)MOUNc / allc * 100, (double)BSTc / allc * 100, (double)STc / allc * 100, (double)TRIc / allc * 100, (double)TWOPc / allc * 100, (double)ONEPc / allc * 100, (double)TOPc / allc * 100, (double)win1 / allc * 100);
//		RSTFLc = 0, BSTFLc = 0, STFLc = 0, FOCAc = 0, FULLc = 0, FLSHc = 0, MOUNc = 0, BSTc = 0, STc = 0, TRIc = 0, TWOPc = 0, ONEPc = 0, TOPc = 0, win1 = 0, win2 = 0, allc = 0;
//		score1 = 0, score2 = 0;
//		system("PAUSE");
//	}
//
//
//	int RSTFL(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		if (card[a7].value != 13)
//			return 0;
//
//		int i;
//		int num[7];
//		int s = 0, c = 0, h = 0, d = 0;
//
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//
//		for (i = 0; i < 7; i++)
//		{
//			if (num[i] == 51 || num[i] == 47 || num[i] == 43 || num[i] == 39 || num[i] == 35)
//				s++;
//			else if (num[i] == 50 || num[i] == 46 || num[i] == 42 || num[i] == 38 || num[i] == 34)
//				d++;
//			else if (num[i] == 49 || num[i] == 45 || num[i] == 41 || num[i] == 37 || num[i] == 33)
//				h++;
//			else if (num[i] == 48 || num[i] == 44 || num[i] == 40 || num[i] == 36 || num[i] == 32)
//				c++;
//		}
//		if (s > 4)
//		{
//			RSTFLc++; return 210000000;
//		}
//		else if (d > 4)
//		{
//			RSTFLc++; return 210000000;
//		}
//		else if (h > 4)
//		{
//			RSTFLc++; return 210000000;
//		}
//		else if (c > 4)
//		{
//			RSTFLc++; return 210000000;
//		}
//
//		return 0;
//	}
//
//
//	int BSTFL(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		if (card[a7].value != 13)
//			return 0;
//
//		int i;
//		int num[7];
//		int s = 0, c = 0, h = 0, d = 0;
//
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//
//		for (i = 0; i < 7; i++)
//		{
//			if (num[i] == 51 || num[i] == 3 || num[i] == 7 || num[i] == 11 || num[i] == 15)
//				s++;
//			else if (num[i] == 50 || num[i] == 6 || num[i] == 2 || num[i] == 14 || num[i] == 10)
//				d++;
//			else if (num[i] == 49 || num[i] == 5 || num[i] == 1 || num[i] == 9 || num[i] == 13)
//				h++;
//			else if (num[i] == 48 || num[i] == 4 || num[i] == 0 || num[i] == 8 || num[i] == 12)
//				c++;
//		}
//		if (s > 4)
//		{
//			BSTFLc++; return 209000000;
//		}
//		else if (d > 4)
//		{
//			BSTFLc++; return 209000000;
//		}
//		else if (h > 4)
//		{
//			BSTFLc++; return 209000000;
//		}
//		else if (c > 4)
//		{
//			BSTFLc++; return 209000000;
//		}
//
//		return 0;
//	}
//
//	int STFLS(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		if (card[a7].value < 5)
//			return 0;
//
//		int j, k;
//		int num[7];
//		int s[7] = { 100,100,100,100,100,100,100 };
//
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		for (j = 0, k = 0; j < 7; j++, k++)
//		{
//			if (num[j] % 4 == 3)
//				s[k] = num[j];
//			else
//				k--;
//		}
//
//		if (s[4] == 100)
//			return 0;
//
//		if (s[6] == s[5] + 4 == s[4] + 8 == s[3] + 12 == s[2] + 16)
//		{
//			STFLc++; return 205000000 + (card[s[6]].value * 10) + card[s[6]].shape;
//		}
//		else if (s[5] == s[4] + 4 == s[3] + 8 == s[2] + 12 == s[1] + 16)
//		{
//			STFLc++; return 205000000 + (card[s[5]].value * 10) + card[s[5]].shape;
//		}
//		else if (s[4] == s[3] + 4 == s[2] + 8 == s[1] + 12 == s[0] + 16)
//		{
//			STFLc++; return 205000000 + (card[s[4]].value * 10) + card[s[4]].shape;
//		}
//		return 0;
//	}
//
//	int STFLD(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		if (card[a7].value < 5)
//			return 0;
//
//		int j, k;
//		int num[7];
//		int s[7] = { 100,100,100,100,100,100,100 };
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		for (j = 0, k = 0; j < 7; j++, k++)
//		{
//			if (num[j] % 4 == 2)
//				s[k] = num[j];
//			else
//				k--;
//		}
//
//		if (s[4] == 100)
//			return 0;
//
//		if (s[6] == s[5] + 4 == s[4] + 8 == s[3] + 12 == s[2] + 16)
//		{
//			STFLc++; return 205000000 + (card[s[6]].value * 10) + card[s[6]].shape;
//		}
//		else if (s[5] == s[4] + 4 == s[3] + 8 == s[2] + 12 == s[1] + 16)
//		{
//			STFLc++; return 205000000 + (card[s[5]].value * 10) + card[s[5]].shape;
//		}
//		else if (s[4] == s[3] + 4 == s[2] + 8 == s[1] + 12 == s[0] + 16)
//		{
//			STFLc++; return 205000000 + (card[s[4]].value * 10) + card[s[4]].shape;
//		}
//		return 0;
//	}
//	int STFLH(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		if (card[a7].value < 5)
//			return 0;
//
//		int j, k;
//		int num[7];
//		int s[7] = { 100,100,100,100,100,100,100 };
//
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		for (j = 0, k = 0; j < 7; j++, k++)
//		{
//			if (num[j] % 4 == 1)
//				s[k] = num[j];
//			else
//				k--;
//		}
//
//		if (s[4] == 100)
//			return 0;
//
//		if (s[6] == s[5] + 4 == s[4] + 8 == s[3] + 12 == s[2] + 16)
//		{
//			STFLc++; return 205000000 + (card[s[6]].value * 10) + card[s[6]].shape;
//		}
//		else if (s[5] == s[4] + 4 == s[3] + 8 == s[2] + 12 == s[1] + 16)
//		{
//			STFLc++; return 205000000 + (card[s[5]].value * 10) + card[s[5]].shape;
//		}
//		else if (s[4] == s[3] + 4 == s[2] + 8 == s[1] + 12 == s[0] + 16)
//		{
//			STFLc++; return 205000000 + (card[s[4]].value * 10) + card[s[4]].shape;
//		}
//		return 0;
//	}
//
//	int STFLC(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		if (card[a7].value < 5)
//			return 0;
//
//		int j, k;
//		int num[7];
//		int s[7] = { 100,100,100,100,100,100,100 };
//
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		for (j = 0, k = 0; j < 7; j++, k++)
//		{
//			if (num[j] % 4 == 0)
//				s[k] = num[j];
//			else
//				k--;
//		}
//
//		if (s[4] == 100)
//			return 0;
//
//		if (s[6] == s[5] + 4 == s[4] + 8 == s[3] + 12 == s[2] + 16)
//		{
//			STFLc++; return 205000000 + (card[s[6]].value * 10) + card[s[6]].shape;
//		}
//		else if (s[5] == s[4] + 4 == s[3] + 8 == s[2] + 12 == s[1] + 16)
//		{
//			STFLc++; return 205000000 + (card[s[5]].value * 10) + card[s[5]].shape;
//		}
//		else if (s[4] == s[3] + 4 == s[2] + 8 == s[1] + 12 == s[0] + 16)
//		{
//			STFLc++; return 205000000 + (card[s[4]].value * 10) + card[s[4]].shape;
//		}
//
//		return 0;
//	}
//
//	int FOCA(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		int i, j;
//		int num[7];
//		int poca[13] = { 0, };
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		for (i = 0; i < 7; i++)
//		{
//			poca[card[num[i]].value - 1]++;
//		}
//
//		for (j = 0; j < 13; j++)
//		{
//			if (poca[j] == 4)
//			{
//				FOCAc++;
//				return 201000000 + j;
//			}
//		}
//
//		return 0;
//	}
//
//	int FULL(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		int i, j, k;
//		int num[7];
//		int full[13] = { 0, };
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		for (i = 0; i < 7; i++)
//		{
//			full[card[num[i]].value - 1]++;
//		}
//
//		for (j = 12; j >= 0; j--)
//		{
//			if (full[j] == 3)
//			{
//				for (k = j - 1; k >= 0; k--)
//				{
//					if (full[k] >= 2)
//					{
//						FULLc++;
//						return 200000000 + (j * 100) + k;
//					}
//				}
//			}
//		}
//		return 0;
//	}
//
//	int FLSHS(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		int j, k;
//		int num[7];
//		int s[7] = { 100,100,100,100,100,100,100 };
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		for (j = 0, k = 0; j < 7; j++, k++)
//		{
//			if (num[j] % 4 == 3)
//				s[k] = num[j];
//			else
//				k--;
//		}
//
//		if (s[4] == 100)
//			return 0;
//
//		if (s[6] != 100)
//		{
//			FLSHc++;
//			return 190000000 + (card[s[6]].value * 10000) + (card[s[5]].value * 1000) + (card[s[4]].value * 100) + (card[s[3]].value * 10) + card[s[2]].value;
//		}
//		else if (s[5] != 100)
//		{
//			FLSHc++;
//			return 190000000 + (card[s[5]].value * 10000) + (card[s[4]].value * 1000) + (card[s[3]].value * 100) + (card[s[2]].value * 10) + card[s[1]].value;
//		}
//		else if (s[4] != 100)
//		{
//			FLSHc++;
//			return 190000000 + (card[s[4]].value * 10000) + (card[s[3]].value * 1000) + (card[s[2]].value * 100) + (card[s[1]].value * 10) + card[s[0]].value;
//		}
//		else
//			return 0;
//	}
//
//	int FLSHD(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		int j, k;
//		int num[7];
//		int s[7] = { 100,100,100,100,100,100,100 };
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		for (j = 0, k = 0; j < 7; j++, k++)
//		{
//			if (num[j] % 4 == 2)
//				s[k] = num[j];
//			else
//				k--;
//		}
//
//		if (s[4] == 100)
//			return 0;
//
//		if (s[6] != 100)
//		{
//			FLSHc++;
//			return 190000000 + (card[s[6]].value * 10000) + (card[s[5]].value * 1000) + (card[s[4]].value * 100) + (card[s[3]].value * 10) + card[s[2]].value;
//		}
//		else if (s[5] != 100)
//		{
//			FLSHc++;
//			return 190000000 + (card[s[5]].value * 10000) + (card[s[4]].value * 1000) + (card[s[3]].value * 100) + (card[s[2]].value * 10) + card[s[1]].value;
//		}
//		else if (s[4] != 100)
//		{
//			FLSHc++;
//			return 190000000 + (card[s[4]].value * 10000) + (card[s[3]].value * 1000) + (card[s[2]].value * 100) + (card[s[1]].value * 10) + card[s[0]].value;
//		}
//		else
//			return 0;
//	}
//	int FLSHH(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		int j, k;
//		int num[7];
//		int s[7] = { 100,100,100,100,100,100,100 };
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		for (j = 0, k = 0; j < 7; j++, k++)
//		{
//			if (num[j] % 4 == 1)
//				s[k] = num[j];
//			else
//				k--;
//		}
//
//		if (s[4] == 100)
//			return 0;
//
//		if (s[6] != 100)
//		{
//			FLSHc++;
//			return 190000000 + (card[s[6]].value * 10000) + (card[s[5]].value * 1000) + (card[s[4]].value * 100) + (card[s[3]].value * 10) + card[s[2]].value;
//		}
//		else if (s[5] != 100)
//		{
//			FLSHc++;
//			return 190000000 + (card[s[5]].value * 10000) + (card[s[4]].value * 1000) + (card[s[3]].value * 100) + (card[s[2]].value * 10) + card[s[1]].value;
//		}
//		else if (s[4] != 100)
//		{
//			FLSHc++;
//			return 190000000 + (card[s[4]].value * 10000) + (card[s[3]].value * 1000) + (card[s[2]].value * 100) + (card[s[1]].value * 10) + card[s[0]].value;
//		}
//		else
//			return 0;
//	}
//	int FLSHC(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		int j, k;
//		int num[7];
//		int s[7] = { 100,100,100,100,100,100,100 };
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		for (j = 0, k = 0; j < 7; j++, k++)
//		{
//			if (num[j] % 4 == 0)
//				s[k] = num[j];
//			else
//				k--;
//		}
//
//		if (s[4] == 100)
//			return 0;
//
//		if (s[6] != 100)
//		{
//			FLSHc++;
//			return 190000000 + (card[s[6]].value * 10000) + (card[s[5]].value * 1000) + (card[s[4]].value * 100) + (card[s[3]].value * 10) + card[s[2]].value;
//		}
//		else if (s[5] != 100)
//		{
//			FLSHc++;
//			return 190000000 + (card[s[5]].value * 10000) + (card[s[4]].value * 1000) + (card[s[3]].value * 100) + (card[s[2]].value * 10) + card[s[1]].value;
//		}
//		else if (s[4] != 100)
//		{
//			FLSHc++;
//			return 190000000 + (card[s[4]].value * 10000) + (card[s[3]].value * 1000) + (card[s[2]].value * 100) + (card[s[1]].value * 10) + card[s[0]].value;
//		}
//		else
//			return 0;
//	}
//	int MOUN(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		int j;
//		int num[7];
//		int s[5] = { 0, };
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		if (card[a7].value != 13)
//			return 0;
//
//		for (j = 0; j < 7; j++)
//		{
//			if (card[num[j]].value == 13)
//				s[0]++;
//			else if (card[num[j]].value == 12)
//				s[1]++;
//			else if (card[num[j]].value == 11)
//				s[2]++;
//			else if (card[num[j]].value == 10)
//				s[3]++;
//			else if (card[num[j]].value == 9)
//				s[4]++;
//		}
//		if (s[0] > 0 && s[1] > 0 && s[2] > 0 && s[3] > 0 && s[4] > 0)
//		{
//			MOUNc++;
//			return 185000000 + a7;
//		}
//		else
//			return 0;
//	}
//
//	int BST(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		int j;
//		int num[7];
//		int s[5] = { 0, };
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		if (card[a7].value != 13)
//			return 0;
//
//		for (j = 0; j < 7; j++)
//		{
//			if (card[num[j]].value == 13)
//				s[0]++;
//			else if (card[num[j]].value == 2)
//				s[1]++;
//			else if (card[num[j]].value == 1)
//				s[2]++;
//			else if (card[num[j]].value == 3)
//				s[3]++;
//			else if (card[num[j]].value == 4)
//				s[4]++;
//		}
//		if (s[0] > 0 && s[1] > 0 && s[2] > 0 && s[3] > 0 && s[4] > 0)
//		{
//			BSTc++;
//			return 184000000 + a7;
//		}
//		else
//			return 0;
//	}
//
//	int ST(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		int j, k;
//		int num[7];
//		int s[7] = { 51,51,51,51,51,51,51 };
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		if (card[a7].value < 5)
//			return 0;
//
//		for (j = 6, k = 6; j >= 0; j--, k--)
//		{
//			if (j>2)
//			{
//				if (card[num[j]].value == card[num[j - 1]].value == card[num[j - 2]].value)
//				{
//					s[k] = num[j];
//					j = j - 2;
//				}
//				else if (card[num[j]].value == card[num[j - 1]].value)
//				{
//					s[k] = num[j];
//					j = j - 1;
//				}
//				else
//					s[k] = num[j];
//			}
//			else if (j > 1)
//			{
//				if (card[num[j]].value == card[num[j - 1]].value)
//				{
//					s[k] = num[j];
//					j = j - 1;
//				}
//				else
//					s[k] = num[j];
//			}
//			else
//				s[k] = num[j];
//		}
//
//		if (card[s[6]].value - card[s[2]].value == 4)
//		{
//			STc++;
//			return 180000000 + (card[s[6]].value * 10000) + (card[s[6]].shape * 100);
//		}
//		else if (card[s[5]].value - card[s[1]].value == 4)
//		{
//			STc++;
//			return 180000000 + (card[s[5]].value * 10000) + (card[s[5]].shape * 100);
//		}
//		else if (card[s[4]].value - card[s[0]].value == 4)
//		{
//			STc++;
//			return 180000000 + (card[s[4]].value * 10000) + (card[s[4]].shape * 100);
//		}
//
//		return 0;
//	}
//
//	int TRI(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		int i, j;
//		int num[7];
//		int tri[13] = { 0, };
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		for (i = 0; i < 7; i++)
//		{
//			tri[card[num[i]].value - 1]++;
//		}
//
//		for (j = 12; j >= 0; j--)
//		{
//			if (tri[j] == 3)
//			{
//				TRIc++;
//				return 170000000 + j;
//			}
//		}
//		return 0;
//	}
//
//	int TWOP(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		int i, j, k;
//		int num[7];
//		int twop[13] = { 0, };
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		for (i = 0; i < 7; i++)
//		{
//			twop[card[num[i]].value - 1]++;
//		}
//
//		for (j = 12; j >= 0; j--)
//		{
//			if (twop[j] == 2)
//			{
//				for (k = j - 1; k >= 0; k--)
//				{
//					if (twop[k] == 2)
//					{
//						TWOPc++;
//						return 160000000 + (j * 100) + k;
//					}
//				}
//			}
//		}
//		return 0;
//	}
//	int ONEP(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		int i, j;
//		int num[7];
//		int onep[13] = { 0, };
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		for (i = 0; i < 7; i++)
//		{
//			onep[card[num[i]].value - 1]++;
//		}
//
//		for (j = 12; j >= 0; j--)
//		{
//			if (onep[j] == 2)
//			{
//				ONEPc++;
//				return 150000000 + (j * 100);
//			}
//		}
//		return 0;
//	}
//	int TOP(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		TOPc++;
//		return 100;
//
//	}
//
//	int RANK(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		int z = 0;
//		z = RSTFL(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = BSTFL(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = STFLS(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = STFLC(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = STFLD(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = STFLH(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = FOCA(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = FULL(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = FLSHS(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = FLSHD(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = FLSHH(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = FLSHC(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = MOUN(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = BST(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = ST(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = TRI(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = TWOP(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = ONEP(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		else
//			return TOP(a1, a2, a3, a4, a5, a6, a7);
//
//	}
//
//
//
//	int RSTFL2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		if (card[a7].value != 13)
//			return 0;
//
//		int i;
//		int num[7];
//		int s = 0, c = 0, h = 0, d = 0;
//
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//
//		for (i = 0; i < 7; i++)
//		{
//			if (num[i] == 51 || num[i] == 47 || num[i] == 43 || num[i] == 39 || num[i] == 35)
//				s++;
//			else if (num[i] == 50 || num[i] == 46 || num[i] == 42 || num[i] == 38 || num[i] == 34)
//				d++;
//			else if (num[i] == 49 || num[i] == 45 || num[i] == 41 || num[i] == 37 || num[i] == 33)
//				h++;
//			else if (num[i] == 48 || num[i] == 44 || num[i] == 40 || num[i] == 36 || num[i] == 32)
//				c++;
//		}
//		if (s > 4)
//		{
//			return 210000000;
//		}
//		else if (d > 4)
//		{
//			return 210000000;
//		}
//		else if (h > 4)
//		{
//			return 210000000;
//		}
//		else if (c > 4)
//		{
//			return 210000000;
//		}
//
//		return 0;
//	}
//
//
//	int BSTFL2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		if (card[a7].value != 13)
//			return 0;
//
//		int i;
//		int num[7];
//		int s = 0, c = 0, h = 0, d = 0;
//
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//
//		for (i = 0; i < 7; i++)
//		{
//			if (num[i] == 51 || num[i] == 3 || num[i] == 7 || num[i] == 11 || num[i] == 15)
//				s++;
//			else if (num[i] == 50 || num[i] == 6 || num[i] == 2 || num[i] == 14 || num[i] == 10)
//				d++;
//			else if (num[i] == 49 || num[i] == 5 || num[i] == 1 || num[i] == 9 || num[i] == 13)
//				h++;
//			else if (num[i] == 48 || num[i] == 4 || num[i] == 0 || num[i] == 8 || num[i] == 12)
//				c++;
//		}
//		if (s > 4)
//		{
//			return 209000000;
//		}
//		else if (d > 4)
//		{
//			return 209000000;
//		}
//		else if (h > 4)
//		{
//			return 209000000;
//		}
//		else if (c > 4)
//		{
//			return 209000000;
//		}
//
//		return 0;
//	}
//
//	int STFLS2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		if (card[a7].value < 5)
//			return 0;
//
//		int j, k;
//		int num[7];
//		int s[7] = { 100,100,100,100,100,100,100 };
//
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		for (j = 0, k = 0; j < 7; j++, k++)
//		{
//			if (num[j] % 4 == 3)
//				s[k] = num[j];
//			else
//				k--;
//		}
//
//		if (s[4] == 100)
//			return 0;
//
//		if (s[6] == s[5] + 4 == s[4] + 8 == s[3] + 12 == s[2] + 16)
//		{
//			return 205000000 + (card[s[6]].value * 10) + card[s[6]].shape;
//		}
//		else if (s[5] == s[4] + 4 == s[3] + 8 == s[2] + 12 == s[1] + 16)
//		{
//			return 205000000 + (card[s[5]].value * 10) + card[s[5]].shape;
//		}
//		else if (s[4] == s[3] + 4 == s[2] + 8 == s[1] + 12 == s[0] + 16)
//		{
//			return 205000000 + (card[s[4]].value * 10) + card[s[4]].shape;
//		}
//		return 0;
//	}
//
//	int STFLD2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		if (card[a7].value < 5)
//			return 0;
//
//		int j, k;
//		int num[7];
//		int s[7] = { 100,100,100,100,100,100,100 };
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		for (j = 0, k = 0; j < 7; j++, k++)
//		{
//			if (num[j] % 4 == 2)
//				s[k] = num[j];
//			else
//				k--;
//		}
//
//		if (s[4] == 100)
//			return 0;
//
//		if (s[6] == s[5] + 4 == s[4] + 8 == s[3] + 12 == s[2] + 16)
//		{
//			return 205000000 + (card[s[6]].value * 10) + card[s[6]].shape;
//		}
//		else if (s[5] == s[4] + 4 == s[3] + 8 == s[2] + 12 == s[1] + 16)
//		{
//			return 205000000 + (card[s[5]].value * 10) + card[s[5]].shape;
//		}
//		else if (s[4] == s[3] + 4 == s[2] + 8 == s[1] + 12 == s[0] + 16)
//		{
//			return 205000000 + (card[s[4]].value * 10) + card[s[4]].shape;
//		}
//
//		return 0;
//	}
//	int STFLH2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		if (card[a7].value < 5)
//			return 0;
//
//		int j, k;
//		int num[7];
//		int s[7] = { 100,100,100,100,100,100,100 };
//
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		for (j = 0, k = 0; j < 7; j++, k++)
//		{
//			if (num[j] % 4 == 1)
//				s[k] = num[j];
//			else
//				k--;
//		}
//
//		if (s[4] == 100)
//			return 0;
//
//		if (s[6] == s[5] + 4 == s[4] + 8 == s[3] + 12 == s[2] + 16)
//		{
//			return 205000000 + (card[s[6]].value * 10) + card[s[6]].shape;
//		}
//		else if (s[5] == s[4] + 4 == s[3] + 8 == s[2] + 12 == s[1] + 16)
//		{
//			return 205000000 + (card[s[5]].value * 10) + card[s[5]].shape;
//		}
//		else if (s[4] == s[3] + 4 == s[2] + 8 == s[1] + 12 == s[0] + 16)
//		{
//			return 205000000 + (card[s[4]].value * 10) + card[s[4]].shape;
//		}
//
//		return 0;
//	}
//
//	int STFLC2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		if (card[a7].value < 5)
//			return 0;
//
//		int j, k;
//		int num[7];
//		int s[7] = { 100,100,100,100,100,100,100 };
//
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		for (j = 0, k = 0; j < 7; j++, k++)
//		{
//			if (num[j] % 4 == 0)
//				s[k] = num[j];
//			else
//				k--;
//		}
//
//		if (s[4] == 100)
//			return 0;
//
//		if (s[6] == s[5] + 4 == s[4] + 8 == s[3] + 12 == s[2] + 16)
//		{
//			return 205000000 + (card[s[6]].value * 10) + card[s[6]].shape;
//		}
//		else if (s[5] == s[4] + 4 == s[3] + 8 == s[2] + 12 == s[1] + 16)
//		{
//			return 205000000 + (card[s[5]].value * 10) + card[s[5]].shape;
//		}
//		else if (s[4] == s[3] + 4 == s[2] + 8 == s[1] + 12 == s[0] + 16)
//		{
//			return 205000000 + (card[s[4]].value * 10) + card[s[4]].shape;
//		}
//
//
//		return 0;
//	}
//
//	int FOCA2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		int i, j;
//		int num[7];
//		int poca[13] = { 0, };
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		for (i = 0; i < 7; i++)
//		{
//			poca[card[num[i]].value - 1]++;
//		}
//
//		for (j = 0; j < 13; j++)
//		{
//			if (poca[j] == 4)
//			{
//				return 201000000 + j;
//			}
//		}
//
//		return 0;
//	}
//
//	int FULL2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		int i, j, k;
//		int num[7];
//		int full[13] = { 0, };
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		for (i = 0; i < 7; i++)
//		{
//			full[card[num[i]].value - 1]++;
//		}
//
//		for (j = 12; j >= 0; j--)
//		{
//			if (full[j] == 3)
//			{
//				for (k = j - 1; k >= 0; k--)
//				{
//					if (full[k] >= 2)
//					{
//						return 200000000 + (j * 100) + k;
//					}
//				}
//			}
//		}
//		return 0;
//	}
//
//	int FLSHS2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		int j, k;
//		int num[7];
//		int s[7] = { 100,100,100,100,100,100,100 };
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		for (j = 0, k = 0; j < 7; j++, k++)
//		{
//			if (num[j] % 4 == 3)
//				s[k] = num[j];
//			else
//				k--;
//		}
//
//		if (s[4] == 100)
//			return 0;
//
//		if (s[6] != 100)
//		{
//			return 190000000 + (card[s[6]].value * 10000) + (card[s[5]].value * 1000) + (card[s[4]].value * 100) + (card[s[3]].value * 10) + card[s[2]].value;
//		}
//		else if (s[5] != 100)
//		{
//			return 190000000 + (card[s[5]].value * 10000) + (card[s[4]].value * 1000) + (card[s[3]].value * 100) + (card[s[2]].value * 10) + card[s[1]].value;
//		}
//		else if (s[4] != 100)
//		{
//			return 190000000 + (card[s[4]].value * 10000) + (card[s[3]].value * 1000) + (card[s[2]].value * 100) + (card[s[1]].value * 10) + card[s[0]].value;
//		}
//		else
//			return 0;
//	}
//
//	int FLSHD2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		int j, k;
//		int num[7];
//		int s[7] = { 100,100,100,100,100,100,100 };
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		for (j = 0, k = 0; j < 7; j++, k++)
//		{
//			if (num[j] % 4 == 2)
//				s[k] = num[j];
//			else
//				k--;
//		}
//
//		if (s[4] == 100)
//			return 0;
//
//		if (s[6] != 100)
//		{
//			return 190000000 + (card[s[6]].value * 10000) + (card[s[5]].value * 1000) + (card[s[4]].value * 100) + (card[s[3]].value * 10) + card[s[2]].value;
//		}
//		else if (s[5] != 100)
//		{
//			return 190000000 + (card[s[5]].value * 10000) + (card[s[4]].value * 1000) + (card[s[3]].value * 100) + (card[s[2]].value * 10) + card[s[1]].value;
//		}
//		else if (s[4] != 100)
//		{
//			return 190000000 + (card[s[4]].value * 10000) + (card[s[3]].value * 1000) + (card[s[2]].value * 100) + (card[s[1]].value * 10) + card[s[0]].value;
//		}
//		else
//			return 0;
//	}
//	int FLSHH2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		int j, k;
//		int num[7];
//		int s[7] = { 100,100,100,100,100,100,100 };
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		for (j = 0, k = 0; j < 7; j++, k++)
//		{
//			if (num[j] % 4 == 1)
//				s[k] = num[j];
//			else
//				k--;
//		}
//
//		if (s[4] == 100)
//			return 0;
//
//		if (s[6] != 100)
//		{
//			return 190000000 + (card[s[6]].value * 10000) + (card[s[5]].value * 1000) + (card[s[4]].value * 100) + (card[s[3]].value * 10) + card[s[2]].value;
//		}
//		else if (s[5] != 100)
//		{
//			return 190000000 + (card[s[5]].value * 10000) + (card[s[4]].value * 1000) + (card[s[3]].value * 100) + (card[s[2]].value * 10) + card[s[1]].value;
//		}
//		else if (s[4] != 100)
//		{
//			return 190000000 + (card[s[4]].value * 10000) + (card[s[3]].value * 1000) + (card[s[2]].value * 100) + (card[s[1]].value * 10) + card[s[0]].value;
//		}
//		else
//			return 0;
//	}
//	int FLSHC2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		int j, k;
//		int num[7];
//		int s[7] = { 100,100,100,100,100,100,100 };
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		for (j = 0, k = 0; j < 7; j++, k++)
//		{
//			if (num[j] % 4 == 0)
//				s[k] = num[j];
//			else
//				k--;
//		}
//
//		if (s[4] == 100)
//			return 0;
//
//		if (s[6] != 100)
//		{
//			return 190000000 + (card[s[6]].value * 10000) + (card[s[5]].value * 1000) + (card[s[4]].value * 100) + (card[s[3]].value * 10) + card[s[2]].value;
//		}
//		else if (s[5] != 100)
//		{
//			return 190000000 + (card[s[5]].value * 10000) + (card[s[4]].value * 1000) + (card[s[3]].value * 100) + (card[s[2]].value * 10) + card[s[1]].value;
//		}
//		else if (s[4] != 100)
//		{
//			return 190000000 + (card[s[4]].value * 10000) + (card[s[3]].value * 1000) + (card[s[2]].value * 100) + (card[s[1]].value * 10) + card[s[0]].value;
//		}
//		else
//			return 0;
//	}
//	int MOUN2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		int j;
//		int num[7];
//		int s[5] = { 0, };
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		if (card[a7].value != 13)
//			return 0;
//
//		for (j = 0; j < 7; j++)
//		{
//			if (card[num[j]].value == 13)
//				s[0]++;
//			else if (card[num[j]].value == 12)
//				s[1]++;
//			else if (card[num[j]].value == 11)
//				s[2]++;
//			else if (card[num[j]].value == 10)
//				s[3]++;
//			else if (card[num[j]].value == 9)
//				s[4]++;
//		}
//		if (s[0] > 0 && s[1] > 0 && s[2] > 0 && s[3] > 0 && s[4] > 0)
//		{
//			return 185000000 + a7;
//		}
//		else
//			return 0;
//	}
//
//	int BST2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		int j;
//		int num[7];
//		int s[5] = { 0, };
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		if (card[a7].value != 13)
//			return 0;
//
//		for (j = 0; j < 7; j++)
//		{
//			if (card[num[j]].value == 13)
//				s[0]++;
//			else if (card[num[j]].value == 2)
//				s[1]++;
//			else if (card[num[j]].value == 1)
//				s[2]++;
//			else if (card[num[j]].value == 3)
//				s[3]++;
//			else if (card[num[j]].value == 4)
//				s[4]++;
//		}
//		if (s[0] > 0 && s[1] > 0 && s[2] > 0 && s[3] > 0 && s[4] > 0)
//		{
//			return 184000000 + a7;
//		}
//		else
//			return 0;
//	}
//
//	int ST2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		int j, k;
//		int num[7];
//		int s[7] = { 51,51,51,51,51,51,51 };
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		if (card[a7].value < 5)
//			return 0;
//
//		for (j = 6, k = 6; j >= 0; j--, k--)
//		{
//			if (j>2)
//			{
//				if (card[num[j]].value == card[num[j - 1]].value == card[num[j - 2]].value)
//				{
//					s[k] = num[j];
//					j = j - 2;
//				}
//				else if (card[num[j]].value == card[num[j - 1]].value)
//				{
//					s[k] = num[j];
//					j = j - 1;
//				}
//				else
//					s[k] = num[j];
//			}
//			else if (j > 1)
//			{
//				if (card[num[j]].value == card[num[j - 1]].value)
//				{
//					s[k] = num[j];
//					j = j - 1;
//				}
//				else
//					s[k] = num[j];
//			}
//			else
//				s[k] = num[j];
//		}
//
//		if (card[s[6]].value - card[s[2]].value == 4)
//		{
//			return 180000000 + (card[s[6]].value * 10000) + (card[s[6]].shape * 100);
//		}
//		else if (card[s[5]].value - card[s[1]].value == 4)
//		{
//			return 180000000 + (card[s[5]].value * 10000) + (card[s[5]].shape * 100);
//		}
//		else if (card[s[4]].value - card[s[0]].value == 4)
//		{
//			return 180000000 + (card[s[4]].value * 10000) + (card[s[4]].shape * 100);
//		}
//
//		return 0;
//	}
//
//	int TRI2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		int i, j;
//		int num[7];
//		int tri[13] = { 0, };
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		for (i = 0; i < 7; i++)
//		{
//			tri[card[num[i]].value - 1]++;
//		}
//
//		for (j = 12; j >= 0; j--)
//		{
//			if (tri[j] == 3)
//			{
//				return 170000000 + j;
//			}
//		}
//		return 0;
//	}
//
//	int TWOP2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		int i, j, k;
//		int num[7];
//		int twop[13] = { 0, };
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		for (i = 0; i < 7; i++)
//		{
//			twop[card[num[i]].value - 1]++;
//		}
//
//		for (j = 12; j >= 0; j--)
//		{
//			if (twop[j] == 2)
//			{
//				for (k = j - 1; k >= 0; k--)
//				{
//					if (twop[k] == 2)
//					{
//						return 160000000 + (j * 100) + k;
//					}
//				}
//			}
//		}
//		return 0;
//	}
//	int ONEP2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		int i, j;
//		int num[7];
//		int onep[13] = { 0, };
//		num[0] = a1;    num[1] = a2;    num[2] = a3;    num[3] = a4;    num[4] = a5;    num[5] = a6;    num[6] = a7;
//
//		for (i = 0; i < 7; i++)
//		{
//			onep[card[num[i]].value - 1]++;
//		}
//
//		for (j = 12; j >= 0; j--)
//		{
//			if (onep[j] == 2)
//			{
//				return 150000000 + (j * 100);
//			}
//		}
//		return 0;
//	}
//	int TOP2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		return 100;
//
//	}
//
//	int RANK2(int a1, int a2, int  a3, int  a4, int  a5, int  a6, int  a7)
//	{
//		int z = 0;
//		z = RSTFL2(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = BSTFL2(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = STFLS2(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = STFLC2(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = STFLD2(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = STFLH2(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = FOCA2(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = FULL2(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = FLSHS2(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = FLSHD2(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = FLSHH2(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = FLSHC2(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = MOUN2(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = BST2(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = ST2(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = TRI2(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = TWOP2(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		z = ONEP2(a1, a2, a3, a4, a5, a6, a7);
//		if (z != 0)
//			return z;
//
//		else
//			return TOP2(a1, a2, a3, a4, a5, a6, a7);
//
//	}
//
////void print () {
////	printf("%d", test[3]);
////}
//
//


