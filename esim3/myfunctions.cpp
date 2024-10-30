
int factorial(int n)
{
    if(n<0){
        return -1;
    }
    else{
        int result=1;
        for(int row=1; row<=n; row++){
            result= row*result;
        }
        return result;
    }
}
