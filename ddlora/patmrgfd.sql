create table patmrgaf
(
  ptmrolur    varchar2(8) default ' ' not null,
  ptmrnwur    varchar2(8) default ' ' not null,
  ptmrrdte    varchar2(8) default ' ' not null,
  ptmrrhos    varchar2(4) default ' ' not null,
  ptmrappr    varchar2(20) default ' ' not null,
  dptmrsta    varchar2(1) default ' ' not null,
  ptmrsdte    varchar2(8) default ' ' not null,
  ptmrstim    varchar2(8) default ' ' not null,
  ptmrlock    varchar2(2) default ' ' not null,
  ptmrsent    varchar2(1) default ' ' not null,
  ptmruser    varchar2(10) default ' ' not null,
  ptmrfill    varchar2(29) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patmrgg1 primary key( 
dptmrsta,
ptmrolur,
ptmrnwur)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patmrgg2 on patmrgaf
(
dptmrsta,
ptmrnwur,
ptmrolur
)
  tablespace pas_indx; 
create unique index patmrgg3 on patmrgaf
(
ptmrrdte,
ptmrolur,
ptmrnwur,
dptmrsta
)
  tablespace pas_indx; 
create unique index patmrgg4 on patmrgaf
(
ptmrsdte,
ptmrolur,
ptmrnwur,
dptmrsta
)
  tablespace pas_indx; 
