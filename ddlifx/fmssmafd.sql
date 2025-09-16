create table fmssyyyy
(
  fmssledg    char(2) default ' ' not null,
  fmssacct    char(12) default ' ' not null,
  fmssa1      decimal(17,5) default 0 not null,
  fmssa2      decimal(17,5) default 0 not null,
  fmssa3      decimal(17,5) default 0 not null,
  fmssa4      decimal(17,5) default 0 not null,
  fmssa5      decimal(17,5) default 0 not null,
  fmssa6      decimal(17,5) default 0 not null,
  fmssa7      decimal(17,5) default 0 not null,
  fmssa8      decimal(17,5) default 0 not null,
  fmssa9      decimal(17,5) default 0 not null,
  fmssa10     decimal(17,5) default 0 not null,
  fmssa11     decimal(17,5) default 0 not null,
  fmssa12     decimal(17,5) default 0 not null,
  fmssa13     decimal(17,5) default 0 not null,
  fmssc1      decimal(17,5) default 0 not null,
  fmssc2      decimal(17,5) default 0 not null,
  fmssc3      decimal(17,5) default 0 not null,
  fmssc4      decimal(17,5) default 0 not null,
  fmssc5      decimal(17,5) default 0 not null,
  fmssc6      decimal(17,5) default 0 not null,
  fmssc7      decimal(17,5) default 0 not null,
  fmssc8      decimal(17,5) default 0 not null,
  fmssc9      decimal(17,5) default 0 not null,
  fmssc10     decimal(17,5) default 0 not null,
  fmssc11     decimal(17,5) default 0 not null,
  fmssc12     decimal(17,5) default 0 not null,
  fmssc13     decimal(17,5) default 0 not null,
  fmssspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmssmaa1 on fmssyyyy
(
fmssledg,
fmssacct
);
revoke all on fmssyyyy from public ; 
grant select on fmssyyyy to public ; 
