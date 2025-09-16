create table rcpchqaf
(
chqrecpt    varchar2(12),
chqdate     varchar2(8),
chqcashr    varchar2(6),
chqdraw     varchar2(20),
chqbank     varchar2(30),
chqbrnch    varchar2(30),
chqnum      varchar2(12),
dchqamnt    number(14,2),
chqstat1    number(1,0),
chqstat2    number(1,0),
lf          varchar2(1),
constraint rcpchqa1 primary key( 
chqrecpt,
chqnum)
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
create public synonym rcpchqaf for rcpchqaf;
