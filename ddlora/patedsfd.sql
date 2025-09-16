create table patedsaf
(
  dptesflg    varchar2(2) default ' ' not null,
  pteshfnd    varchar2(6) default ' ' not null,
  ptesadmn    varchar2(8) default ' ' not null,
  ptesinvn    varchar2(8) default ' ' not null,
  ptesbatn    varchar2(8) default ' ' not null,
  ptesurno    varchar2(8) default ' ' not null,
  ptespbat    varchar2(8) default ' ' not null,
  ptesnbat    varchar2(8) default ' ' not null,
  ptespcsn    varchar2(5) default ' ' not null,
  ptescsno    varchar2(5) default ' ' not null,
  ptesccfl    varchar2(1) default ' ' not null,
  ptesspar    varchar2(12) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patedsa1 primary key( 
dptesflg,
pteshfnd,
ptesadmn,
ptesinvn,
ptesbatn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patedsa2 on patedsaf
(
ptesinvn,
ptesbatn
)
  tablespace pas_indx; 
create unique index patedsa3 on patedsaf
(
ptesbatn,
ptesadmn,
ptesinvn
)
  tablespace pas_indx; 
create unique index patedsa4 on patedsaf
(
ptesadmn,
ptesinvn,
ptesbatn
)
  tablespace pas_indx; 
create unique index patedsa5 on patedsaf
(
ptesurno,
ptesadmn,
ptesinvn,
ptesbatn
)
  tablespace pas_indx; 
