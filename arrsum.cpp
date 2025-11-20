class Solution{
public:
	int sum(int arr[], int n) {
        int total_sum=0;
        for (int i=0;i<=n-1;i++){
            total_sum=total_sum+arr[i];
        }
        return total_sum;
	}
};