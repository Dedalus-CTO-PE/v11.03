create table pmsudtaf
(
  pmuturno    char(8) default ' ' not null,
  pmutatyp    char(3) default ' ' not null,
  pmutctyp    char(3) default ' ' not null,
  pmuthfnd    char(6) default ' ' not null,
  pmuthtab    char(3) default ' ' not null,
  pmutexpd    char(8) default ' ' not null,
  pmutcomt    char(3) default ' ' not null,
  pmutnnum    char(6) default ' ' not null,
  pmutidat    char(8) default ' ' not null,
  pmutitim    char(8) default ' ' not null,
  pmutiuid    char(10) default ' ' not null,
  pmutdind    char(1) default ' ' not null,
  pmutddat    char(8) default ' ' not null,
  pmutdtim    char(8) default ' ' not null,
  pmutduid    char(10) default ' ' not null,
  pmutspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index pmsudta1 on pmsudtaf
(
pmuturno,
pmutatyp,
pmutctyp,
pmuthfnd,
pmuthtab,
pmutexpd,
pmutcomt,
pmutnnum
);
revoke all on pmsudtaf from public ; 
grant select on pmsudtaf to public ; 
