create table fmschqaf
(
  fmchchq     char(15) default ' ' not null,
  fmchdes     char(40) default ' ' not null,
  fmchbal     decimal(14,2) default 0 not null,
  fmchbdt     char(8) default ' ' not null,
  fmchfmt     decimal(2,0) default 0 not null,
  fmchbsb     char(6) default ' ' not null,
  fmchacct    char(9) default ' ' not null,
  fmchnzac    char(16) default ' ' not null,
  fmchdesc    char(35) default ' ' not null,
  fmchadd1    char(25) default ' ' not null,
  fmchadd2    char(25) default ' ' not null,
  fmchadd3    char(20) default ' ' not null,
  fmchadd4    char(4) default ' ' not null,
  fmchfrmt    char(1) default ' ' not null,
  fmchbnam    char(3) default ' ' not null,
  fmchuser    char(6) default ' ' not null,
  fmchedsc    char(12) default ' ' not null,
  fmchdfrm    decimal(1,0) default 0 not null,
  fmchur1     char(25) default ' ' not null,
  fmchur2     char(25) default ' ' not null,
  fmchud1     char(8) default ' ' not null,
  fmchud2     char(8) default ' ' not null,
  fmchuy1     char(1) default ' ' not null,
  fmchuy2     char(1) default ' ' not null,
  fmchspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmschqa1 on fmschqaf
(
fmchchq
);
revoke all on fmschqaf from public ; 
grant select on fmschqaf to public ; 
