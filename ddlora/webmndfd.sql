create table webmndaf
(
wbmdusid    varchar2(10),
wbmdmenu    varchar2(8),
wbmdactv    varchar2(1),
wbmdspar    varchar2(80),
lf          varchar2(1),
constraint webmnda1 primary key( 
wbmdusid,
wbmdmenu)
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
create public synonym webmndaf for webmndaf;
