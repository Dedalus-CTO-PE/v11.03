create table priauiaf
(
praidebt    varchar2(8),
dpraiscn    varchar2(2),
praiinvn    varchar2(8),
praiidte    varchar2(8),
praiddte    varchar2(8),
praioper    varchar2(4),
praiport    number(2,0),
praiamnt    number(10,2),
praispar    varchar2(50),
lf          varchar2(1),
constraint priauia1 primary key( 
praidebt,
dpraiscn,
praiinvn)
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
create public synonym priauiaf for priauiaf;
