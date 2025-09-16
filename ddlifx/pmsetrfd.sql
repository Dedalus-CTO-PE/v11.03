create table pmsetraf
(
  pmetstat    char(1) default ' ' not null,
  pmettype    char(2) default ' ' not null,
  pmettrid    char(24) default ' ' not null,
  pmetcdte    char(8) default ' ' not null,
  pmetctim    char(8) default ' ' not null,
  pmetbatn    char(8) default ' ' not null,
  pmetinvn    char(8) default ' ' not null,
  pmetudte    char(8) default ' ' not null,
  pmetutim    char(8) default ' ' not null,
  pmetlocn    char(8) default ' ' not null,
  pmetsnid    char(60) default ' ' not null,
  pmetfdtm    char(14) default ' ' not null,
  pmettdtm    char(14) default ' ' not null,
  pmeteror    char(4) default ' ' not null,
  pmetmodl    char(1) default ' ' not null,
  pmetspar    char(13) default ' ' not null,
  lf          char(1)
);
create unique index pmsetra1 on pmsetraf
(
pmetstat,
pmettype,
pmetlocn,
pmetcdte,
pmetctim,
pmettrid
);
create unique index pmsetra2 on pmsetraf
(
pmetcdte,
pmetctim,
pmetstat,
pmettype,
pmetlocn,
pmettrid
);
create unique index pmsetra3 on pmsetraf
(
pmetstat,
pmetcdte,
pmetctim,
pmettype,
pmetlocn,
pmettrid
);
revoke all on pmsetraf from public ; 
grant select on pmsetraf to public ; 
