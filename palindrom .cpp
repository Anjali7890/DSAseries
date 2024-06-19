#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Helper function to compute GCD
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to check if GCD sequence is non-decreasing
bool isNonDecreasing(const vector<int>& arr) {
    for (size_t i = 0; i + 1 < arr.size(); ++i) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

// Function to determine if we can remove one element to make GCD sequence non-decreasing
bool canMakeNonDecreasingByRemovingOne(vector<int>& a) {
    int n = a.size();
    if (n <= 2) {
        return true;  // If there are 2 or less elements, we can always make it non-decreasing by removing one
    }

    // Compute initial GCD sequence
    vector<int> b(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        b[i] = gcd(a[i], a[i + 1]);
    }

    // Check for non-decreasing sequence
    if (isNonDecreasing(b)) {
        return true;
    }

    // Try removing each element and check the GCD sequence
    for (int i = 0; i < n; ++i) {
        vector<int> modified_a = a;
        modified_a.erase(modified_a.begin() + i);

        vector<int> modified_b(modified_a.size() - 1);
        for (int j = 0; j < modified_a.size() - 1; ++j) {
            modified_b[j] = gcd(modified_a[j], modified_a[j + 1]);
        }

        if (isNonDecreasing(modified_b)) {
            return true;
        }
    }

    return false;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if (canMakeNonDecreasingByRemovingOne(a)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}