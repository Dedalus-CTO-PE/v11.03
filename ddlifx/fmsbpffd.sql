create table fmsaudbp
(
  fmbpaudd    char(8) default ' ' not null,
  fmbpaudt    char(8) default ' ' not null,
  fmbpaudp    char(2) default ' ' not null,
  fmbpaudr    char(1) default ' ' not null,
  fmbpauds    decimal(1,0) default 0 not null,
  fmbpaudo    char(4) default ' ' not null,
  fmbpledg    char(2) default ' ' not null,
  fmbpyear    char(4) default ' ' not null,
  fmbpcode    char(3) default ' ' not null,
  fmbpdesc    char(25) default ' ' not null,
  fmbppc1     decimal(6,2) default 0 not null,
  fmbppc2     decimal(6,2) default 0 not null,
  fmbppc3     decimal(6,2) default 0 not null,
  fmbppc4     decimal(6,2) default 0 not null,
  fmbppc5     decimal(6,2) default 0 not null,
  fmbppc6     decimal(6,2) default 0 not null,
  fmbppc7     decimal(6,2) default 0 not null,
  fmbppc8     decimal(6,2) default 0 not null,
  fmbppc9     decimal(6,2) default 0 not null,
  fmbppc10    decimal(6,2) default 0 not null,
  fmbppc11    decimal(6,2) default 0 not null,
  fmbppc12    decimal(6,2) default 0 not null,
  fmbppc13    decimal(6,2) default 0 not null,
  fmbpspar    char(16) default ' ' not null,
  lf          char(1)
);
create index fmsaudbp on fmsaudbp
(
fmbpaudd,
fmbpaudt,
fmbpaudp,
fmbpaudr
);
revoke all on fmsaudbp from public ; 
grant select on fmsaudbp to public ; 
create table fmsbpfaf
(
  fmbpledg    char(2) default ' ' not null,
  fmbpyear    char(4) default ' ' not null,
  fmbpcode    char(3) default ' ' not null,
  fmbpdesc    char(25) default ' ' not null,
  fmbppc1     decimal(6,2) default 0 not null,
  fmbppc2     decimal(6,2) default 0 not null,
  fmbppc3     decimal(6,2) default 0 not null,
  fmbppc4     decimal(6,2) default 0 not null,
  fmbppc5     decimal(6,2) default 0 not null,
  fmbppc6     decimal(6,2) default 0 not null,
  fmbppc7     decimal(6,2) default 0 not null,
  fmbppc8     decimal(6,2) default 0 not null,
  fmbppc9     decimal(6,2) default 0 not null,
  fmbppc10    decimal(6,2) default 0 not null,
  fmbppc11    decimal(6,2) default 0 not null,
  fmbppc12    decimal(6,2) default 0 not null,
  fmbppc13    decimal(6,2) default 0 not null,
  fmbpspar    char(16) default ' ' not null,
  lf          char(1)
);
create unique index fmsbpfa1 on fmsbpfaf
(
fmbpledg,
fmbpyear,
fmbpcode
);
revoke all on fmsbpfaf from public ; 
grant select on fmsbpfaf to public ; 
