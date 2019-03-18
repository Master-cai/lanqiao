/*
标题：打印图形

如下的程序会在控制台绘制分形图（就是整体与局部自相似的图形）。

当n=1,2,3的时候，输出如下：
请仔细分析程序，并填写划线部分缺少的代码。

n=1时：
 o 
ooo
 o 

n=2时：
    o    
   ooo   
    o    
 o  o  o 
ooooooooo
 o  o  o 
    o    
   ooo   
    o    

n=3时：
             o             
            ooo            
             o             
          o  o  o          
         ooooooooo         
          o  o  o          
             o             
            ooo            
             o             
    o        o        o    
   ooo      ooo      ooo   
    o        o        o    
 o  o  o  o  o  o  o  o  o 
ooooooooooooooooooooooooooo
 o  o  o  o  o  o  o  o  o 
    o        o        o    
   ooo      ooo      ooo   
    o        o        o    
             o             
            ooo            
             o             
          o  o  o          
         ooooooooo         
          o  o  o          
             o             
            ooo            
             o             
*/
#include <stdio.h>
#include <stdlib.h>

void show(char* buf, int w){
	int i,j;
	for(i=0; i<w; i++){
		for(j=0; j<w; j++){
			printf("%c", buf[i*w+j]==0? ' ' : 'o');
		}
		printf("\n");
	}
}

void draw(char* buf, int w, int x, int y, int size){
	if(size==1){
		buf[y*w+x] = 1;
		return;
	}
	
	int n = size/3; //填空
	draw(buf, w, x, y, n);
	draw(buf, w, x-n, y ,n);
	draw(buf, w, x+n, y ,n);
	draw(buf, w, x, y-n ,n);
	draw(buf, w, x, y+n ,n);
}

int main()
{
	int N = 3;
	int t = 1;
	int i;
	for(i=0; i<N; i++) t *= 3;
	
	char* buf = (char*)malloc(t*t);
	for(i=0; i<t*t; i++) buf[i] = 0;
	
	draw(buf, t, t/2, t/2, t);
	show(buf, t);
	free(buf);
	
	return 0;
}

