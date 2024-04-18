DECLARE
	a NUMBER :=&a;
	b NUMBER :=&b;
	c NUMBER :=&b;
	d NUMBER :=&d;

BEGIN
	IF a < b AND a < c AND a < d THEN
	dbms_output.Put_line('Smallest number is '||a);
	ELSIF b < a AND b < c AND b < d THEN
	dbms_output.Put_line('Smallest number is '||b);
	ELSIF c < a AND c < b AND c < d THEN
	dbms_output.Put_line('Smallest number is '||c);
    ELSE
    dbms_output.Put_line('Smallest number is '||d);
	END IF;
END;
/