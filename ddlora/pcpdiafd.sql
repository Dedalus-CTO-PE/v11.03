create table pcpauddi
(
  pcdiaudd    varchar2(8) default ' ' not null,
  pcdiaudt    varchar2(8) default ' ' not null,
  pcdiaudp    varchar2(2) default ' ' not null,
  pcdiaudr    varchar2(1) default ' ' not null,
  pcdiauds    number(1,0) default 0 not null,
  pcdiaudo    varchar2(4) default ' ' not null,
  dpcdiadm    varchar2(8) default ' ' not null,
  pcdidate    varchar2(8) default ' ' not null,
  pcditime    varchar2(8) default ' ' not null,
  pcdidiag    varchar2(9) default ' ' not null,
  pcdiuniq    varchar2(10) default ' ' not null,
  pcdictyp    varchar2(9) default ' ' not null,
  pcdiclin    varchar2(9) default ' ' not null,
  pcdinurs    varchar2(6) default ' ' not null,
  pcdidcod    varchar2(4) default ' ' not null,
  pcdistat    number(1,0) default 0 not null,
  pcdispar    varchar2(12) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index pcpauddi on pcpauddi
(
pcdiaudd,
pcdiaudt,
pcdiaudp,
pcdiaudr
)
tablespace pas_indx; 
create table pcpdiaaf
(
  dpcdiadm    varchar2(8) default ' ' not null,
  pcdidate    varchar2(8) default ' ' not null,
  pcditime    varchar2(8) default ' ' not null,
  pcdidiag    varchar2(9) default ' ' not null,
  pcdiuniq    varchar2(10) default ' ' not null,
  pcdictyp    varchar2(9) default ' ' not null,
  pcdiclin    varchar2(9) default ' ' not null,
  pcdinurs    varchar2(6) default ' ' not null,
  pcdidcod    varchar2(4) default ' ' not null,
  pcdistat    number(1,0) default 0 not null,
  pcdispar    varchar2(12) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pcpdiaa1 primary key( 
dpcdiadm,
pcdidate,
pcditime,
pcdidiag)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pcpdiaa2 on pcpdiaaf
(
pcdiuniq
)
  tablespace pas_indx; 
