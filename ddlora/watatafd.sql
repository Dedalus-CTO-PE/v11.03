create table watataaf
(
wtatdate    varchar2(6),
wtatdoct    varchar2(6),
wtatunit    varchar2(3),
wtatproc    varchar2(9),
wtatrng1    number(8,0),
wtatrng2    number(8,0),
wtatrng3    number(8,0),
wtatrng4    number(8,0),
wtatrng5    number(8,0),
wtatrng6    number(8,0),
wtatrng7    number(8,0),
wtatmean    number(4,0),
wtatmax     number(4,0),
wtatwith    number(8,0),
wtatodue    number(8,0),
wtathosp    number(8,0),
wtatpat     number(8,0),
wtatoth     number(8,0),
wtatspar    varchar2(19),
lf          varchar2(1),
constraint watataa1 primary key( 
wtatdate,
wtatproc,
wtatdoct,
wtatunit)
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
create public synonym watataaf for watataaf;
create unique index watataa2 on watataaf
(
wtatdate,
wtatdoct,
wtatproc,
wtatunit
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index watataa3 on watataaf
(
wtatdate,
wtatunit,
wtatproc,
wtatdoct
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
