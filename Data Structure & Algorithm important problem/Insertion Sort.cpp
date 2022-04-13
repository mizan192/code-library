///In the name of Almighty Allah(swt)
/// Insertion sort
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
#define smile ios_base::sync_with_stdio(false);	cin.tie(NULL);

int main()
{
	smile
	int n=10,i,j,New;
	int ar[n]={2,3,5,1,9,5,23,4,12,13};

/// insertion sort
	for(i=1; i<n; i++){        /// i = 0 will take as sorted first elemnt
		New = ar[i];          
		j = i;                 
		while( (j>0) && (ar[j-1]>New )  )     
		{
			ar[j] = ar[j-1];                  
			j--;
		}
		ar[j]= New;
	}

	lop(i,n)
	cout<<ar[i]<<" ";


	return 0;
}
/*
link: https://www.personal.kent.edu/~rmuhamma/Algorithms/MyAlgorithms/Sorting/insertionSort.htm
30 line : New will take ith element to check 
31 line : j =i ,, new element positon to compare previous element
32 line : if j>0 (until first element) && this first element is > New element
		 this loop will work until it will big then new element
34 line : place ar[j-1]  or previous element to new position and ar[j-1] postion will empty now
37 line : after finishing loop thats mean now no more element is big that New element 
			then new element will assign as its suitable position , as j--
*/
/*
1.Efficient for small data
2.Time complexity : O(n2)
3.We start with an empty left hand [sorted array] 
	and the cards face down on the table [unsorted array].
4.Then remove one card [key] at a time from the 
	table [unsorted array], and insert it into the 
	correct position in the left hand [sorted array].
5.To find the correct position for the card,
	 we compare it with each of the cards 
	 already in the hand, from right to left.
*/