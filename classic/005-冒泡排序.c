// 输入n个数，对这n个数从大到小进行排序
#include <stdio.h>
int main(void)
{
    int n;    //输入n个数
    int a;
    int i,j;
    int max;
    scanf("%d",&n);
    char num[n];
    for(a=0;a<n;a++){
        scanf("%d",&num[a]);    
    }
    for(i=0;i<n-1;i++){          //n个数需要比对n-1次
        for(j=i+1;j<n;j++){      
            if(num[i]<num[j]){     //如果后一项比前一项大，则交换位置
                max=num[j];
                num[j]=num[i];
		num[i]=max;
	    }
	}
    }
    for(a=0;a<n;a++){
        printf("%d",num[a]);
    }
    return 0;
}
