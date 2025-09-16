create table webrdtaf
(
wbrdgrid    varchar2(5),
wbrdprid    varchar2(8),
wbrdtmid    varchar2(3),
wbrdspar    varchar2(80),
lf          varchar2(1),
constraint webrdta1 primary key( 
wbrdgrid,
wbrdprid,
wbrdtmid)
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
create public synonym webrdtaf for webrdtaf;
create unique index webrdta2 on webrdtaf
(
wbrdprid,
wbrdtmid,
wbrdgrid
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
