create table websteaf
(
wbstuid     varchar2(10),
wbstprg     varchar2(8),
wbstlev     number(2,0),
wbstur1     varchar2(30),
wbstur2     varchar2(30),
wbstud1     varchar2(8),
wbstud2     varchar2(8),
wbstuy1     varchar2(1),
wbstuy2     varchar2(1),
wbstspa     varchar2(20),
lf          varchar2(1),
constraint webstea1 primary key( 
wbstuid,
wbstprg)
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
create public synonym websteaf for websteaf;
