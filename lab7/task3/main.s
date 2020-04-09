main:
  pushl %ebp -------------->moving %ebp to the beggining of the stack frame.
  movl %esp,%ebp----------->moving %

  subl $12,%esp------------>Allocates space for 3 ints(a,b,c)
  pushl %ebx-------------->Calling a preserved register
  pushl %esi--------------> Calling a scratch register
  movl $13,-4(%ebp)--------> Assigning value of 13 to the location -4(%ebp)
  movl $5,-8(%ebp)--------> Assigning value of 5 to the location -8(%ebp), which is next location
  movl -4(%ebp),%eax-------> Storing -4(%ebp)(is 13) at the scratch %eax register.
  cltd---> Converting signed long to signed double long
  idivl -8(%ebp)  -------> stores b 
  movl %edx,%esi
  movl %eax,%ebx
  movl -8(%ebp),%ebx
  subl %esi,%ebx
  movl -4(%ebp),%eax
  imull %ebx,%eax
  movl %eax,-12(%ebp)
  leal -20(%ebp),%esp
  popl %esi
  popl %ebx

  leave
  ret
