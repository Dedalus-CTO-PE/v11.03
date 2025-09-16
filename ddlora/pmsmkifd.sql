create table pmsmkiaf
(
pmmkmchr    varchar2(9),
pmmkkkwd    varchar2(15),
pmmkspar    varchar2(10),
lf          varchar2(1),
constraint pmsmkia1 primary key( 
pmmkmchr,
pmmkkkwd)
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
create public synonym pmsmkiaf for pmsmkiaf;
create unique index pmsmkia2 on pmsmkiaf
(
pmmkkkwd,
pmmkmchr
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
