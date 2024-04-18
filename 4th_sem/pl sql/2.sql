declare 
  
    a     NUMBER := &a; 
    b     NUMBER := &b; 
    c     NUMBER := &c; 
    d     NUMBER := &d; 
    e     NUMBER := &e; 
    su  NUMBER ; 
    av   FLOAT ; 

begin 
 
    su := a + b + c + d + e; 
    av := su / 5; 

    dbms_output.Put_line('Sum = '|| su) ; 

    dbms_output.Put_line('Average = '|| av) ; 
end; 
/