create table watpacaf
(
wtpcurno    varchar2(8),
wtpcpcod    varchar2(9),
wtpcpcnt    varchar2(2),
wtpcline    varchar2(2),
wtpccomm    varchar2(70),
wtpcspar    varchar2(28),
lf          varchar2(1),
constraint watpaca1 primary key( 
wtpcurno,
wtpcpcod,
wtpcpcnt,
wtpcline)
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
create public synonym watpacaf for watpacaf;
