create table pmsectaf
(
  dpmecflg    char(2) default ' ' not null,
  pmechfnd    char(6) default ' ' not null,
  pmecadmn    char(8) default ' ' not null,
  pmecinvn    char(8) default ' ' not null,
  pmecbatn    char(8) default ' ' not null,
  pmecurno    char(8) default ' ' not null,
  pmecpbat    char(8) default ' ' not null,
  pmecnbat    char(8) default ' ' not null,
  pmecccfl    char(1) default ' ' not null,
  pmectrid    char(24) default ' ' not null,
  dpmeceet    char(1) default ' ' not null,
  pmecamtc    decimal(14,2) default 0 not null,
  pmecamtp    decimal(14,2) default 0 not null,
  pmecpdat    char(8) default ' ' not null,
  pmecstat    char(2) default ' ' not null,
  pmecftid    char(24) default ' ' not null,
  pmechosp    char(3) default ' ' not null,
  pmecpcti    char(24) default ' ' not null,
  pmecspar    char(40) default ' ' not null,
  lf          char(1)
);
create unique index pmsecta1 on pmsectaf
(
pmechosp,
dpmecflg,
pmechfnd,
pmecadmn,
pmecinvn,
pmecbatn
);
create unique index pmsecta2 on pmsectaf
(
pmecinvn,
pmecbatn
);
create unique index pmsecta3 on pmsectaf
(
pmecbatn,
pmecadmn,
pmecinvn
);
create unique index pmsecta4 on pmsectaf
(
pmecadmn,
pmecinvn,
pmecbatn
);
create unique index pmsecta5 on pmsectaf
(
pmechosp,
pmecurno,
pmecadmn,
pmecinvn,
pmecbatn
);
create unique index pmsecta6 on pmsectaf
(
pmectrid,
pmecinvn,
pmecbatn
);
revoke all on pmsectaf from public ; 
grant select on pmsectaf to public ; 
