create table pmsectaf
(
  dpmecflg    varchar2(2) default ' ' not null,
  pmechfnd    varchar2(6) default ' ' not null,
  pmecadmn    varchar2(8) default ' ' not null,
  pmecinvn    varchar2(8) default ' ' not null,
  pmecbatn    varchar2(8) default ' ' not null,
  pmecurno    varchar2(8) default ' ' not null,
  pmecpbat    varchar2(8) default ' ' not null,
  pmecnbat    varchar2(8) default ' ' not null,
  pmecccfl    varchar2(1) default ' ' not null,
  pmectrid    varchar2(24) default ' ' not null,
  dpmeceet    varchar2(1) default ' ' not null,
  pmecamtc    number(14,2) default 0 not null,
  pmecamtp    number(14,2) default 0 not null,
  pmecpdat    varchar2(8) default ' ' not null,
  pmecstat    varchar2(2) default ' ' not null,
  pmecftid    varchar2(24) default ' ' not null,
  pmechosp    varchar2(3) default ' ' not null,
  pmecpcti    varchar2(24) default ' ' not null,
  pmecspar    varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsecta1 primary key( 
pmechosp,
dpmecflg,
pmechfnd,
pmecadmn,
pmecinvn,
pmecbatn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsecta2 on pmsectaf
(
pmecinvn,
pmecbatn
)
  tablespace pas_indx; 
create unique index pmsecta3 on pmsectaf
(
pmecbatn,
pmecadmn,
pmecinvn
)
  tablespace pas_indx; 
create unique index pmsecta4 on pmsectaf
(
pmecadmn,
pmecinvn,
pmecbatn
)
  tablespace pas_indx; 
create unique index pmsecta5 on pmsectaf
(
pmechosp,
pmecurno,
pmecadmn,
pmecinvn,
pmecbatn
)
  tablespace pas_indx; 
create unique index pmsecta6 on pmsectaf
(
pmectrid,
pmecinvn,
pmecbatn
)
  tablespace pas_indx; 
