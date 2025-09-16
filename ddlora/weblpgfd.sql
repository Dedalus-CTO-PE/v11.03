create table weblpgaf
(
wblplkid    varchar2(8),
wblppgno    varchar2(3),
wblptitl    varchar2(50),
wblphead    varchar2(50),
wblpclor    varchar2(6),
wblpscod    varchar2(1),
wblppseq    varchar2(1),
wblpspar    varchar2(30),
lf          varchar2(1),
constraint weblpga1 primary key( 
wblplkid,
wblppgno)
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
create public synonym weblpgaf for weblpgaf;
