create table ccspkyaf
(
  ccpkfky     char(20) default ' ' not null,
  ccpkhcd     char(2) default ' ' not null,
  ccpkdpt     char(8) default ' ' not null,
  ccpkpcd     char(8) default ' ' not null,
  ccpkspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ccspkya1 on ccspkyaf
(
ccpkfky,
ccpkhcd,
ccpkdpt,
ccpkpcd
);
create unique index ccspkya2 on ccspkyaf
(
ccpkhcd,
ccpkdpt,
ccpkpcd,
ccpkfky
);
revoke all on ccspkyaf from public ; 
grant select on ccspkyaf to public ; 
