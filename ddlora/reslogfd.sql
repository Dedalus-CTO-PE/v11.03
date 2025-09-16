create table reslogaf
(
relguid     varchar2(10),
relgdte     varchar2(8),
relgtme     varchar2(5),
relgpco     varchar2(3),
relgrun     varchar2(4),
relgcmp     varchar2(1),
relgexp     number(6,0),
relgrpr     number(6,0),
relgerr     number(6,0),
relginf     varchar2(50),
relgmer     varchar2(20),
relgmid     number(8,0),
relgspa     varchar2(20),
lf          varchar2(1),
constraint resloga1 primary key( 
relguid)
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
create public synonym reslogaf for reslogaf;
create unique index resloga2 on reslogaf
(
relgdte,
relgtme,
relguid
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
