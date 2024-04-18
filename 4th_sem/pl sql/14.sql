DECLARE   
    n number:=12345;  
    temp_sum number:=0;  
    r number;  
    
BEGIN 
    WHILE n <> 0 LOOP  
        r := MOD(n, 10);  
        temp_sum := temp_sum + r;  
        n := Trunc(n / 10);  
    END LOOP;  
    dbms_output.Put_line('sum of digits = ' || temp_sum);  
END;
/