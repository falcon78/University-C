int hcm(int a,int b){
    int tmp;
    int r;
    if (a<b){
        tmp = a;
        a = b;
        b = tmp;
    }

    r = a%b;
    while(r!=0){
        a = b;
        b = r;
        r = a%b;
    }
    
    return b;
}