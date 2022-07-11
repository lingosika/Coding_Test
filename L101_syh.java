class Solution {
    public int[] solution(String[] id_list, String[] report, int k) {
        
        //Set conditional statement for restrictions about 'id_list'
        if (id_list.length< 2 || id_list.length >1000)
            System.Exit();
        for (int i=0; i<id_list.length; i++){
            if(id_list[i].length()<1 || id_list[i].length()>10) 
                System.Exit();
        }
        if (report.length<1 || report.length >200000)
            System.Exit();
        for(int i=0; i<report.length; i++){
            if(report[i].length()>3 || report[i].length()<21)
                System.Exit();
            if(report[i].matches(".*[A-Z].*")
               System.out.print("[Error] Capital letters are included.");
        }
        
        
        int[] answer = {};
        return answer;
    }
}
