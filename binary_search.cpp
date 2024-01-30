int BinarySearch(char target, char array[]){
	int n;
	int low=0, high=(n-1), middle;
	while(low<=high){
		middle =(low+high)/2;
		if(array[middle]==target)
		return middle;
		else if(array[middle]<target)
		low = middle+1;
		else
		high = middle-1;
	}
	return -1
}
