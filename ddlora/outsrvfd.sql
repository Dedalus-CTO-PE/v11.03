create table outsrvaf
(
  otsrsite    varchar2(6) default ' ' not null,
  otsrclin    varchar2(6) default ' ' not null,
  otsrsdat    varchar2(8) default ' ' not null,
  otsrstim    varchar2(5) default ' ' not null,
  otsrslot    varchar2(3) default ' ' not null,
  otsredat    varchar2(8) default ' ' not null,
  otsretim    varchar2(5) default ' ' not null,
  otsrwebu    varchar2(10) default ' ' not null,
  otsrrdat    varchar2(8) default ' ' not null,
  otsrrtim    varchar2(5) default ' ' not null,
  otsrspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outsrva1 primary key( 
otsrsite,
otsrclin,
otsrsdat,
otsrstim,
otsrslot)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outsrva2 on outsrvaf
(
otsredat,
otsretim,
otsrsite,
otsrclin,
otsrsdat,
otsrstim,
otsrslot
)
  tablespace pas_indx; 
create unique index outsrva3 on outsrvaf
(
otsrwebu,
otsrsite,
otsrclin,
otsrsdat,
otsrstim,
otsrslot
)
  tablespace pas_indx; 
