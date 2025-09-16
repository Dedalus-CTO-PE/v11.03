create table ceaaudps
(
  cepsaudd    char(8) default ' ' not null,
  cepsaudt    char(8) default ' ' not null,
  cepsaudp    char(2) default ' ' not null,
  cepsaudr    char(1) default ' ' not null,
  cepsauds    decimal(1,0) default 0 not null,
  cepsaudo    char(4) default ' ' not null,
  cepspsc     char(7) default ' ' not null,
  cepsdes     char(35) default ' ' not null,
  cepstyp     char(1) default ' ' not null,
  cepsqty     decimal(8,2) default 0 not null,
  cepsqdes    char(5) default ' ' not null,
  cepsst1     decimal(10,2) default 0 not null,
  cepsst2     decimal(10,2) default 0 not null,
  cepsst3     decimal(10,2) default 0 not null,
  cepsst4     decimal(10,2) default 0 not null,
  cepsst5     decimal(10,2) default 0 not null,
  cepsur1     char(30) default ' ' not null,
  cepsur2     char(30) default ' ' not null,
  cepsud1     char(8) default ' ' not null,
  cepsud2     char(8) default ' ' not null,
  cepsact     char(1) default ' ' not null,
  cepsdrg     char(1) default ' ' not null,
  cepsvsc     char(2) default ' ' not null,
  cepsuy1     char(1) default ' ' not null,
  cepsuy2     char(1) default ' ' not null,
  cepsspa     char(16) default ' ' not null,
  lf          char(1)
);
create index ceaaudps on ceaaudps
(
cepsaudd,
cepsaudt,
cepsaudp,
cepsaudr
);
revoke all on ceaaudps from public ; 
grant select on ceaaudps to public ; 
create table ceapscaf
(
  cepspsc     char(7) default ' ' not null,
  cepsdes     char(35) default ' ' not null,
  cepstyp     char(1) default ' ' not null,
  cepsqty     decimal(8,2) default 0 not null,
  cepsqdes    char(5) default ' ' not null,
  cepsst1     decimal(10,2) default 0 not null,
  cepsst2     decimal(10,2) default 0 not null,
  cepsst3     decimal(10,2) default 0 not null,
  cepsst4     decimal(10,2) default 0 not null,
  cepsst5     decimal(10,2) default 0 not null,
  cepsur1     char(30) default ' ' not null,
  cepsur2     char(30) default ' ' not null,
  cepsud1     char(8) default ' ' not null,
  cepsud2     char(8) default ' ' not null,
  cepsact     char(1) default ' ' not null,
  cepsdrg     char(1) default ' ' not null,
  cepsvsc     char(2) default ' ' not null,
  cepsuy1     char(1) default ' ' not null,
  cepsuy2     char(1) default ' ' not null,
  cepsspa     char(16) default ' ' not null,
  lf          char(1)
);
create unique index ceapsca1 on ceapscaf
(
cepspsc
);
revoke all on ceapscaf from public ; 
grant select on ceapscaf to public ; 
