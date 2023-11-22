// Question Link-->https://www.codingninjas.com/studio/problems/k-th-largest-sum-contiguous-subarray_920398?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=SUBMISSION

#include<algorithm>
int getKthLargest(vector<int> &arr, int k)
{
	vector<int> store;
	int n=arr.size();
	

	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;j++){

			sum+=arr[j];
			store.push_back(sum);
		}

	}

	sort(store.begin(),store.end());
	return store[store.size()-k];

}