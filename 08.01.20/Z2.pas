// Дано целое число N (> 1). Найти наименьшее целое число K, при кото-
//ром выполняется неравенство 3^K > N.

var
  N, K, power3: integer;
  
begin
  readln(N);
  K := 1;
  power3 := 3;
  while power3 <= N do
  begin
   power3 := power3 * 3;
   K := K + 1;
  end;
  writeln(K)
   
   
    
end.