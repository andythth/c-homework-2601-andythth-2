/* 
  파일이름: 개미의 주식일기
  작 성 자: 이승주
  하 는 일: 대학생
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("chcp 65001");
	
	int buy_price, quantity, current_price;
	int total_invest, current_value, profit_loss;
	float yield_rate;
	char market_type;
	int i;
	
	printf("===V2.0 다중 주식 관리 시스템===\n");
	printf("총 3개의 보유 종목을 차례대로 입력하시오\n\n");
	
	for (i=1;i<=3; i++)
	{
		printf("---[%d번째 종목입력]---\n",i);
		
		printf("시장 입력 (K:코스피, Q:코스닥, N:나스닥): ");
		scanf(" %c", &market_type);
		
		printf("매수 단가(원): ");
		scanf(" %d", &buy_price);
		
		printf("보유수량(주): ");
		scanf(" %d", &quantity);
		
		printf("현재가(원): ");
		scanf(" %d", &current_price);
		
		//산술연산
		total_invest = buy_price*quantity;
		current_value = current_price*quantity;
		profit_loss = current_value - total_invest;
		yield_rate = ((float)profit_loss / total_invest)*100;
		
		printf("\n>> 분석 결과\n");
		
		switch (market_type)
		{
			case 'K':
			case 'k':
			{
				printf("- 시장: 대한민국 KOSPI (안정성 위주)\n");
				break;
			}
			case 'Q':
			case 'q':
			{
				printf("- 시장: 대한민국 KOSDAQ (성장주 위주)\n");
				break;
			}
			case 'N':
			case 'n':
			{
				printf("- 시장: 미국 NASDAQ (글로벌 안정성)\n");
				break;
			}
			default:
				printf("- 시장: 기타/미등록 시장\n");
				
		}
		
		if (yield_rate >= 10.0)
		{
			printf("- 평가손익 : %d원 (수익중)\n", profit_loss);
			printf("- 피드백: 수익률 %.2f%%! 익절 타이밍 추천\n", yield_rate);
		}
		else if (yield_rate >= 0.0)
		{
			printf("- 평가손익 : %d원 (본전)\n", profit_loss);
			printf("- 피드백: 수익률 %.2f%%. 원금을 지키는중...\n", yield_rate);
		}
		else
		{
			printf("- 평가손익 : %d원 (손실중)\n", profit_loss);
			printf("- 피드백: 수익률 %.2f%%. 손절하거나 손실구간 주의\n", yield_rate);
		}
		printf("---------------------------------------\n\n");
		
	}
	
	printf("모든 종목 분석이 완료되었습니다. 프로그램을 종료합니다.");
	
	
	return 0;
}
