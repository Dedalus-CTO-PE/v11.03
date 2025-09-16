create table pmshkiaf
(
pmhkhcpc    varchar2(10),
pmhkkkwd    varchar2(15),
pmhkspar    varchar2(10),
lf          varchar2(1),
constraint pmshkia1 primary key( 
pmhkhcpc,
pmhkkkwd)
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
create public synonym pmshkiaf for pmshkiaf;
create unique index pmshkia2 on pmshkiaf
(
pmhkkkwd,
pmhkhcpc
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
