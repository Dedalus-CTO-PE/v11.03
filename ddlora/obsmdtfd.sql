create table obsmdtaf
(
  obmdurno    varchar2(8) default ' ' not null,
  obmdnote    varchar2(6) default ' ' not null,
  obmddate    varchar2(8) default ' ' not null,
  obmdtime    varchar2(8) default ' ' not null,
  obmduser    varchar2(10) default ' ' not null,
  obmdoccg    varchar2(3) default ' ' not null,
  obmddelt    varchar2(1) default ' ' not null,
  obmdddat    varchar2(8) default ' ' not null,
  obmddtim    varchar2(8) default ' ' not null,
  obmdduse    varchar2(10) default ' ' not null,
  obmdspar    varchar2(101) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint obsmdta1 primary key( 
obmdurno,
obmdnote)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
