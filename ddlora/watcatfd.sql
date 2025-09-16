create table watcataf
(
wtcaedat    varchar2(8),
wtcaurno    varchar2(8),
wtcaproc    varchar2(9),
dwtcapcn    varchar2(2),
wtcacatf    varchar2(2),
wtcacodf    varchar2(3),
wtcacodt    varchar2(3),
wtcaadte    varchar2(8),
wtcaatim    varchar2(5),
wtcawebi    varchar2(10),
wtcaspar    varchar2(1),
lf          varchar2(1),
constraint watcata1 primary key( 
wtcaedat,
wtcacatf,
wtcaurno,
wtcaproc,
dwtcapcn)
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
create public synonym watcataf for watcataf;
create unique index watcata2 on watcataf
(
wtcaurno,
wtcaproc,
dwtcapcn,
wtcacatf,
wtcaedat
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
