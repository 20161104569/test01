//
//  main.c
//  test01
//
//  Created by 20161104569 on 17/6/19.
//  Copyright © 2017年 20161104569. All rights reserved.
//

#include <stdio.h>

int main()
{
    int i,sum;
    sum=0;
    i=1;
    do
    {
        sum=sum+i;
        i=i+1;
    }while(i<=100);
    printf("1+2+3+....+100=%d",sum);
    return 0;
}
    
