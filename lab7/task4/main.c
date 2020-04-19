int main() {
   int a = 13, b = 5, c;
   if(a>6){
       b = 15;
   }
//JYM: loop termination condition is not corect
   while(a<=4){
       b= b+c;
       //JYM: wrong interpretion of assignee.
       c++;
   }
}
