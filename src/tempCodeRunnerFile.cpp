    int init= 2;
    int inc = 3;
    for(auto i = 2 ; i <= n ;inc += i-1,i++)
    {
        init += inc;
    }
    return init;