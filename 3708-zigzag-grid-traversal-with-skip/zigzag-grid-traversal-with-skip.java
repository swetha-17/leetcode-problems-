class Solution {
    public List<Integer> zigzagTraversal(int[][] grid) {
        List<Integer> result = new ArrayList<>();
        boolean skip = false;  

        for (int i = 0; i < grid.length; i++) {
            if (i % 2 == 0) {
                // Left to right
                for (int j = 0; j < grid[i].length; j++) {
                    if (!skip) {
                        result.add(grid[i][j]);
                    }
                    skip = !skip; // toggle skipping
                }
            } else {
                // Right to left
                for (int j = grid[i].length - 1; j >= 0; j--) {
                    if (!skip) {
                        result.add(grid[i][j]);
                    }
                    skip = !skip;
                }
            }
        }

        return result;
    }
}