class Solution {
public:
    int numberOfChild(int n, int k) {
        int max = n-1;
            int number = 0;
                bool isReverse = false;

                    while(k > 0){
                            k--;
                                    if(isReverse){
                                                number--;
                                                             if(number == 0){
                                                                            isReverse = false; 
                                                                                        }
                                                                                                }else{
                                                                                                            number++;
                                                                                                                        if(number == max){
                                                                                                                                       isReverse = true; 
                                                                                                                                                   }
                                                                                                                                                           }
                                                                                                                                                               }

                                                                                                                                                                   return number;
    }
};
