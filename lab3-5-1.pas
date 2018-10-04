program L351;

uses crt;

var a, b, c, x: real;

function sdiv(a,b: real): real;
begin
	if b = 0 then
	begin
	Writeln('division by zero');
	exit;
	end
	else
	sdiv := a/b;
end;

begin
  Readln(a, b, c, x);
  if (c < 0) and (b <> 0) then
	begin
	writeln(-a*x*x + 5);
	end
  else
    if (c > 0) and (a = 0) then
    	begin
    	writeln(sdiv((a + 4*x), (c*x)));
    	end
    else
    	writeln(1 + sdiv(x, c + 5));
end.
