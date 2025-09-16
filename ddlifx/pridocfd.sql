create table priauddo
(
  prdoaudd    char(8) default ' ' not null,
  prdoaudt    char(8) default ' ' not null,
  prdoaudp    char(2) default ' ' not null,
  prdoaudr    char(1) default ' ' not null,
  prdoauds    decimal(1,0) default 0 not null,
  prdoaudo    char(4) default ' ' not null,
  prdoprac    char(6) default ' ' not null,
  prdodoct    char(10) default ' ' not null,
  prdoclam    char(3) default ' ' not null,
  prdopind    char(3) default ' ' not null,
  prdocomm    decimal(5,2) default 0 not null,
  prdofeep    decimal(5,2) default 0 not null,
  prdostat    decimal(1,0) default 0 not null,
  prdocrcd    char(5) default ' ' not null,
  prdoabnn    char(11) default ' ' not null,
  prdogstr    decimal(1,0) default 0 not null,
  prdoprov    char(10) default ' ' not null,
  prdospar    char(13) default ' ' not null,
  lf          char(1)
);
create index priauddo on priauddo
(
prdoaudd,
prdoaudt,
prdoaudp,
prdoaudr
);
revoke all on priauddo from public ; 
grant select on priauddo to public ; 
create table pridoctf
(
  prdoprac    char(6) default ' ' not null,
  prdodoct    char(10) default ' ' not null,
  prdoclam    char(3) default ' ' not null,
  prdopind    char(3) default ' ' not null,
  prdocomm    decimal(5,2) default 0 not null,
  prdofeep    decimal(5,2) default 0 not null,
  prdostat    decimal(1,0) default 0 not null,
  prdocrcd    char(5) default ' ' not null,
  prdoabnn    char(11) default ' ' not null,
  prdogstr    decimal(1,0) default 0 not null,
  prdoprov    char(10) default ' ' not null,
  prdospar    char(13) default ' ' not null,
  lf          char(1)
);
create unique index pridoct1 on pridoctf
(
prdoprac,
prdodoct,
prdoclam,
prdopind
);
create unique index pridoct2 on pridoctf
(
prdodoct,
prdoprac,
prdoclam,
prdopind
);
create unique index pridoct3 on pridoctf
(
prdoprov,
prdodoct,
prdoprac,
prdoclam,
prdopind
);
revoke all on pridoctf from public ; 
grant select on pridoctf to public ; 
