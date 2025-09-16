create table patsqlaf
(
ptsqprog    varchar2(8),
ptsqpath    varchar2(60),
ptsqspar    varchar2(30),
lf          varchar2(1),
constraint patsqla1 primary key( 
ptsqprog)
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
create public synonym patsqlaf for patsqlaf;
