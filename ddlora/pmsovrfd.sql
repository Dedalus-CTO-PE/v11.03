create table pmsovraf
(
  pmorurno    varchar2(8) default ' ' not null,
  pmordate    varchar2(8) default ' ' not null,
  pmortime    varchar2(8) default ' ' not null,
  dpmorcnt    varchar2(2) default ' ' not null,
  pmorhosp    varchar2(3) default ' ' not null,
  pmortrid    varchar2(24) default ' ' not null,
  pmorfnam    varchar2(40) default ' ' not null,
  pmormedn    varchar2(10) default ' ' not null,
  pmormedr    varchar2(1) default ' ' not null,
  pmorstat    varchar2(4) default ' ' not null,
  pmoreror    varchar2(100) default ' ' not null,
  pmorspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsovra1 primary key( 
pmorurno,
pmordate,
pmortime,
dpmorcnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsovra2 on pmsovraf
(
pmorhosp,
pmordate,
pmortime,
pmorurno,
dpmorcnt
)
  tablespace pas_indx; 
