create table patyears
(
dfstyear    varchar2(4),
fstday      number(1,0),
fstspar     varchar2(20),
lf          varchar2(1),
constraint patyear1 primary key( 
dfstyear)
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
create public synonym patyears for patyears;
