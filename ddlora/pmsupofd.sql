create table pmsupoaf
(
  pmuourno    varchar2(8) default ' ' not null,
  pmuoatyp    varchar2(3) default ' ' not null,
  pmuoclam    varchar2(3) default ' ' not null,
  pmuofund    varchar2(6) default ' ' not null,
  pmuotabt    varchar2(3) default ' ' not null,
  pmuoedat    varchar2(8) default ' ' not null,
  pmuovtyp    varchar2(3) default ' ' not null,
  pmuomaxo    varchar2(3) default ' ' not null,
  pmuowaro    varchar2(3) default ' ' not null,
  pmuomano    varchar2(3) default ' ' not null,
  pmuocdat    varchar2(8) default ' ' not null,
  pmuoctim    varchar2(8) default ' ' not null,
  pmuocuid    varchar2(10) default ' ' not null,
  pmuoudat    varchar2(8) default ' ' not null,
  pmuoutim    varchar2(8) default ' ' not null,
  pmuouuid    varchar2(10) default ' ' not null,
  pmuospar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsupoa1 primary key( 
pmuourno,
pmuoatyp,
pmuoclam,
pmuofund,
pmuotabt,
pmuoedat,
pmuovtyp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsupoaf for pmsupoaf;
