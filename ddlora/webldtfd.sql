create table webldtaf
(
wbldlkid    varchar2(8),
wbldpage    varchar2(3),
wblduqid    varchar2(3),
wbldcode    varchar2(10),
wblddesc    varchar2(50),
wbldtype    varchar2(1),
wbldlkpg    varchar2(3),
wbldactv    varchar2(1),
wbldspar    varchar2(40),
lf          varchar2(1),
constraint webldta1 primary key( 
wbldlkid,
wbldpage,
wblduqid)
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
create public synonym webldtaf for webldtaf;
create unique index webldta2 on webldtaf
(
wbldlkid,
wbldpage,
wblddesc,
wblduqid
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index webldta3 on webldtaf
(
wbldlkid,
wbldpage,
wbldcode,
wblduqid
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
