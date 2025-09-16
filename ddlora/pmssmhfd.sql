create table pmssmhaf
(
  pmsmumid    varchar2(16) default ' ' not null,
  pmsmurno    varchar2(8) default ' ' not null,
  pmsmmtyp    varchar2(2) default ' ' not null,
  pmsmrkey    varchar2(30) default ' ' not null,
  pmsmscod    varchar2(3) default ' ' not null,
  pmsmsdat    varchar2(8) default ' ' not null,
  pmsmstim    varchar2(8) default ' ' not null,
  pmsmmnum    varchar2(20) default ' ' not null,
  pmsmsuid    varchar2(10) default ' ' not null,
  pmsmmesa    varchar2(160) default ' ' not null,
  pmsmmesb    varchar2(160) default ' ' not null,
  pmsmmesc    varchar2(160) default ' ' not null,
  pmsmmesd    varchar2(160) default ' ' not null,
  pmsmmese    varchar2(160) default ' ' not null,
  pmsmmesf    varchar2(160) default ' ' not null,
  pmsmstat    varchar2(2) default ' ' not null,
  pmsmahoc    varchar2(1) default ' ' not null,
  pmsmcont    varchar2(1) default ' ' not null,
  pmsmctyp    varchar2(3) default ' ' not null,
  pmsmrmid    varchar2(16) default ' ' not null,
  pmsmspar    varchar2(79) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmssmha1 primary key( 
pmsmumid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmssmha2 on pmssmhaf
(
pmsmurno,
pmsmumid
)
  tablespace pas_indx; 
create unique index pmssmha3 on pmssmhaf
(
pmsmsdat,
pmsmstim,
pmsmumid
)
  tablespace pas_indx; 
create unique index pmssmha4 on pmssmhaf
(
pmsmstat,
pmsmumid
)
  tablespace pas_indx; 
create unique index pmssmha5 on pmssmhaf
(
pmsmmtyp,
pmsmrkey,
pmsmsdat,
pmsmstim,
pmsmumid
)
  tablespace pas_indx; 
create unique index pmssmha6 on pmssmhaf
(
pmsmrmid,
pmsmumid
)
  tablespace pas_indx; 
