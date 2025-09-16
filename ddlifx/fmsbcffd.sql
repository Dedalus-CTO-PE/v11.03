create table fmsbcfaf
(
  fmbcbat     char(5) default ' ' not null,
  fmbcsta     char(1) default ' ' not null,
  fmbcsec     decimal(5,0) default 0 not null,
  fmbctot     decimal(14,2) default 0 not null,
  fmbcdis     decimal(14,2) default 0 not null,
  fmbcuid     char(4) default ' ' not null,
  fmbcdat     char(8) default ' ' not null,
  fmbcpdat    char(8) default ' ' not null,
  fmbcled     char(2) default ' ' not null,
  fmbctrt     char(2) default ' ' not null,
  fmbcinv     decimal(1,0) default 0 not null,
  fmbccdat    char(8) default ' ' not null,
  fmbcspar    char(12) default ' ' not null,
  lf          char(1)
);
create unique index fmsbcfa1 on fmsbcfaf
(
fmbcbat
);
create unique index fmsbcfa2 on fmsbcfaf
(
fmbcsta,
fmbcbat
);
create unique index fmsbcfa3 on fmsbcfaf
(
fmbcdat,
fmbcbat
);
revoke all on fmsbcfaf from public ; 
grant select on fmsbcfaf to public ; 
