#include<iostream>

void merge(int arr[], int l, int m, int r){
    int i=0,j=0,k=0;
    int sizel = m-l+1;
    int sizer = r-m;
    int lt[sizel], rt[sizer];
    for(i=0;i<sizel;i++){
        lt[i]=arr[l+i];
    }
    for(j=0;j<sizer;j++){
        rt[j]=arr[m+j+1];
    }
    i=0;
    j=0;
    k=l;
    while(i<sizel && j<sizer){
        if(lt[i]<=rt[j]){
            arr[k]=lt[i];
            i++;
            //k++;
        }else{
            arr[k]=rt[j];
            j++;
            //k++;
        }
        k++;
    }
    while(i<sizel){
        arr[k]=lt[i];
        i++;
        k++;
    }
    while(j<sizer){
        arr[k]=rt[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int l , int r){
    if(l<r){
        int m=l+(r-l)/2;
        mergesort(arr,l,m);
        mergesort(arr, m+1,r);
        merge(arr,l,m,r);
    }
}
void show(int arr[], int n){
    for(int i=0;i<n;i++)
        std::cout<<arr[i]<<" ";
        std::cout<<std::endl;
}

int main(){
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int x;
	std::cin>>x;
	int fir[x],sec[x-1],thi[x-2];
	
	for(int i=0;i<x;i++)
		std::cin>>fir[i];
	
	for(int i=0;i<x-1;i++)
		std::cin>>sec[i];

	for(int i=0;i<x-2;i++)
		std::cin>>thi[i];

	mergesort(fir,0,x-1);
	mergesort(sec,0,x-2);
	mergesort(thi,0,x-3);
	for(int i=0;i<x;i++){
		if(fir[i]!=sec[i] && i<x-1){
			if(fir[i]>sec[i])
				std::cout<<sec[i]<<std::endl;
			else
				std::cout<<fir[i]<<std::endl;
			break;
		}
		if(i==x-1)
			std::cout<<fir[i]<<std::endl;
	}
	for(int i=0;i<x-1;i++){
		if(sec[i]!=thi[i] && i<x-2){
			if(sec[i]>thi[i])
				std::cout<<thi[i]<<std::endl;
			else
				std::cout<<sec[i]<<std::endl;
			break;
		}
		if(i==x-2)
			std::cout<<sec[i]<<std::endl;
	}
	return 0;
}