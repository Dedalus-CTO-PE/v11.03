create table patmrgaf
(
  ptmrolur    char(8) default ' ' not null,
  ptmrnwur    char(8) default ' ' not null,
  ptmrrdte    char(8) default ' ' not null,
  ptmrrhos    char(4) default ' ' not null,
  ptmrappr    char(20) default ' ' not null,
  dptmrsta    char(1) default ' ' not null,
  ptmrsdte    char(8) default ' ' not null,
  ptmrstim    char(8) default ' ' not null,
  ptmrlock    char(2) default ' ' not null,
  ptmrsent    char(1) default ' ' not null,
  ptmruser    char(10) default ' ' not null,
  ptmrfill    char(29) default ' ' not null,
  lf          char(1)
);
create unique index patmrgg1 on patmrgaf
(
dptmrsta,
ptmrolur,
ptmrnwur
);
create unique index patmrgg2 on patmrgaf
(
dptmrsta,
ptmrnwur,
ptmrolur
);
create unique index patmrgg3 on patmrgaf
(
ptmrrdte,
ptmrolur,
ptmrnwur,
dptmrsta
);
create unique index patmrgg4 on patmrgaf
(
ptmrsdte,
ptmrolur,
ptmrnwur,
dptmrsta
);
revoke all on patmrgaf from public ; 
grant select on patmrgaf to public ; 
