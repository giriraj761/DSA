DECLARE
	a NUMBER:=&a;

BEGIN
	IF mod(a,100)=0 
    THEN
	dbms_output.Put_line('it is a multiple');
	ELSE
	dbms_output.Put_line('its not a multiple');
	END IF;
END;
/
