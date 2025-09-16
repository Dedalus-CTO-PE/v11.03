create table weblidaf
(
wblilkid    varchar2(8),
wblidesc    varchar2(50),
wblispar    varchar2(30),
lf          varchar2(1),
constraint weblida1 primary key( 
wblilkid)
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
create public synonym weblidaf for weblidaf;
