#include<iostream>
#include<vector>
using namespace std;

void Subsets(vector<int>& arr, vector<int>& current, int i) {
    
    if (i == arr.size()) {
        
        cout << "{ ";
        for (int j = 0; j < current.size(); ++j) {
            cout << current[j] << " ";
        }
        cout << "}" << endl;
        return;
    }

    // Exclusion
    Subsets(arr, current, i + 1);

    // Inclusion
    current.push_back(arr[i]);
    Subsets(arr, current, i + 1);
    current.pop_back(); 
}

int main() {
    int size;
    cout << "Enter the size: " << endl;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        cout << "Enter the element at " << i << " th index: " << endl;
        cin >> arr[i];
    }

    vector<int> current;
    Subsets(arr, current, 0);

    return 0;
}