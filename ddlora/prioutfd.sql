create table prioutaf
(
protsite    varchar2(6),
protctyp    varchar2(6),
protclid    varchar2(6),
protmedp    varchar2(6),
lf          varchar2(1),
constraint priouta1 primary key( 
protsite,
protctyp,
protclid)
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
create public synonym prioutaf for prioutaf;
