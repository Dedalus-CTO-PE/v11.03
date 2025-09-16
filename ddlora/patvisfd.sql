create table patvisaf
(
pviurno     varchar2(8),
pvidate     varchar2(8),
dpvibill    varchar2(8),
pvitype     number(1,0),
pvidoct     varchar2(6),
pvistat     number(1,0),
pvitran     number(6,0),
pvilock     varchar2(2),
pvisite     varchar2(6),
pviresi     varchar2(3),
pviunqe     varchar2(1),
pvisyst     varchar2(2),
ptvitype    varchar2(2),
pvispar     varchar2(9),
lf          varchar2(1),
constraint patvisa1 primary key( 
dpvibill)
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
create public synonym patvisaf for patvisaf;
create unique index patvisa2 on patvisaf
(
pviurno,
pvidate,
dpvibill
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index patvisa3 on patvisaf
(
pvidoct,
pvidate,
dpvibill
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index patvisa4 on patvisaf
(
pviurno,
ptvitype,
pvidate,
dpvibill
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
