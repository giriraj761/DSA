DECLARE
    n number:=&n;
    i number;
 
BEGIN
    for i in 1..10
    loop
    dbms_output.put_line(n||' x '||i||' = '||n*i);
    end loop;
END;
/