create table webpataf
(
wbptwuid    varchar2(10),
wbptlnum    varchar2(3),
wbpturno    varchar2(8),
wbptvnum    varchar2(8),
wbptdatc    varchar2(8),
wbpttimc    varchar2(5),
wbptrdat    varchar2(8),
wbptstat    varchar2(3),
wbptcom1    varchar2(60),
wbptcom2    varchar2(60),
wbptspar    varchar2(80),
lf          varchar2(1),
constraint webpata1 primary key( 
wbptwuid,
wbptlnum,
wbpturno)
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
create public synonym webpataf for webpataf;
