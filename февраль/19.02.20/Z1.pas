const
  size = 10;

var
  M: real;
  J: integer;
  A: array[1..size] of real;
  
begin
  A[1] := 3;
  readln(M);
  for var i := 2 to size do
  begin
    A[i] := A[1] + 2 / (A[i] - 1);
    if abs(A[i] - A[i - 1]) < M then
      J := i;
    break;
  end;
    writeln(J)
    
end.