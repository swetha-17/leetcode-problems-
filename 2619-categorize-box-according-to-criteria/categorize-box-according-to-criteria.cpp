class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long volume = (long long)length * width * height;

    int isBulky = 0;
    int isHeavy = 0;

    if (length >= 10000 || width >= 10000 || height >= 10000 || volume >= 1000000000) {
        isBulky = 1;
    }

    if (mass >= 100) {
        isHeavy = 1;
    }

    if (isBulky && isHeavy) {
        return "Both";
    } else if (isBulky) {
        return "Bulky";
    } else if (isHeavy) {
        return "Heavy";
    } else {
        return "Neither";
    }
}
};