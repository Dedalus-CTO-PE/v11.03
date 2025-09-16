create table patvchaf
(
ptvccard    varchar2(20),
ptvcurno    varchar2(8),
ptvcdate    varchar2(8),
ptvctime    varchar2(8),
ptvcport    varchar2(2),
ptvchosp    varchar2(2),
ptvcoper    varchar2(4),
ptvcdchg    number(4,0),
ptvcvchg    number(4,0),
ptvcspar    varchar2(20),
lf          varchar2(1),
constraint patvcha1 primary key( 
ptvccard,
ptvcurno,
ptvcdate,
ptvctime,
ptvcport,
ptvchosp)
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
create public synonym patvchaf for patvchaf;
