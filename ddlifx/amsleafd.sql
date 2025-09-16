create table amsaudle
(
  amleaudd    char(8) default ' ' not null,
  amleaudt    char(8) default ' ' not null,
  amleaudp    char(2) default ' ' not null,
  amleaudr    char(1) default ' ' not null,
  amleauds    decimal(1,0) default 0 not null,
  amleaudo    char(4) default ' ' not null,
  amlereg     char(2) default ' ' not null,
  amleass     char(12) default ' ' not null,
  amlecom     char(5) default ' ' not null,
  amlecnm     char(30) default ' ' not null,
  amleref     char(30) default ' ' not null,
  amlecon     char(30) default ' ' not null,
  amledat     char(8) default ' ' not null,
  amleper     decimal(4,0) default 0 not null,
  amleedt     char(8) default ' ' not null,
  amleins     decimal(14,2) default 0 not null,
  amlepmt     char(3) default ' ' not null,
  amleres     decimal(14,2) default 0 not null,
  amleua1     decimal(14,2) default 0 not null,
  amleua2     decimal(14,2) default 0 not null,
  amleur1     char(30) default ' ' not null,
  amleur2     char(30) default ' ' not null,
  amleud1     char(8) default ' ' not null,
  amleud2     char(8) default ' ' not null,
  amleuy1     char(1) default ' ' not null,
  amleuy2     char(1) default ' ' not null,
  amlespa     char(20) default ' ' not null,
  lf          char(1)
);
create index amsaudle on amsaudle
(
amleaudd,
amleaudt,
amleaudp,
amleaudr
);
revoke all on amsaudle from public ; 
grant select on amsaudle to public ; 
create table amsleaaf
(
  amlereg     char(2) default ' ' not null,
  amleass     char(12) default ' ' not null,
  amlecom     char(5) default ' ' not null,
  amlecnm     char(30) default ' ' not null,
  amleref     char(30) default ' ' not null,
  amlecon     char(30) default ' ' not null,
  amledat     char(8) default ' ' not null,
  amleper     decimal(4,0) default 0 not null,
  amleedt     char(8) default ' ' not null,
  amleins     decimal(14,2) default 0 not null,
  amlepmt     char(3) default ' ' not null,
  amleres     decimal(14,2) default 0 not null,
  amleua1     decimal(14,2) default 0 not null,
  amleua2     decimal(14,2) default 0 not null,
  amleur1     char(30) default ' ' not null,
  amleur2     char(30) default ' ' not null,
  amleud1     char(8) default ' ' not null,
  amleud2     char(8) default ' ' not null,
  amleuy1     char(1) default ' ' not null,
  amleuy2     char(1) default ' ' not null,
  amlespa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index amsleaa1 on amsleaaf
(
amlereg,
amleass
);
create unique index amsleaa2 on amsleaaf
(
amlecom,
amleref,
amlereg,
amleass
);
create unique index amsleaa3 on amsleaaf
(
amleref,
amlecom,
amlereg,
amleass
);
create unique index amsleaa4 on amsleaaf
(
amledat,
amlereg,
amleass
);
create unique index amsleaa5 on amsleaaf
(
amleedt,
amlereg,
amleass
);
revoke all on amsleaaf from public ; 
grant select on amsleaaf to public ; 
