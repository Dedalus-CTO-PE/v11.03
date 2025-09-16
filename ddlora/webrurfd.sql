create table webruraf
(
wbruusid    varchar2(10),
wbrugrid    varchar2(5),
wbruspar    varchar2(80),
lf          varchar2(1),
constraint webrura1 primary key( 
wbruusid,
wbrugrid)
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
create public synonym webruraf for webruraf;
create unique index webrura2 on webruraf
(
wbrugrid,
wbruusid
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
