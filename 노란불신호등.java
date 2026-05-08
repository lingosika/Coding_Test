class Solution {
    public int solution(int[][] signals) {
        int len = signals.length;
        int cnt = 0;
        int answer = 0;    
        int remainSize = 0;
        //divisor : 나누는 수(한 사이클 sec)
        //remain : 나머지(초+노); 비교하는 수(time%divisor == remain);
        int [] divisor = new int[len];
        int [][] remain = new int[len][];//remain 2차원 배열
        for(int i=0; i<len; i++){
            remain[i]  = new int[signals[i][1]+1];
            divisor[i] = signals[i][0] + signals[i][1] + signals[i][2];
        }
        //remain 초기화 
        for(int i =0; i<len; i++){
            for(int j = 1; j<signals[i][1]+1; j++){
                remain[i][j-1]= signals[i][0]+j;
            }
        }
        //time%divisor
        for(int time=1; time<5000000; time++){
            cnt = 0;
            for(int i=0; i<len; i++){
                for(int j=0; j<signals[i][1]; j++){
                    if((time%divisor[i])==remain[i][j]) {
                        cnt++;
                        break;
                    }else continue;
                }
            }
            if(cnt==len) {
                answer = time;
                return answer;
            }
        }
        return -1;
    }
}
