/*
Author:XH
Deacription:���̨����һ����ά����song[5][100]�����5�׸�����Ϣ����ɵ����棬����5�׸���ѡ�񲥷š��Զ��岥�Ÿ����ĺ���play(int s[], int len)��
Input:
output: �������� 
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

