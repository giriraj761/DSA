DECLARE
	a NUMBER:=&a;
	b NUMBER:=&b;
	c NUMBER:=&c;

BEGIN
	IF a > b AND a > c THEN
	dbms_output.Put_line('Largest number is '||a);
	ELSIF b > a AND b > c THEN
	dbms_output.Put_line('Largest number is '||b);
	ELSE
	dbms_output.Put_line('Largest number is '||c);
	END IF;
END;
/
