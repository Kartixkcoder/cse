// quick sort //

#include <iostream>
#include <vector>
using namespace std;

void swap(int &x, int &y) {
    int t = x;
    x = y;
    y = t;
}

int partition(vector<int> &a, int l, int h) {
    int pivot = a[h], i = l - 1;
    for (int j = l; j < h; j++) {
        if (a[j] <= pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[h]);
    return i + 1;
}

void q_sort(vector<int> &a, int l, int h) {
    if (l < h) {
        int pi = partition(a, l, h);
        q_sort(a, l, pi - 1);
        q_sort(a, pi + 1, h);
    }
}

void traverse(const vector<int> &a) {
    for (int i : a) cout << i << " ";
    cout << endl;
}

int main() {
    vector<int> a = {9, 4, 6, 2, 8, 1, 3, 5, 75, 72, 21, 19, 14, 13, 21, 66, 53, 20, 49, 98, 11, 71, 91, 58, 67, 66, 27, 51, 
 82, 29, 42, 91, 51, 20, 18, 60, 78, 81, 81, 24, 59, 98, 76, 75, 90, 66, 73, 72, 
 59, 29, 66, 43, 43, 55, 99, 60, 65, 83, 12, 55, 77, 41, 44, 46, 29, 75, 75, 68, 
 36, 32, 63, 60, 42, 58, 42, 85, 78, 52, 46, 10, 62, 19, 67, 24, 43, 12, 53, 80, 
 76, 10, 76, 39, 90, 42, 47, 34, 82, 44, 31, 82, 39, 65, 16, 72, 78, 87, 77, 73};
    q_sort(a, 0, a.size() - 1);
    traverse(a);
    return 0;
}