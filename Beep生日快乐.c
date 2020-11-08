/*
Author:XH
Deacription:点歌台：用一个二维数组song[5][100]，存放5首歌曲信息，完成点歌界面，可在5首歌里选择播放。自定义播放歌曲的函数play(int s[], int len)。
Input:
output: 歌曲播放 
*/
#include <stdio.h>
#include <windows.h>
void play()
{
	while(1){
	    Beep(523, 200);
	    Beep(523, 200);
	    Beep(578, 400);
	    Beep(523, 400);
	    Beep(698, 400);
	    Beep(659, 800);
	
	    Beep(523, 200);
	    Beep(523, 200);
	    Beep(578, 400);
	    Beep(523, 400);
	    Beep(784, 400);
	    Beep(698, 800);
	
	    Beep(523, 200);
	    Beep(523, 200);
	    Beep(1046, 400);
	    Beep(880, 400);
	    Beep(698, 400);
	
	    Beep(659, 400);
	    Beep(578, 400);
	
	    Beep(932, 200);
	    Beep(932, 200);
	    Beep(880, 400);
	    Beep(698, 400);
	    Beep(784, 400);
	    Beep(698, 800);
    }
}
int main(){
	play();
}

