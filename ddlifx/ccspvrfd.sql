create table ccspvraf
(
  ccpvhcd     char(2) default ' ' not null,
  ccpvdpt     char(8) default ' ' not null,
  ccpvpcd     char(8) default ' ' not null,
  ccpvcty     char(4) default ' ' not null,
  ccpvrvi     decimal(18,6) default 0 not null,
  ccpvspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ccspvra1 on ccspvraf
(
ccpvhcd,
ccpvdpt,
ccpvpcd,
ccpvcty
);
create unique index ccspvra2 on ccspvraf
(
ccpvcty,
ccpvhcd,
ccpvdpt,
ccpvpcd
);
revoke all on ccspvraf from public ; 
grant select on ccspvraf to public ; 
