create table pmsauaaf
(
  pmaaadat    varchar2(8) default ' ' not null,
  pmaaatim    varchar2(8) default ' ' not null,
  pmaaatyp    varchar2(1) default ' ' not null,
  pmaacntr    varchar2(6) default ' ' not null,
  pmaahacg    varchar2(6) default ' ' not null,
  pmaavalf    varchar2(3) default ' ' not null,
  pmaaovlt    varchar2(3) default ' ' not null,
  pmaanvlt    varchar2(3) default ' ' not null,
  pmaaoadj    number(14,4) default 0 not null,
  pmaanadj    number(14,4) default 0 not null,
  pmaacuid    varchar2(10) default ' ' not null,
  pmaaspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsauaa1 primary key( 
pmaaadat,
pmaaatim,
pmaaatyp,
pmaacntr,
pmaahacg,
pmaavalf)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsauaa2 on pmsauaaf
(
pmaacntr,
pmaahacg,
pmaavalf,
pmaaadat,
pmaaatim,
pmaaatyp
)
  tablespace pas_indx; 
