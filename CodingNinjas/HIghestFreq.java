// Highest / Lowest Frequency Elements of an array

import java.util.HashMap;

class Solution {
    public static int[] getFrequencies(int[] v) {
        HashMap<Integer, Integer> hMap = new HashMap<>();
        int n = v.length;
        for (int i = 0; i < n; i++) {
            if (hMap.containsKey(v[i])) {
                hMap.put(v[i], hMap.get(v[i]) + 1);
            } else {
                hMap.put(v[i], 1);
            }
        }
        int maxFreq = 0, minFreq = n;
        int maxEle = 0, minEle = 0;
        // Traverse through map and find the elements
        for (HashMap.Entry<Integer, Integer> entry : hMap.entrySet()) {
            int count = entry.getValue();
            int element = entry.getKey();

            if (count > maxFreq || (count == maxFreq && element < maxEle)) {
                maxEle = element;
                maxFreq = count;
            }
            if (count < minFreq || (count == minFreq && element < minEle)) {
                minEle = element;
                minFreq = count;
            }
        }
        int[] arr = { maxEle, minEle };
        return arr;
    }
}