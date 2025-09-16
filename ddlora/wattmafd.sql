create table wattmaaf
(
wttmdate    varchar2(6),
wttmproc    varchar2(9),
wttmrng1    number(8,0),
wttmrng2    number(8,0),
wttmrng3    number(8,0),
wttmrng4    number(8,0),
wttmrng5    number(8,0),
wttmrng6    number(8,0),
wttmrng7    number(8,0),
wttmmean    number(4,0),
wttmmedn    number(4,0),
wttmmax     number(4,0),
wttmspar    varchar2(10),
lf          varchar2(1),
constraint wattmaa1 primary key( 
wttmdate,
wttmproc)
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
create public synonym wattmaaf for wattmaaf;
