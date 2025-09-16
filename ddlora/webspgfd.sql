create table webspgaf
(
wbspprg     varchar2(8),
wbspnam     varchar2(40),
wbspfifo    varchar2(40),
wbspoutd    varchar2(40),
wbspdeft    varchar2(40),
wbspur1     varchar2(30),
wbspur2     varchar2(30),
wbspud1     varchar2(8),
wbspud2     varchar2(8),
wbspuy1     varchar2(1),
wbspuy2     varchar2(1),
wbspspa     varchar2(20),
lf          varchar2(1),
constraint webspga1 primary key( 
wbspprg)
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
create public synonym webspgaf for webspgaf;
