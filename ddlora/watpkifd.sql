create table watpkiaf
(
wtpkcode    varchar2(9),
wtpkkkwd    varchar2(50),
wtpkspar    varchar2(50),
lf          varchar2(1),
constraint watpkia1 primary key( 
wtpkcode,
wtpkkkwd)
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
create public synonym watpkiaf for watpkiaf;
create unique index watpkia2 on watpkiaf
(
wtpkkkwd,
wtpkcode
)
  tablespace ibandx0x 
initrans 3 
storage ( 
  initial 16k 
); 
