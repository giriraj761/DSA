DECLARE
    n number:=&n;
    i number:=2;
    flag number:=1;
 
BEGIN
    for i in 2..n/2
    
    loop
    if mod(n,i)=0
    then
    flag:=0;
    exit;
    end if;
    end loop;
 
    if flag=1
    then
    dbms_output.put_line('prime');
    else
    dbms_output.put_line('not prime');
    end if;
END;
/