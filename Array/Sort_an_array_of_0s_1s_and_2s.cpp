
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int countzero=0,countone=0,counttwo=0;
        for (int i=0;i<n;i++){
            if(a[i]==0){
                countzero++;
            }
            if(a[i]==1){
                countone++;
            }
            if(a[i]==2){
                counttwo++;
            }
        }
        for(int j=0;j<n;j++){
            if(countzero!=0){
                a[j]=0;
                countzero--;
            }
            else if(countzero==0 && countone!=0){
                a[j]=1;
                countone--;
            }
            else if(countzero==0 && countone==0 && counttwo!=0){
                a[j]=2;
                counttwo--;
            }
        }
    }
    
};
