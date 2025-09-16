create table weblabaf
(
wblbsyst    varchar2(1),
wblbnuml    varchar2(3),
wblbdeft    varchar2(1),
wblbspar    varchar2(30),
lf          varchar2(1),
constraint weblaba1 primary key( 
wblbsyst,
wblbnuml)
)
tablespace ibandx0x 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace ibadat0x 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym weblabaf for weblabaf;
