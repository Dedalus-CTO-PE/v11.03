create table depcataf
(
  dpcpatca    varchar2(3) default ' ' not null,
  dpcdesc     varchar2(30) default ' ' not null,
  dpclval     number(4,0) default 0 not null,
  dpchval     number(4,0) default 0 not null,
  dpcavrg     number(4,0) default 0 not null,
  dpctspre    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint depcata1 primary key( 
dpcpatca)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
