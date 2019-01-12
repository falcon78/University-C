int isPrime(int num){
    int i,calculation,result;
    for (i=2;i<num;i++){
        calculation = num%i;
        if (calculation == 0){
            result = 0;
            break;
        }
        else
            result = 1;
    }
    return result;

}