program p25;
uses crt;

var x: real;

begin
    readln(x);
    writeln(x*x - sin(x) + cos(x));
end.
