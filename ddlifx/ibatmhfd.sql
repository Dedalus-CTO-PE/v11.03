create table ibatmhaf
(
  ibthscod    char(6) default ' ' not null,
  ibthdesc    char(30) default ' ' not null,
  ibthwidt    decimal(3,0) default 0 not null,
  ibthleng    decimal(3,0) default 0 not null,
  ibthstyp    char(3) default ' ' not null,
  ibthactv    char(1) default ' ' not null,
  ibthcomm    char(80) default ' ' not null,
  ibthcuid    char(10) default ' ' not null,
  ibthcdat    char(8) default ' ' not null,
  ibthctim    char(8) default ' ' not null,
  ibthuuid    char(10) default ' ' not null,
  ibthudat    char(8) default ' ' not null,
  ibthutim    char(8) default ' ' not null,
  ibthspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index ibatmha1 on ibatmhaf
(
ibthscod
);
create unique index ibatmha2 on ibatmhaf
(
ibthstyp,
ibthscod
);
create unique index ibatmha3 on ibatmhaf
(
ibthdesc,
ibthscod
);
revoke all on ibatmhaf from public ; 
grant select on ibatmhaf to public ; 
