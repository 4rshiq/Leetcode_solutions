int reverse(int x){
    long a=0;
    while(x!=0)
    {
        a += x%10;
        a*=10;
        x/=10;
    }
    a/=10;
    if(a>=-2147483648 && a<=2147483647 )
    return (int)a;
    return 0;
}