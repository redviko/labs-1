program L351;

uses crt;

var a, b, c, x: real;

begin
  Readln(a, b, c, x);
  if (c < 0) and (b <> 0) then
  begin
  writeln(-a*x*x + 5);
  end
  else
    if (c > 0) and (c = 0) then
    begin
    writeln((a + 4*x) / (c*x));
    end
    else
    writeln(1 + x/(c + 5));
    end.