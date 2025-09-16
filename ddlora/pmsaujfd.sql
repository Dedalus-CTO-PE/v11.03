create table pmsaujaf
(
  pmauadat    varchar2(8) default ' ' not null,
  pmauatim    varchar2(8) default ' ' not null,
  pmauatyp    varchar2(1) default ' ' not null,
  pmaucntr    varchar2(6) default ' ' not null,
  pmauadjt    varchar2(3) default ' ' not null,
  pmaupval    number(14,4) default 0 not null,
  pmaucval    number(14,4) default 0 not null,
  pmaucuid    varchar2(10) default ' ' not null,
  pmaucdat    varchar2(8) default ' ' not null,
  pmauctim    varchar2(8) default ' ' not null,
  pmauspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsauja1 primary key( 
pmauadat,
pmauatim,
pmauatyp,
pmaucntr,
pmauadjt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsauja2 on pmsaujaf
(
pmaucntr,
pmauadjt,
pmauadat,
pmauatim,
pmauatyp
)
  tablespace pas_indx; 
