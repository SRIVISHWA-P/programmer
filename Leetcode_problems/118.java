//Pascal's Triangle
class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> result = new ArrayList<>();
        for(int i=0;i<numRows;i++){
            List<Integer> current = new ArrayList<>(); 
            for(int j=0;j<=i;j++){
                current.add(NCR(i,i-j));
            }
            result.add(current);
        }
        return result;
    }

    public static int NCR(int N,int R){
        if(R==0 || N==1)
            return 1;
        int res=1;
        for(int i=0;i<R;i++){
            res = res*(N-i);
            res = res/(i+1);
        }
        return res;    
    }
}
