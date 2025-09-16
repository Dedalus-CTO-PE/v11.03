create table debtspaf
(
  dbtsdeb     varchar2(8) default ' ' not null,
  dbtsdty     varchar2(1) default ' ' not null,
  dbtsdoc     varchar2(12) default ' ' not null,
  dbtsddat    varchar2(8) default ' ' not null,
  dbtsspa     varchar2(18) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint debtspa1 primary key( 
dbtsdeb,
dbtsdty,
dbtsdoc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index debtspa2 on debtspaf
(
dbtsdeb,
dbtsddat,
dbtsdty,
dbtsdoc
)
  tablespace pas_indx; 
