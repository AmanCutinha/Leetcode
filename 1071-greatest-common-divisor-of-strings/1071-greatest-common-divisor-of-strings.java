class Solution {
    public int gcd(int n,int m){
        while(m!=0){
            int t=m;
            m=n%m;
            n=t;
        }
        return n;
    }
    public String gcdOfStrings(String str1, String str2) {
        int n=str1.length();
        int m=str2.length();

        if(!(str1+str2).equals(str2+str1)) return "";
        int a=gcd(n,m);
        return str1.substring(0,a);
    }
}