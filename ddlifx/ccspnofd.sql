create table ccspnoaf
(
  ccpnhcd     char(2) default ' ' not null,
  ccpndpt     char(8) default ' ' not null,
  ccpnpcd     char(8) default ' ' not null,
  ccpnlin     char(3) default ' ' not null,
  ccpndat     char(70) default ' ' not null,
  ccpnspa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index ccspnoa1 on ccspnoaf
(
ccpnhcd,
ccpndpt,
ccpnpcd,
ccpnlin
);
revoke all on ccspnoaf from public ; 
grant select on ccspnoaf to public ; 
