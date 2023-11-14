#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    std::string macAddressA = macAddress.substr(0,2);
    std::string hexadecimal_letters[6]={"A","B","C","D","E","F"};
    std::string hexadecimal_integer[6]={"10","11","12","13","14","15"};
    std::string num;
    std::string result;
    int temp=0;

    for (int cout=1; cout != -1; count--){
        num=macAddressA[cout];
        if(int(num[0])>=65 & int(num[0]<=70)){
            for (int i=0;i<7;i++){
                if(hexadecimal_letters[i]==num){
                    num=hexadecimal_integer[i];
                    break;
                }
            }
        }
        temp=temp+(std::stoi(num))*pow(16,2-count-1);
    }
    if(temp==255){
        result="broadcast";
    } else{
        if(temp%2 ==1){
            result="multicast";

        } else{
            result="unicast";
        }
    }


    // make use of control flow statements
    // return result;
}
