create table watscuaf
(
wtscdate    varchar2(6),
wtscunit    varchar2(3),
wtscdoct    varchar2(6),
wtscprty    varchar2(3),
wtscsbeu    number(6,0),
wtscsbes    number(6,0),
wtscsseu    number(6,0),
wtscsues    number(6,0),
wtsclpun    number(6,0),
wtsclpsu    number(6,0),
wtscdelt    number(6,0),
wtscspar    varchar2(3),
lf          varchar2(1),
constraint watscua1 primary key( 
wtscdate,
wtscunit,
wtscdoct,
wtscprty)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace iba01ax 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym watscuaf for watscuaf;
