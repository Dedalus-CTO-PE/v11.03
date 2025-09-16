create table webmnaaf
(
wbmamenu    varchar2(8),
wbmadesc    varchar2(35),
wbmaipvt    varchar2(1),
wbmalser    varchar2(8),
wbmalopt    varchar2(2),
wbmalbsr    varchar2(3),
wbmauopt    varchar2(127),
wbmasurl    varchar2(127),
wbmamaxc    varchar2(50),
wbmamaxl    varchar2(50),
wbmaspar    varchar2(80),
lf          varchar2(1),
constraint webmnaa1 primary key( 
wbmamenu)
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
create public synonym webmnaaf for webmnaaf;
