create table fmsdyyyy
(
  fmdfledg    char(2) default ' ' not null,
  fmdfacct    char(12) default ' ' not null,
  fmdfdiss    char(5) default ' ' not null,
  fmdfresp    char(4) default ' ' not null,
  fmdfbf      decimal(14,2) default 0 not null,
  fmdf01      decimal(14,2) default 0 not null,
  fmdf02      decimal(14,2) default 0 not null,
  fmdf03      decimal(14,2) default 0 not null,
  fmdf04      decimal(14,2) default 0 not null,
  fmdf05      decimal(14,2) default 0 not null,
  fmdf06      decimal(14,2) default 0 not null,
  fmdf07      decimal(14,2) default 0 not null,
  fmdf08      decimal(14,2) default 0 not null,
  fmdf09      decimal(14,2) default 0 not null,
  fmdf10      decimal(14,2) default 0 not null,
  fmdf11      decimal(14,2) default 0 not null,
  fmdf12      decimal(14,2) default 0 not null,
  fmdf13      decimal(14,2) default 0 not null,
  fmdfspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsdsfa1 on fmsdyyyy
(
fmdfledg,
fmdfacct,
fmdfdiss,
fmdfresp
);
create unique index fmsdsfa2 on fmsdyyyy
(
fmdfledg,
fmdfacct,
fmdfresp,
fmdfdiss
);
revoke all on fmsdyyyy from public ; 
grant select on fmsdyyyy to public ; 
