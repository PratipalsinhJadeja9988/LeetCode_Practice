class Solution {
    /**
     * Calculates odd numbers in range [low, high] in O(1) Time.
     * 
     * @param low  lower bound of the range (inclusive)
     * @param high upper bound of the range (inclusive)
     * @return count of odd numbers
     */
    public int countOdds(int low, int high) {
        return (high + 1) / 2 - low / 2;
    }
}