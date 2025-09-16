create table aaeaudbc
(
  aebcaudd    char(8) default ' ' not null,
  aebcaudt    char(8) default ' ' not null,
  aebcaudp    char(2) default ' ' not null,
  aebcaudr    char(1) default ' ' not null,
  aebcauds    decimal(1,0) default 0 not null,
  aebcaudo    char(4) default ' ' not null,
  aebcclm     char(3) default ' ' not null,
  aebcbrd     char(6) default ' ' not null,
  daebcage    char(3) default ' ' not null,
  daebcnvi    char(3) default ' ' not null,
  aebcdesc    char(30) default ' ' not null,
  aebcptpo    decimal(14,2) default 0 not null,
  aebcbdpo    decimal(14,2) default 0 not null,
  aebcninv    decimal(1,0) default 0 not null,
  aebcitem    char(3) default ' ' not null,
  aebcspar    char(20) default ' ' not null,
  lf          char(1)
);
create index aaeaudbc on aaeaudbc
(
aebcaudd,
aebcaudt,
aebcaudp,
aebcaudr
);
revoke all on aaeaudbc from public ; 
grant select on aaeaudbc to public ; 
create table aaebchaf
(
  aebcclm     char(3) default ' ' not null,
  aebcbrd     char(6) default ' ' not null,
  daebcage    char(3) default ' ' not null,
  daebcnvi    char(3) default ' ' not null,
  aebcdesc    char(30) default ' ' not null,
  aebcptpo    decimal(14,2) default 0 not null,
  aebcbdpo    decimal(14,2) default 0 not null,
  aebcninv    decimal(1,0) default 0 not null,
  aebcitem    char(3) default ' ' not null,
  aebcspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index aaebcha1 on aaebchaf
(
aebcclm,
aebcbrd,
daebcage,
daebcnvi
);
revoke all on aaebchaf from public ; 
grant select on aaebchaf to public ; 
