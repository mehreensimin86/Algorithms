Algorithm: Quick Sort

Step 1: Start.

Step 2: Select the first element as the pivot.

Step 3: Set two pointers:
        s = start
        e = end

Step 4: Move s to the right while arr[s] <= pivot.

Step 5: Move e to the left while arr[e] > pivot.

Step 6: If s < e, swap arr[s] and arr[e].

Step 7: Repeat Steps 4–6 until s >= e.

Step 8: Swap the pivot with arr[e].
        Now the pivot is in its correct position.

Step 9: Apply Quick Sort recursively
        to the left sub-array.

Step 10: Apply Quick Sort recursively
         to the right sub-array.

Step 11: Stop when s >= e.

Step 12: End.
