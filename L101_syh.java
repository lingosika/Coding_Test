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
            //This code doesn't have to be written, but 'matches' is very useful so I leave as it is.
            if(report[i].matches(".*[A-Z].*")
               System.out.print("[Error] Capital letters are included.");
        }
        
        //Create array 'result' to save the reported ID
        int[] split = {};
        int[] result;
        result = new int [id_list.length]; //Set initial value to 0
        int[] answer = {};
    
        //Write loop to know who is reported
        for (int i=0;i<id_list.length;i++){
            split = report[i].split(" "); //split 'report' and, save string at 'result'
            //To know 'who' report, will compare the split[1] and id_list
            for(int j=0;k<id_list.length;k++){ //For 'id_list' index
                String who; //Whether who reports
                if(split[0].eqauls(id_list[i])){
                    who = id_list[j];
                }
                if(split[1].equals(id_list[i])){
                    result[j]+=1;
                }
                if(result[j]>=k){
                    
                }
            }
        }
        //Check 'result' if values fulfill 'k'
        for(int i = 0; i < result.length; i++){
            
        }
        return answer;
    }
}
