Declare
    Age number:=&Age;

Begin 
    IF Age >= 18 THEN 
    dbms_output.Put_line( 'The user is eligible to cast vote'); 
    ELSE 
    dbms_output.Put_line( 'The user is not eligible to cast vote'); 
    END IF; 
END;
/