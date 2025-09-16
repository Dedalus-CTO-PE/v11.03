create table outrshaf
(
  oprssite    char(6) default ' ' not null,
  oprsclin    char(6) default ' ' not null,
  oprsdate    char(8) default ' ' not null,
  oprsstrt    char(5) default ' ' not null,
  doprsslo    char(3) default ' ' not null,
  oprstime    char(5) default ' ' not null,
  doprsout    char(8) default ' ' not null,
  doprsuni    char(3) default ' ' not null,
  oprsrdte    char(8) default ' ' not null,
  oprsrtim    char(8) default ' ' not null,
  oprsreas    char(3) default ' ' not null,
  oprsncli    char(6) default ' ' not null,
  oprsndat    char(8) default ' ' not null,
  oprsnstr    char(5) default ' ' not null,
  doprsnsl    char(3) default ' ' not null,
  oprsntim    char(5) default ' ' not null,
  oprsoper    char(4) default ' ' not null,
  oprsclty    char(6) default ' ' not null,
  oprsvtyp    char(3) default ' ' not null,
  oprscomp    char(3) default ' ' not null,
  oprsnmds    char(3) default ' ' not null,
  oprssrvd    char(3) default ' ' not null,
  oprscare    char(3) default ' ' not null,
  oprstcod    char(3) default ' ' not null,
  oprsbkdt    char(16) default ' ' not null,
  oprsspar    char(15) default ' ' not null,
  lf          char(1)
);
create unique index outrsha1 on outrshaf
(
doprsout,
doprsuni
);
create unique index outrsha2 on outrshaf
(
oprssite,
oprsclin,
oprsdate,
oprsstrt,
doprsout,
doprsuni
);
create unique index outrsha3 on outrshaf
(
oprssite,
oprsrdte,
doprsout,
doprsuni
);
revoke all on outrshaf from public ; 
grant select on outrshaf to public ; 
