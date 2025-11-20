class Solution{
public:
    void reverse(int arr[], int n){
        int temp[n];
        for (int i=0;i<=n-1;i++){
            temp[n-1-i]=arr[i];
            }
        for (int i=0;i<=n-1;i++){
            arr[i]=temp[i];
        }
       
    }
};

