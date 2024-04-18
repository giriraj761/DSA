DECLARE
	z  NUMBER;
    r1 NUMBER;
    r2 NUMBER;
    impart NUMBER;
    a NUMBER:=&a;
    b NUMBER:=&b;
    c NUMBER:=&c;
BEGIN
dbms_output.Put_line('THE EQUATION IS : '||a||'x^2 + '||b||'x +'||c);

    z:=(b*b)-(4*a*c);
    -- dbms_output.Put_line(z);

    IF z<0 THEN

    r1:=(((-1)*b)/(2*a));
    impart:= (abs(z)/(2*a));
    r2:=(((-1)*b)/(2*a));
    dbms_output.Put_line('ROOT_1: '||r1||' + '||impart||'i');
    dbms_output.Put_line('ROOT_2: '||r2||' - '||impart||'i');

	ELSE

    z:=sqrt(z);
    r1:=(((-1)*b)+z)/(2*a);
    r2:=(((-1)*b)-z)/(2*a);
    dbms_output.Put_line('the roots are : '||r1||' '||r2);

	END IF;
END;
/
