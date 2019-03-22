#include<unistd.c>
void producer()
{
	while(1)
	wait();

}
void conductor()
{
}
int main()
{
	for(int i=0;i<10;i++)
		if(fork()<=0)
			break;
		else
		{
			producer();
		}



}
