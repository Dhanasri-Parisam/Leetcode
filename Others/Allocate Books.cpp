int countStudents(vector<int> &arr, int pages) {
        int n = arr.size();
        int students = 1; // Start with one student
        long long nextStudent = 0; // Pages currently allocated to a student

        for (int i = 0; i < n; i++) {
            if (nextStudent + arr[i] <= pages) {
                // Add pages to the current student
                nextStudent += arr[i];
            } else {
                // Assign current book to the next student
                nextStudent = arr[i];
                students++;
            }
        }
        return students;
    }

public:
    // Function to find the minimum number of maximum pages
    int findPages(vector<int> &arr, int k) {
        int n = arr.size();
        if (k > n) return -1; // More students than books is not possible

        int low = *max_element(arr.begin(), arr.end()); // Largest single book
        int high = accumulate(arr.begin(), arr.end(), 0); // Sum of all pages
        int result = -1; // To store the final result

        while (low <= high) {
            int mid = (low + high) / 2;
            int students = countStudents(arr, mid);

            if (students <= k) {
                // If it is feasible to allocate with 'mid' pages
                result = mid;
                high = mid - 1; // Try for a smaller maximum
            } else {
                // If more students are required, increase the limit
                low = mid + 1;
            }
        }
        return result;
    }
