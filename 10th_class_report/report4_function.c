int staticFunction (void){
    static int x=1;
    x++;
    return x;
}