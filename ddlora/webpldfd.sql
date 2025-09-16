create table webpldaf
(
wbpdwuid    varchar2(10),
wbpdlnum    varchar2(3),
wbpddesc    varchar2(30),
wbpdbspg    varchar2(3),
wbpdspar    varchar2(80),
lf          varchar2(1),
constraint webplda1 primary key( 
wbpdwuid,
wbpdlnum)
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
create public synonym webpldaf for webpldaf;
