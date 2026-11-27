class Solution {
public:
    double findMedianSortedArrays(vector<int>& A,
                                  vector<int>& B) {
        if (A.size() > B.size())
            return findMedianSortedArrays(B, A);

        int m = A.size();
        int n = B.size();

        int half = (m + n + 1) / 2;

        int l = 0;
        int h = m;

        while (l <= h) {
            int i = l + (h - l) / 2;
            int j = half - i;

            int Aleft  = (i == 0) ? INT_MIN : A[i-1];
            int Aright = (i == m) ? INT_MAX : A[i];

            int Bleft  = (j == 0) ? INT_MIN : B[j-1];
            int Bright = (j == n) ? INT_MAX : B[j];

            if (Aleft <= Bright && Bleft <= Aright) {
                if ((m + n) % 2 == 1)
                    return max(Aleft, Bleft);

                return ((double)max(Aleft, Bleft) +
                        min(Aright, Bright)) / 2.0;
            }
            else if (Aleft > Bright) {
                h = i - 1;
            }
            else {
                l = i + 1;
            }
        }

        return 0.0;
    }
};