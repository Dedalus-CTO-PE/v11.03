create table hicitiaf
(
  hcitinvn    char(8) default ' ' not null,
  hcitclmn    char(8) default ' ' not null,
  hcitvisn    char(8) default ' ' not null,
  hcittran    char(2) default ' ' not null,
  hcitidat    char(8) default ' ' not null,
  hcitiinv    decimal(14,2) default 0 not null,
  hcitspar    char(40) default ' ' not null,
  lf          char(1)
);
create unique index hicitia1 on hicitiaf
(
hcitinvn,
hcitclmn,
hcitvisn,
hcittran
);
create unique index hicitia2 on hicitiaf
(
hcitclmn,
hcitinvn,
hcitvisn,
hcittran
);
create unique index hicitia3 on hicitiaf
(
hcitidat,
hcitclmn,
hcitvisn,
hcittran,
hcitinvn
);
revoke all on hicitiaf from public ; 
grant select on hicitiaf to public ; 
