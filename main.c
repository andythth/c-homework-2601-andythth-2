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
	char market_type; 
	int buy_price;
	int quantity;
	int current_price;
	int total_invest;
	int current_value;
	int profit_loss;
	float yield_rate;
	
	printf("=== 떡상 기원 모의 주식 다이어리 ===\n");
	
	printf("1. 주식 시장을 알파벳 한 글자로 입력하세요 (K/Q/N 등): ");
	scanf(" %c", &market_type);
	
	printf("2. 1주당 매수 단가를입력하세요 (원): ");
	scanf("%d", &buy_price);
	
	printf("3. 보유 수량을 입력하세요 (주): ");
	scanf("%d", &quantity);
	
	printf("4. 현재가를 입력하세요 (원): ");
	scanf("%d", &current_price);
	
	
	total_invest = buy_price*quantity;  //곱셈
	current_value = current_price*quantity; //곱셈
	profit_loss = current_value-total_invest; //뺄셈
	
	yield_rate = ((float)profit_loss/total_invest)*100; //나눗셈, 곱셈
	
	printf("\n==================결과요약===================\n");
	printf("시장      : %c\n", market_type);
	printf("매수총액  : %d원\n", total_invest);
	printf("현재가치  : %d원\n", current_value);
	printf("수익률    : %.2f%%\n", yield_rate);
	printf("---------------------------------------------\n");
	printf(">>총 평가 손익 : %d원\n", profit_loss);
	printf("=============================================\n");
	
	return 0;
	
}
