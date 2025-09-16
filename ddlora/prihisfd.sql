create table prithisf
(
prthdebt    varchar2(8),
dprthscn    varchar2(2),
prthdate    varchar2(8),
prthtime    varchar2(5),
dprthflg    varchar2(2),
prthitem    varchar2(9),
prthsubn    varchar2(3),
prthnumb    number(4,0),
prthspar    varchar2(9),
lf          varchar2(1),
constraint prithis1 primary key( 
prthdebt,
dprthscn,
prthdate,
prthtime,
dprthflg,
prthitem,
prthsubn)
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
create public synonym prithisf for prithisf;
