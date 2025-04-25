class ProductOfNumbers {
    vector<int> prefixProducts;
    int lastIndOfZero = -1;
public:
    ProductOfNumbers() {
        prefixProducts.push_back(1);
    }
    
    void add(int num) {
        if(num==0) {
            lastIndOfZero = prefixProducts.size();
            prefixProducts.push_back(1);
            return;
        }

        prefixProducts.push_back(prefixProducts.back()*num);
    }
    
    int getProduct(int k) {
        int ind = prefixProducts.size()-1-k;
        if(ind < lastIndOfZero) {
            return 0;
        }
        return prefixProducts.back()/prefixProducts[ind];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */