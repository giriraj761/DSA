DECLARE
    a number:=&a;
    squareof number;
    cubeof number;

BEGIN
    squareof:=a*a;
    cubeof:=a*a*a;
    DBMS_OUTPUT.PUT_LINE('SQUARE= '||squareof);
    DBMS_OUTPUT.PUT_LINE('CUBE= '||cubeof);
END;
/
