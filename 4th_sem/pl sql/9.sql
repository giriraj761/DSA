DECLARE
    a number:=&a;
    b number:=&b;
    mul  number;
    
BEGIN
    mul:=a*b;
    DBMS_OUTPUT.PUT_LINE('MULTIPLY= '||mul);
END;
/