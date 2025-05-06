class Solution {
public:
    int passThePillow(int n, int time) {
    int position = 1;
    int direction = 1; 

    while (time > 0) {
        position = position + direction;

        if (position == n) {
            direction = -1;
        }

        else if (position == 1) {
            direction = 1;
        }

        time = time - 1;
    }

    return position;
    }
};