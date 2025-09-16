create table pmsprdaf
(
pmprhosp    varchar2(3),
pmprsdat    varchar2(8),
pmpredat    varchar2(8),
pmprerrf    varchar2(1),
pmprldat    varchar2(8),
pmprspar    varchar2(42),
lf          varchar2(1),
constraint pmsprda1 primary key( 
pmprhosp)
)
tablespace ibandx0x 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace ibadat0x 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym pmsprdaf for pmsprdaf;
