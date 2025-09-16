create table pmsideaf
(
  pmidadmn    char(8) default ' ' not null,
  pmidclty    char(3) default ' ' not null,
  pmidinvn    char(8) default ' ' not null,
  pmidtrno    char(6) default ' ' not null,
  pmidrtyp    char(1) default ' ' not null,
  pmidfdat    char(8) default ' ' not null,
  pmidtdat    char(8) default ' ' not null,
  pmidnday    decimal(4,0) default 0 not null,
  pmiddesc    char(35) default ' ' not null,
  pmiditem    char(9) default ' ' not null,
  dpmiddef    char(1) default ' ' not null,
  pmidregm    char(10) default ' ' not null,
  pmidamnt    decimal(14,2) default 0 not null,
  pmidgstm    decimal(14,2) default 0 not null,
  pmidsplt    char(1) default ' ' not null,
  pmidcnid    char(6) default ' ' not null,
  pmidcuid    char(10) default ' ' not null,
  pmidcdat    char(8) default ' ' not null,
  pmidctim    char(8) default ' ' not null,
  pmiduuid    char(10) default ' ' not null,
  pmidudat    char(8) default ' ' not null,
  pmidutim    char(8) default ' ' not null,
  pmiditdt    char(8) default ' ' not null,
  pmidspar    char(92) default ' ' not null,
  lf          char(1)
);
create unique index pmsidea1 on pmsideaf
(
pmidadmn,
pmidclty,
pmidinvn,
pmidtrno
);
create unique index pmsidea2 on pmsideaf
(
pmidadmn,
pmidinvn,
dpmiddef,
pmidclty,
pmidtrno
);
create unique index pmsidea3 on pmsideaf
(
pmidadmn,
pmidinvn,
pmidrtyp,
pmidfdat,
pmidclty,
pmidtrno
);
create unique index pmsidea4 on pmsideaf
(
pmidadmn,
pmidclty,
pmidinvn,
pmiditem,
pmidtrno
);
create unique index pmsidea5 on pmsideaf
(
pmidinvn,
pmidadmn,
pmidclty,
pmidtrno
);
revoke all on pmsideaf from public ; 
grant select on pmsideaf to public ; 
