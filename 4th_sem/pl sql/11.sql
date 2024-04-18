DECLARE 
   Test_String string(100) := 'ANURAG pandey';
   
BEGIN 
   dbms_output.put_line(UPPER(Test_String)); 
   dbms_output.put_line(LOWER(Test_String)); 
END;
/