template <bool... thisDigits>
int reversed_binary_value() {
    bool revbin[] = {thisDigits...};
    int decimal_num = 0;
    for(int i = 0; i < sizeof(revbin)/sizeof(*revbin); i++) {
        decimal_num += revbin[i] * (1 << i);
    }
    return decimal_num;
}
