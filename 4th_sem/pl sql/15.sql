DECLARE
    n number:=&n;
    m number:=n;
    rev number:=0;
    r number;

BEGIN
    while n>0
    loop
        r:=mod(n,10);
        rev:=(rev*10)+r;
        n:=trunc(n/10);
    end loop;
    
    if m=rev then
        dbms_output.put_line('number is palindrome');
    else
        dbms_output.put_line('number is not palindrome');
    end if;
END;
/