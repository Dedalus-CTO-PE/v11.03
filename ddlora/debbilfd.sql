create table debbilaf
(
  dbbideb     varchar2(8) default ' ' not null,
  dbbiuni     varchar2(6) default ' ' not null,
  dbbista     varchar2(1) default ' ' not null,
  dbbidat     varchar2(8) default ' ' not null,
  dbbitim     varchar2(6) default ' ' not null,
  dbbiuid     varchar2(4) default ' ' not null,
  dbbiitm     varchar2(8) default ' ' not null,
  dbbisdat    varchar2(8) default ' ' not null,
  dbbidref    varchar2(50) default ' ' not null,
  dbbioref    varchar2(50) default ' ' not null,
  dbbiqty     number(10,2) default 0 not null,
  dbbipri     number(16,4) default 0 not null,
  dbbitot     number(14,2) default 0 not null,
  dbbitrt     number(6,2) default 0 not null,
  dbbitax     number(14,2) default 0 not null,
  dbbiur1     varchar2(25) default ' ' not null,
  dbbiur2     varchar2(25) default ' ' not null,
  dbbiud1     varchar2(8) default ' ' not null,
  dbbiud2     varchar2(8) default ' ' not null,
  dbbiuy1     varchar2(1) default ' ' not null,
  dbbiuy2     varchar2(1) default ' ' not null,
  dbbiuc1     varchar2(3) default ' ' not null,
  dbbiuc2     varchar2(3) default ' ' not null,
  dbbiuc3     varchar2(3) default ' ' not null,
  dbbiuc4     varchar2(3) default ' ' not null,
  dbbigst     varchar2(6) default ' ' not null,
  dbbispa     varchar2(14) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint debbila1 primary key( 
dbbideb,
dbbiuni)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index debbila2 on debbilaf
(
dbbideb,
dbbista,
dbbiuni
)
  tablespace pas_indx; 
