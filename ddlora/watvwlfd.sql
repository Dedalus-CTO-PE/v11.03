create table watvwlaf
(
wtvwcons    varchar2(6),
wtvwltyp    varchar2(3),
wtvwdesc    varchar2(40),
wtvwwtel    number(3,0),
wtvwwtdc    number(3,0),
wtvwstat    number(1,0),
wtvwtele    varchar2(20),
wtvwspar    varchar2(21),
lf          varchar2(1),
constraint watvwla1 primary key( 
wtvwcons,
wtvwltyp)
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
create public synonym watvwlaf for watvwlaf;
create unique index watvwla2 on watvwlaf
(
wtvwltyp,
wtvwcons
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
