create table fmsbriaf
(
  fmbrrid     char(3) default ' ' not null,
  fmbrdes     char(35) default ' ' not null,
  fmbrbsc     char(3) default ' ' not null,
  fmbrchq     char(15) default ' ' not null,
  fmbrnor     char(16) default ' ' not null,
  fmbrlog     char(18) default ' ' not null,
  fmbrled     char(2) default ' ' not null,
  fmbrdac     char(12) default ' ' not null,
  fmbrcac     char(12) default ' ' not null,
  fmbrdis     char(5) default ' ' not null,
  fmbrres     char(4) default ' ' not null,
  fmbrtds     char(30) default ' ' not null,
  fmbrtrf     char(15) default ' ' not null,
  fmbraut     char(1) default ' ' not null,
  fmbrur1     char(25) default ' ' not null,
  fmbrur2     char(25) default ' ' not null,
  fmbrud1     char(8) default ' ' not null,
  fmbrud2     char(8) default ' ' not null,
  fmbruy1     char(1) default ' ' not null,
  fmbruy2     char(1) default ' ' not null,
  fmbrspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsbria1 on fmsbriaf
(
fmbrrid
);
create unique index fmsbria2 on fmsbriaf
(
fmbrchq,
fmbrbsc,
fmbrnor,
fmbrlog,
fmbrrid
);
revoke all on fmsbriaf from public ; 
grant select on fmsbriaf to public ; 
