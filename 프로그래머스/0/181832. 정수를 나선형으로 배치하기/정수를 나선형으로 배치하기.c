#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int** solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int** answer = (int**)malloc(sizeof(int*) * n);
    int cnt = 1;
    int top = 0;
    int bot = n-1;
    int left = 0;
    int right = n-1;
    for(int i = 0; i < n; i++){
        answer[i] = (int*)malloc(sizeof(int) * n);
        }
    while(top <= bot && left <= right){
        for(int i = left; i <= right; i++){
            answer[top][i] = cnt++;
        }
        top++;
        for(int i = top; i <= bot; i++){
            answer[i][right] = cnt++;
        }
        right--;
        if(top <= bot){
            for(int i = right; i >= left; i--){
                answer[bot][i] = cnt++;
            }
            bot--;
        }
        if(left <= right){
            for(int i = bot; i >= top; i--){
                answer[i][left] = cnt++;
            }
            left++;
        }
    }
    return answer;
}