class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        // uint32_t reversed=0;
        // for(int i=0;i<32;i++){
        //     reversed|=((n>>i)&1)<<(31-i);
        // }
        // return reversed;
        for(int i=0;i<16;i++){
            uint32_t lft=(n>>(31-i)&1);
            uint32_t ryt=(n>>i)&1;
            if(lft!=ryt){
                n ^= (1 << (31 - i));
            
            n ^= (1 << i);
            }
        }
        return n;
    }
};