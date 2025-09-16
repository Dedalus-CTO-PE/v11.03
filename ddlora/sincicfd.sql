create table sinaudic
(
  siicaudd    varchar2(8) default ' ' not null,
  siicaudt    varchar2(8) default ' ' not null,
  siicaudp    varchar2(2) default ' ' not null,
  siicaudr    varchar2(1) default ' ' not null,
  siicauds    number(1,0) default 0 not null,
  siicaudo    varchar2(4) default ' ' not null,
  siiccat     varchar2(7) default ' ' not null,
  siicsup     varchar2(5) default ' ' not null,
  siicsut     varchar2(15) default ' ' not null,
  siiccct     number(16,4) default 0 not null,
  siiclct     number(14,4) default 0 not null,
  siicltm     number(6,0) default 0 not null,
  siicpno     varchar2(30) default ' ' not null,
  siicpd1     varchar2(60) default ' ' not null,
  siicpd2     varchar2(60) default ' ' not null,
  siicman     number(1,0) default 0 not null,
  siicapo     number(1,0) default 0 not null,
  siicur1     varchar2(15) default ' ' not null,
  siicur2     varchar2(15) default ' ' not null,
  siicud1     varchar2(8) default ' ' not null,
  siicud2     varchar2(8) default ' ' not null,
  siicuc1     varchar2(3) default ' ' not null,
  siicuc2     varchar2(3) default ' ' not null,
  siicuy1     varchar2(1) default ' ' not null,
  siicuy2     varchar2(1) default ' ' not null,
  siicuom     varchar2(10) default ' ' not null,
  siiccont    varchar2(1) default ' ' not null,
  siicctex    varchar2(8) default ' ' not null,
  siicspa     varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index sinaudic on sinaudic
(
siicaudd,
siicaudt,
siicaudp,
siicaudr
)
tablespace pas_indx; 
create table sincicaf
(
  siiccat     varchar2(7) default ' ' not null,
  siicsup     varchar2(5) default ' ' not null,
  siicsut     varchar2(15) default ' ' not null,
  siiccct     number(16,4) default 0 not null,
  siiclct     number(14,4) default 0 not null,
  siicltm     number(6,0) default 0 not null,
  siicpno     varchar2(30) default ' ' not null,
  siicpd1     varchar2(60) default ' ' not null,
  siicpd2     varchar2(60) default ' ' not null,
  siicman     number(1,0) default 0 not null,
  siicapo     number(1,0) default 0 not null,
  siicur1     varchar2(15) default ' ' not null,
  siicur2     varchar2(15) default ' ' not null,
  siicud1     varchar2(8) default ' ' not null,
  siicud2     varchar2(8) default ' ' not null,
  siicuc1     varchar2(3) default ' ' not null,
  siicuc2     varchar2(3) default ' ' not null,
  siicuy1     varchar2(1) default ' ' not null,
  siicuy2     varchar2(1) default ' ' not null,
  siicuom     varchar2(10) default ' ' not null,
  siiccont    varchar2(1) default ' ' not null,
  siicctex    varchar2(8) default ' ' not null,
  siicspa     varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sincica1 primary key( 
siiccat,
siicsup,
siicsut)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sincica2 on sincicaf
(
siicsup,
siicpno,
siiccat,
siicsut
)
  tablespace pas_indx; 
create unique index sincica3 on sincicaf
(
siicsup,
siiccat,
siicsut
)
  tablespace pas_indx; 
create unique index sincica4 on sincicaf
(
siicsup,
siicpno,
siicsut,
siiccat
)
  tablespace pas_indx; 
