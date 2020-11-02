#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sec, h, m, s;
	printf("Enter time in seconds: ");// 7890
	scanf("%d", &sec);

	h = (sec/3600); // 7890/3600

	m = (sec -(3600*h))/60;// 7890-3600/60

	s = (sec -(3600*h)-(m*60)); // 7890-3600-60
	printf("7890 seconds = %d hours :%d minutes :%d seconds\n",h,m,s);
    return 0;
}
