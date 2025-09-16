create table pritestf
(
prtecode    varchar2(9),
prtedate    varchar2(8),
prtedesc    varchar2(30),
prteitmn    varchar2(9),
prtesubn    varchar2(3),
prteaman    varchar2(9),
prtemser    varchar2(5),
prtetesn    number(3,0),
prteabrv    varchar2(4),
lf          varchar2(1),
constraint pritest1 primary key( 
prtecode,
prtedate)
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
create public synonym pritestf for pritestf;
create unique index pritest2 on pritestf
(
prtemser,
prtecode,
prtedate
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index pritest3 on pritestf
(
prtedesc,
prtecode,
prtedate
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
