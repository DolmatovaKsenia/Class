const
  size = 10;

var
  M, a1, previous: real;
  J: integer;
  A: array[1..size] of real;
  
begin
  a1:= 3;
  previous := a1;
  readln(M);
  for var i := 2 to 9999 do
  begin
    A[i] := a1 + 2 / previous;
    if abs(A[i] - previous) < M then
    begin
      J := i;
      break;
    end;
    previous := A[i];
  end;
    writeln(J)
    
end.