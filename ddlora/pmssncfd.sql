create table pmssncaf
(
  pmscclcd    varchar2(3) default ' ' not null,
  pmscvers    varchar2(2) default ' ' not null,
  pmscicde    varchar2(7) default ' ' not null,
  pmscdeff    varchar2(8) default ' ' not null,
  pmscdeft    varchar2(8) default ' ' not null,
  pmscfmse    varchar2(1) default ' ' not null,
  pmscfmsl    number(2,0) default 0 not null,
  pmscfmsh    number(2,0) default 0 not null,
  pmscfcse    varchar2(1) default ' ' not null,
  pmscfcsl    number(2,0) default 0 not null,
  pmscfcsh    number(2,0) default 0 not null,
  pmscagel    varchar2(1) default ' ' not null,
  pmscage     number(2,0) default 0 not null,
  pmscasso    varchar2(1) default ' ' not null,
  pmscftsr    varchar2(1) default ' ' not null,
  pmscftsl    number(3,0) default 0 not null,
  pmscftsh    number(3,0) default 0 not null,
  pmscspar    varchar2(43) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmssnca1 primary key( 
pmscclcd,
pmscvers,
pmscicde,
pmscdeff)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmssnca2 on pmssncaf
(
pmscicde,
pmscdeff,
pmscclcd,
pmscvers
)
  tablespace pas_indx; 
