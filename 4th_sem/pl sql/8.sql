DECLARE
table_n string(20);
column_n string(20);
ans string(100);
BEGIN
select avg(&column_n) into ans from &table_n;
DBMS_OUTPUT.PUT_LINE('Average is ' || ans);
END;
/