create table debtcraf
(
  dbtcdeb     varchar2(8) default ' ' not null,
  dbtcdln     varchar2(3) default ' ' not null,
  dbtcitm     varchar2(8) default ' ' not null,
  dbtcsdat    varchar2(8) default ' ' not null,
  dbtcdref    varchar2(50) default ' ' not null,
  dbtcoref    varchar2(50) default ' ' not null,
  dbtcqty     number(10,2) default 0 not null,
  dbtcpri     number(16,4) default 0 not null,
  dbtctot     number(14,2) default 0 not null,
  dbtctrt     number(6,2) default 0 not null,
  dbtctax     number(14,2) default 0 not null,
  dbtcur1     varchar2(25) default ' ' not null,
  dbtcur2     varchar2(25) default ' ' not null,
  dbtcud1     varchar2(8) default ' ' not null,
  dbtcud2     varchar2(8) default ' ' not null,
  dbtcuy1     varchar2(1) default ' ' not null,
  dbtcuy2     varchar2(1) default ' ' not null,
  dbtcuc1     varchar2(3) default ' ' not null,
  dbtcuc2     varchar2(3) default ' ' not null,
  dbtcuc3     varchar2(3) default ' ' not null,
  dbtcuc4     varchar2(3) default ' ' not null,
  dbtcgst     varchar2(6) default ' ' not null,
  dbtcspa     varchar2(14) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint debtcra1 primary key( 
dbtcdeb,
dbtcdln)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
