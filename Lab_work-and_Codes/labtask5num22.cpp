Infix Expression: 2*6/(4-1)+5*3
Add ')' to the end of Infix;    Push( '(' );
do{
  OP = next symbol from left of Infix;
  if OP is OPERAND then EnQueue( OP );
  else if OP is OPERATOR then{
    if OP = '(' then Push( OP );
    else if OP = ')'  then{
        while TopElement() != '(' do{
	Enqueue(TopElement());
	Pop();
        }
	Pop();
    }else{
    while Precedence( OP ) <= Precedence( TopElement() ) do{
	Enqueue(TopElement());
	Pop();
    }
    Push( OP );
    }
}while !IsEmpty();
Postfix Expression: 26*41-/53*+
EnQueue( ')' );
while ( FrontElement() != ')' ) do{
    OP = FrontElement();
    DeQueue();
    if OP is OPERAND then Push( OP );
    else if OP is OPERATOR then{
	OperandRight = TopElement();
	Pop();
	OperandLeft = TopElement();
	Pop();
	x = Evaluate(OperandLeft, OP, OperandRight);
	Push(x);
    }
}
Result = TopElement();
Pop();
cout << Result;

