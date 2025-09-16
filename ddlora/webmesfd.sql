create table webmesaf
(
wbmsuser    varchar2(10),
wbmsmid     varchar2(3),
wbmsdate    varchar2(8),
wbmstime    varchar2(8),
wbmslin1    varchar2(50),
wbmslin2    varchar2(50),
wbmslin3    varchar2(50),
wbmslin4    varchar2(50),
wbmslin5    varchar2(50),
wbmsexpd    varchar2(8),
wbmsexpt    varchar2(8),
wbmsspar    varchar2(28),
lf          varchar2(1),
constraint webmesa1 primary key( 
wbmsuser,
wbmsmid)
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
create public synonym webmesaf for webmesaf;
