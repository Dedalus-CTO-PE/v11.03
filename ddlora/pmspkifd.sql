create table pmspkiaf
(
pmpkhcgc    varchar2(12),
pmpkkkwd    varchar2(15),
pmpkspar    varchar2(20),
lf          varchar2(1),
constraint pmspkia1 primary key( 
pmpkhcgc,
pmpkkkwd)
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
create public synonym pmspkiaf for pmspkiaf;
create unique index pmspkia2 on pmspkiaf
(
pmpkkkwd,
pmpkhcgc
)
  tablespace ibandx0x 
initrans 3 
storage ( 
  initial 16k 
); 
