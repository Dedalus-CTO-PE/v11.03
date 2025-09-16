create table prsadfaf
(
prafdate    varchar2(8),
prafrefr    varchar2(2),
prafseps    number(6,0),
prafbday    number(6,0),
prafsame    number(6,0),
lf          varchar2(1),
constraint prsadfa1 primary key( 
prafdate,
prafrefr)
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
create public synonym prsadfaf for prsadfaf;
