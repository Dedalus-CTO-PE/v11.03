create table prifltrf
(
dprflnum    varchar2(3),
dprfllin    varchar2(3),
prfltext    varchar2(70),
prflvarb    number(1,0),
prflmbot    number(2,0),
prflmtop    number(2,0),
prflplen    number(3,0),
prflleft    number(2,0),
prlespar    varchar2(8),
lf          varchar2(1),
constraint prifltr1 primary key( 
dprflnum,
dprfllin)
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
create public synonym prifltrf for prifltrf;
create unique index prifltr2 on prifltrf
(
dprfllin,
dprflnum
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
