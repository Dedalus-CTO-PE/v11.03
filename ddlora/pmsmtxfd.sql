create table pmsmtxaf
(
pmmturno    varchar2(8),
pmmtnote    varchar2(6),
pmmtuniq    varchar2(3),
pmmtcmnt    varchar2(70),
pmmtspar    varchar2(30),
lf          varchar2(1),
constraint pmsmtxa1 primary key( 
pmmturno,
pmmtnote,
pmmtuniq)
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
create public synonym pmsmtxaf for pmsmtxaf;
