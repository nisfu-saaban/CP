Difference(vector<int> elm) : elements(elm) {}
    void computeDifference(){
        sort(elements.begin(), elements.end(), greater<int>());
        maximumDifference = elements.at(0) - elements.at(elements.size() - 1);
    }
