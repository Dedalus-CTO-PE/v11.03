create table fmsaudcc
(
  fmccaudd    char(8) default ' ' not null,
  fmccaudt    char(8) default ' ' not null,
  fmccaudp    char(2) default ' ' not null,
  fmccaudr    char(1) default ' ' not null,
  fmccauds    decimal(1,0) default 0 not null,
  fmccaudo    char(4) default ' ' not null,
  fmccledg    char(2) default ' ' not null,
  fmcccoce    char(12) default ' ' not null,
  fmccdesc    char(35) default ' ' not null,
  fmccades    char(35) default ' ' not null,
  fmccppos    char(5) default ' ' not null,
  fmccsecc    char(3) default ' ' not null,
  fmcctele    char(15) default ' ' not null,
  fmcccont    char(35) default ' ' not null,
  fmcciday    char(7) default ' ' not null,
  fmccstat    char(2) default ' ' not null,
  fmccspar    char(38) default ' ' not null,
  lf          char(1)
);
create index fmsaudcc on fmsaudcc
(
fmccaudd,
fmccaudt,
fmccaudp,
fmccaudr
);
revoke all on fmsaudcc from public ; 
grant select on fmsaudcc to public ; 
create table fmsccaaf
(
  fmccledg    char(2) default ' ' not null,
  fmcccoce    char(12) default ' ' not null,
  fmccdesc    char(35) default ' ' not null,
  fmccades    char(35) default ' ' not null,
  fmccppos    char(5) default ' ' not null,
  fmccsecc    char(3) default ' ' not null,
  fmcctele    char(15) default ' ' not null,
  fmcccont    char(35) default ' ' not null,
  fmcciday    char(7) default ' ' not null,
  fmccstat    char(2) default ' ' not null,
  fmccspar    char(38) default ' ' not null,
  lf          char(1)
);
create unique index fmsccaa1 on fmsccaaf
(
fmccledg,
fmcccoce
);
create unique index fmsccaa2 on fmsccaaf
(
fmccledg,
fmccdesc,
fmcccoce
);
revoke all on fmsccaaf from public ; 
grant select on fmsccaaf to public ; 
