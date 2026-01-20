
#include<stdio.h>
#include<limits.h>
#define V 5

#define MAX 100

//Prims Algorithm
void prims(int cost[V][V]);
int find_min_edge(int cost[V][V],int selected[V],int *x,int *y);

//Topological Sort

int adj[MAX][MAX];
int visited[MAX];
int stack[MAX];
int top=-1;
int n;

void create_graph();
void topological_sort();
void dfs(int v);


//Quick Sort
void quicksort(int arr[],int low,int high);
int partition(int arr[],int low,int high);
void swap(int arr[],int i,int j);

//heap sort
void heapsort(int arr[],int n);
void heapify(int arr[],int n,int i);

//Mergesort
void mergesort(int arr[],int left,int right);
void merge(int arr[],int left,int mid,int right);

//Count Sort
void countsort(int A[],int B[],int n);
int max(int A[],int n);

//selection_sort
void selection_sort(int arr[],int n);

//Insertion Sort
void insertion_sort(int arr[],int n);

//Bubble Sort
void Bubble_sort(int arr[],int n);

//Binary Search
int Binary_Search(int arr[],int n,int key);

//Sequential Search
int sequential_search(int arr[],int n,int key);

//factorial
int factorial(int n);

//palindorme
int palindrome(int num);

int sum_of_diigit(int num);

int main(){
    int arr[]={20,30,21,15,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int B[n];
    int key=21;

    // quicksort(arr,0,n-1);

    // heapsort(arr,n);

    // mergesort(arr,0,n-1);

    // selection_sort(arr,n);

    // countsort(arr,B,n);
    // insertion_sort(arr,n);

    // Bubble_sort(arr,n);

    // for(int i=0;i<n;i++){
    //     printf("%d ",arr[i]);
    // }
    // // int res=Binary_Search(arr,n,key);
    // int res=sequential_search(arr,n,key);
    // if(res!=-1){
    //     printf("\n%d is found at index %d",key,res);
    // }
    // else{
    //     printf("\n%d is not found ",key);

    // }

    // printf("\nFactorial of %d is %d",n+3,factorial(n+3));
    // printf("\nCount Sort :\n");
    // for(int i=0;i<n;i++){
    //     printf("%d ",B[i]);
    // }

// int num =91;
// if(palindrome(num)!= -1){
//     printf("\n%d is Palindrome",num);
// }
// else{
//     printf("\n%d is not Palindrome",num);
// }
// printf("\nSum of %d is %d",num,sum_of_diigit(num));



// create_graph();
// topological_sort();


    int cost[V][V] = {
        {0,12,5,8,9},
        {12,0,10,0,0},
        {5,10,0,7,0},
        {8,0,7,0,10},
        {9,0,0,10,0}
    };

    prims(cost);
    return 0;
}


//Prims Algorithm
void prims(int cost[V][V]){
    int selected[V]={0};
    int no_edge=0;
    int total_cost=0;

    selected[0]=1;

    while(no_edge<V-1){
        int x,y;
        int min=find_min_edge(cost,selected,&x,&y);
        printf("%d -> %d  %d\n",x,y,cost[x][y]);

        total_cost+=cost[x][y];
        selected[y]=1;
        no_edge++;
    }
    printf("Total Cost of MST iss %d",total_cost);
}

int find_min_edge(int cost[V][V],int selected[V],int *x,int *y){
    int min=INT_MAX;
    for(int i=0;i<V;i++){
        if(selected[i]){
            for(int j=0;j<V;j++){
                if(!selected[j]&&cost[i][j]){
                    if(cost[i][j]<min){
                        min=cost[i][j];
                        *x=i;
                        *y=j;
                    }
                }
            }
        }
    }
    return min;
}

//Topological Sort
void create_graph(){
    int origin,dest,edge;
    
    printf("Enter the number of Vertices");
    scanf("%d",&n);

    printf("\nEnter the Edge :");
    scanf("%d",&edge);

    for(int i=0;i<edge;i++){
        printf("\nEnter (Origin , Destination) :");
        scanf("%d %d",&origin,&dest);

        if(origin>=n||dest>=n||origin<0||dest<0){
            printf("\nInvalid");
            i--;
        }
        else{
            adj[origin][dest]=1;
        }
    }
}
void topological_sort(){
    for(int i=0;i<n;i++){
        visited[i]=0;
    }

    for(int i=0;i<n;i++){
        if (visited[i]==0){
            dfs(i);
        }        
    }
    printf("\nTopological Sort :");
    while (top!=-1){
        printf("%d ",stack[top--]);
    }
    
}
void dfs(int v){
    visited[v]=1;
    for(int i=0;i<n;i++){
        if(adj[v][i]==1 && visited[i]==0){
            dfs(i);
        }
    }
    stack[++top]=v;
}

//Quick Sort
void quicksort(int arr[],int low,int high){
    if(low<high){
        int pi=partition(arr,low,high);

        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}
int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;

    while(i<j){
        while(arr[i]<=pivot&&i<=high){
            i++;
        }
        while(arr[j]>pivot&&j>low){
            j--;
        }
        if(i<j){
            swap(arr,i,j);
        }
    }
    swap(arr,low,j);
    return j;
}
void swap(int arr[],int i,int j){
   int temp=arr[i];
   arr[i]=arr[j];
   arr[j]=temp;
}

//Heap Sort
void heapsort(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--){
        int temp=arr[0];
        arr[0]=arr[i];
        arr[i]=temp;

        heapify(arr,i,0);
    }
}
void heapify(int arr[],int n,int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;

    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n&& arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=i){
        int temp=arr[largest];
        arr[largest]=arr[i];
        arr[i]=temp;
        heapify(arr,i,largest);
    }
}

//Merge Sort
void mergesort(int arr[],int left,int right){
    if(left<right){
        int mid=left+(right-left)/2;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);

        merge(arr,left,mid,right);
    }
}
void merge(int arr[],int left,int mid,int right){
    int i,j,k;
    int n1=mid-left+1;
    int n2=right-mid;

    int L[n1];
    int R[n2];

    for(i=0;i<n1;i++){
        L[i]=arr[left+i];
    }
    for(j=0;j<n2;j++){
        R[j]=arr[mid+1+j];
    }

    i=0;
    j=0;
    k=left;
    while(i<n1&&j<n2){
        if(L[i]<R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}

//Count Sort
void countsort(int A[],int B[],int n){
    int k=max(A,n);

    int C[k+1];

    for(int i=0;i<=k;i++){
        C[i]=0;
    }
    for(int i=0;i<n;i++){
        C[A[i]]++;
    }
    for(int i=1;i<=k;i++){
        C[i]=C[i]+C[i-1];
    }
    for(int i=n-1;i>=0;i--){
        B[C[A[i]]-1]=A[i];
        C[A[i]]--;
    }
}
int max(int A[],int n){
    int m=A[0];

    for(int i=0;i<n;i++){
        if(m<A[i]){
            m=A[i];
        }
    }
    return m;
}

//Selection Sort

void selection_sort(int arr[],int n){
    int i,j,min_i;

    for(i=0;i<n;i++){
        min_i=i;
        for(j=0;j<n;j++){
            if(arr[min_i]<arr[j]){
                min_i=j;
            }
            int temp=arr[min_i];
            arr[min_i]=arr[i];
            arr[i]=temp;
        }
    }
}

//Insertion Sort
void insertion_sort(int arr[],int n){
    int i,j,temp;
    for(i=1;i<n;i++){
        temp=arr[i];
        j=i-1;
        while(j>=0 && temp<arr[j]){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
}

//Bubble Sort
void Bubble_sort(int arr[],int n){
    int i,j,temp;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

//Binary Search
int Binary_Search(int arr[],int n,int key){
    int left=0;
    int right=n;

    while(left<right){
        int mid=left+(right+left)/2;
        
        if(arr[mid]==key){
            return mid;
        }

        if(arr[mid]<key){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}

//Sequential Search
int sequential_search(int arr[],int n,int key){
    
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            return i;
        }
    }
    return -1;
}

//Factorial
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

//Palindrome
int palindrome(int num){
    int rev=0,temp=0;
    int num1=num;
    while(num!=0){
        temp=num%10;
        num=num/10;
        rev=(rev*10)+temp;
    }
    if(rev!=num1){
        return -1;
    }
    return rev;
}

int sum_of_diigit(int num){
    int new_num=0;
    int temp;
    while(num!=0){
        temp=num%10;
        num=num/10;
        new_num=new_num+temp;
    }
    return new_num;
}