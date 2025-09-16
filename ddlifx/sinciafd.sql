create table sinaudia
(
  siiaaudd    char(8) default ' ' not null,
  siiaaudt    char(8) default ' ' not null,
  siiaaudp    char(2) default ' ' not null,
  siiaaudr    char(1) default ' ' not null,
  siiaauds    decimal(1,0) default 0 not null,
  siiaaudo    char(4) default ' ' not null,
  siiacat     char(7) default ' ' not null,
  siiades     char(60) default ' ' not null,
  siiasub     char(5) default ' ' not null,
  siiaiss     char(15) default ' ' not null,
  siiasti     char(6) default ' ' not null,
  siiaavc     decimal(18,6) default 0 not null,
  siianat     char(10) default ' ' not null,
  siiaabc     char(1) default ' ' not null,
  siiapsc     char(5) default ' ' not null,
  siiarex     decimal(1,0) default 0 not null,
  siianon     decimal(1,0) default 0 not null,
  siiasab     decimal(1,0) default 0 not null,
  siiasus     decimal(1,0) default 0 not null,
  siiadtc     char(8) default ' ' not null,
  siiatmc     char(5) default ' ' not null,
  siiausc     char(4) default ' ' not null,
  siiaur1     char(15) default ' ' not null,
  siiaur2     char(15) default ' ' not null,
  siiaud1     char(8) default ' ' not null,
  siiaud2     char(8) default ' ' not null,
  siiauc1     char(3) default ' ' not null,
  siiauc2     char(3) default ' ' not null,
  siiauy1     char(1) default ' ' not null,
  siiauy2     char(1) default ' ' not null,
  siiaqin     char(10) default ' ' not null,
  siiadun     char(15) default ' ' not null,
  siiagst     char(6) default ' ' not null,
  siiaactv    char(1) default ' ' not null,
  siiaspa     char(19) default ' ' not null,
  lf          char(1)
);
create index sinaudia on sinaudia
(
siiaaudd,
siiaaudt,
siiaaudp,
siiaaudr
);
revoke all on sinaudia from public ; 
grant select on sinaudia to public ; 
create table sinciaaf
(
  siiacat     char(7) default ' ' not null,
  siiades     char(60) default ' ' not null,
  siiasub     char(5) default ' ' not null,
  siiaiss     char(15) default ' ' not null,
  siiasti     char(6) default ' ' not null,
  siiaavc     decimal(18,6) default 0 not null,
  siianat     char(10) default ' ' not null,
  siiaabc     char(1) default ' ' not null,
  siiapsc     char(5) default ' ' not null,
  siiarex     decimal(1,0) default 0 not null,
  siianon     decimal(1,0) default 0 not null,
  siiasab     decimal(1,0) default 0 not null,
  siiasus     decimal(1,0) default 0 not null,
  siiadtc     char(8) default ' ' not null,
  siiatmc     char(5) default ' ' not null,
  siiausc     char(4) default ' ' not null,
  siiaur1     char(15) default ' ' not null,
  siiaur2     char(15) default ' ' not null,
  siiaud1     char(8) default ' ' not null,
  siiaud2     char(8) default ' ' not null,
  siiauc1     char(3) default ' ' not null,
  siiauc2     char(3) default ' ' not null,
  siiauy1     char(1) default ' ' not null,
  siiauy2     char(1) default ' ' not null,
  siiaqin     char(10) default ' ' not null,
  siiadun     char(15) default ' ' not null,
  siiagst     char(6) default ' ' not null,
  siiaactv    char(1) default ' ' not null,
  siiaspa     char(19) default ' ' not null,
  lf          char(1)
);
create unique index sinciaa1 on sinciaaf
(
siiacat
);
create unique index sinciaa2 on sinciaaf
(
siiasub,
siiacat
);
create unique index sinciaa3 on sinciaaf
(
siiades,
siiacat
);
revoke all on sinciaaf from public ; 
grant select on sinciaaf to public ; 
