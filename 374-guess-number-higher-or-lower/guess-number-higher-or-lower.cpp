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
        int i=1;
        guess(i);
        if(guess(i)==0) return i;
        while(guess(i)!=0)
        {
            if(guess(i)==-1) i--;
            if(guess(i)==1) i++;
        }
        return i;
    }
};