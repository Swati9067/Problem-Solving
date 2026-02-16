/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int searchleft(int l, int h, MountainArray &marr, int t){
        while(l<=h){
            int mid = (l+h)/2;
            int val = marr.get(mid);              // cache
            if(val==t) return mid;
            else if(val>t){
                h = mid -1;
            }
            else l = mid +1;
        }
        return -1;
    }
    
    int searchright(int l, int h, MountainArray &marr, int t){
        while(l<=h){
            int mid = (l+h)/2;
            int val = marr.get(mid);              // cache
            if(val==t) return mid;

            // descending side
            else if(val>t){
                l = mid + 1;
            }
            else h = mid - 1;
        }
        return -1;
    }

    int findInMountainArray(int t, MountainArray &marr) {
        int len = marr.length();
        int h = len - 2;   // safer bounds for mid-1, mid+1
        int l = 1;
        int mid = 0;

        while(l<=h){
            mid = l + (h - l)/2;

            // cache all three once
            int left  = marr.get(mid-1);
            int cur   = marr.get(mid);
            int right = marr.get(mid+1);

            if(cur > left && cur > right){
                break;
            }
            else if(cur > left && cur < right){
                l = mid +1;
            }
            else h = mid -1;
        }
       
        int x = searchleft(0, mid, marr, t);
        if(x != -1) return x;

        if(marr.get(mid) == t) return mid;

        int y = searchright(mid+1, len -1, marr, t);
        if(y != -1) return y;

        return -1;
    }
};
