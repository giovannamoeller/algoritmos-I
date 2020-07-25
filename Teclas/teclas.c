#define esc 27
int main(){
	char t;
	do{
		t = getch();
		if (t <= 0){
		  t = getch();
		  printf ("0 %c %d\n",t,t);
        }
        else
          printf ("%c %d\n",t,t);
	} while (t != esc);
}
