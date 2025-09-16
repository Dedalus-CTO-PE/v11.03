create table allbilaf
(
  albidept    varchar2(3) default ' ' not null,
  albicomp    varchar2(3) default ' ' not null,
  albiserv    varchar2(6) default ' ' not null,
  albitime    varchar2(4) default ' ' not null,
  albiitem    varchar2(9) default ' ' not null,
  albicdat    varchar2(8) default ' ' not null,
  albictim    varchar2(8) default ' ' not null,
  albicuit    varchar2(10) default ' ' not null,
  albiudat    varchar2(8) default ' ' not null,
  albiutim    varchar2(8) default ' ' not null,
  albiuuid    varchar2(10) default ' ' not null,
  albispar    varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allbila1 primary key( 
albidept,
albicomp,
albiserv,
albitime)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
