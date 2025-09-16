create table webpasaf
(
wbpauid     varchar2(10),
wbpapas1    varchar2(10),
wbpapas2    varchar2(10),
wbpapas3    varchar2(10),
wbpapas4    varchar2(10),
wbpapas5    varchar2(10),
wbpaspar    varchar2(80),
lf          varchar2(1),
constraint webpasa1 primary key( 
wbpauid)
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
create public synonym webpasaf for webpasaf;
