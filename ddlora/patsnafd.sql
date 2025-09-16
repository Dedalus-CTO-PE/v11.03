create table patsnaaf
(
ptsnurno    varchar2(8),
ptsnyear    varchar2(4),
ptsnamnt    number(6,2),
ptsnspar    varchar2(30),
lf          varchar2(1),
constraint patsnaa1 primary key( 
ptsnurno,
ptsnyear)
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
create public synonym patsnaaf for patsnaaf;
