create table amsrvaaf
(
  amrvreg     char(2) default ' ' not null,
  amrvass     char(12) default ' ' not null,
  amrvrdt     char(8) default ' ' not null,
  amrvyear    char(4) default ' ' not null,
  amrvper     char(2) default ' ' not null,
  amrvrty     char(3) default ' ' not null,
  amrvref     char(15) default ' ' not null,
  amrvdes     char(30) default ' ' not null,
  amrvamt     decimal(14,2) default 0 not null,
  amrvaad     decimal(14,2) default 0 not null,
  amrvrvr     decimal(14,2) default 0 not null,
  amrvpvr     decimal(14,2) default 0 not null,
  amrvur1     char(30) default ' ' not null,
  amrvur2     char(30) default ' ' not null,
  amrvud1     char(8) default ' ' not null,
  amrvud2     char(8) default ' ' not null,
  amrvuy1     char(1) default ' ' not null,
  amrvuy2     char(1) default ' ' not null,
  amrvspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index amsrvaa1 on amsrvaaf
(
amrvreg,
amrvass,
amrvrdt
);
create unique index amsrvaa2 on amsrvaaf
(
amrvreg,
amrvass,
amrvyear,
amrvrdt
);
revoke all on amsrvaaf from public ; 
grant select on amsrvaaf to public ; 
