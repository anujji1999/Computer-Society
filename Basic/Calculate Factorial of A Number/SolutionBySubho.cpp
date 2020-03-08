int factorialUsingRecursion(int number)
{
    
    if(number==0)
    {
        return 1;
    }
    
    return number*factorialUsingRecursion(number-1);
}
