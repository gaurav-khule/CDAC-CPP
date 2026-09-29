#include <iostream>
#include <vector>
using namespace std;

vector<int> sumOfWindows(int arr[], int n, int k){
    vector<int> result;

    if(k <= 0 || k > n)
        return result;
    for(int i = 0; i <= n - k; i++){
        int sum = 0;

        for(int j = i; j < i + k; j++){
            sum += arr[j];
        }

        result.push_back(sum);
    }
    return result;
}

int main(){
    int arr[] = {2, 1, 5, 3, 4, 6, 2};

    int n = 7;
    int k = 3;

    vector<int> result = sumOfWindows(arr, n, k);
    cout << "Window Sums: ";

    for(int x : result){
        cout << x << " ";
    }
    return 0;
}
