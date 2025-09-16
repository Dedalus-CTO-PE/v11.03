create table watrtdaf
(
wtrturno    varchar2(8),
wtrtproc    varchar2(9),
wtrtpcnt    varchar2(2),
wtrtrefr    varchar2(5),
wtrttdes    varchar2(5),
wtrtspar    varchar2(20),
lf          varchar2(1),
constraint watrtda1 primary key( 
wtrturno,
wtrtproc,
wtrtpcnt)
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
create public synonym watrtdaf for watrtdaf;
