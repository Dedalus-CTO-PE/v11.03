create table sinaudic
(
  siicaudd    char(8) default ' ' not null,
  siicaudt    char(8) default ' ' not null,
  siicaudp    char(2) default ' ' not null,
  siicaudr    char(1) default ' ' not null,
  siicauds    decimal(1,0) default 0 not null,
  siicaudo    char(4) default ' ' not null,
  siiccat     char(7) default ' ' not null,
  siicsup     char(5) default ' ' not null,
  siicsut     char(15) default ' ' not null,
  siiccct     decimal(16,4) default 0 not null,
  siiclct     decimal(14,4) default 0 not null,
  siicltm     decimal(6,0) default 0 not null,
  siicpno     char(30) default ' ' not null,
  siicpd1     char(60) default ' ' not null,
  siicpd2     char(60) default ' ' not null,
  siicman     decimal(1,0) default 0 not null,
  siicapo     decimal(1,0) default 0 not null,
  siicur1     char(15) default ' ' not null,
  siicur2     char(15) default ' ' not null,
  siicud1     char(8) default ' ' not null,
  siicud2     char(8) default ' ' not null,
  siicuc1     char(3) default ' ' not null,
  siicuc2     char(3) default ' ' not null,
  siicuy1     char(1) default ' ' not null,
  siicuy2     char(1) default ' ' not null,
  siicuom     char(10) default ' ' not null,
  siiccont    char(1) default ' ' not null,
  siicctex    char(8) default ' ' not null,
  siicspa     char(11) default ' ' not null,
  lf          char(1)
);
create index sinaudic on sinaudic
(
siicaudd,
siicaudt,
siicaudp,
siicaudr
);
revoke all on sinaudic from public ; 
grant select on sinaudic to public ; 
create table sincicaf
(
  siiccat     char(7) default ' ' not null,
  siicsup     char(5) default ' ' not null,
  siicsut     char(15) default ' ' not null,
  siiccct     decimal(16,4) default 0 not null,
  siiclct     decimal(14,4) default 0 not null,
  siicltm     decimal(6,0) default 0 not null,
  siicpno     char(30) default ' ' not null,
  siicpd1     char(60) default ' ' not null,
  siicpd2     char(60) default ' ' not null,
  siicman     decimal(1,0) default 0 not null,
  siicapo     decimal(1,0) default 0 not null,
  siicur1     char(15) default ' ' not null,
  siicur2     char(15) default ' ' not null,
  siicud1     char(8) default ' ' not null,
  siicud2     char(8) default ' ' not null,
  siicuc1     char(3) default ' ' not null,
  siicuc2     char(3) default ' ' not null,
  siicuy1     char(1) default ' ' not null,
  siicuy2     char(1) default ' ' not null,
  siicuom     char(10) default ' ' not null,
  siiccont    char(1) default ' ' not null,
  siicctex    char(8) default ' ' not null,
  siicspa     char(11) default ' ' not null,
  lf          char(1)
);
create unique index sincica1 on sincicaf
(
siiccat,
siicsup,
siicsut
);
create unique index sincica2 on sincicaf
(
siicsup,
siicpno,
siiccat,
siicsut
);
create unique index sincica3 on sincicaf
(
siicsup,
siiccat,
siicsut
);
create unique index sincica4 on sincicaf
(
siicsup,
siicpno,
siicsut,
siiccat
);
revoke all on sincicaf from public ; 
grant select on sincicaf to public ; 
