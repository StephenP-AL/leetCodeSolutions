/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low = 1;
        int hi = 2147483647;
        
        cout << n << "|" << guess(n) << endl;
        int a = 2;
        while (a !=0){
            a = guess(n);
            cout << n << "|" << a << "|" << low << "|" << hi << endl;
            if(a == -1){
                hi = n;
                n = ((hi - low) / 2) + low;
            } 
            else if(a == 1){
                low = n;
                n = ((hi - low) / 2) + low;
            }
            else if(a == 0){
                return n;
            }
        }
        return -1;
    }
};
