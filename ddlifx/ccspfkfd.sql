create table ccspfkaf
(
  ccpffky     char(20) default ' ' not null,
  ccpfdes     char(35) default ' ' not null,
  ccpfsus     char(1) default ' ' not null,
  ccpfspa     char(29) default ' ' not null,
  lf          char(1)
);
create unique index ccspfka1 on ccspfkaf
(
ccpffky
);
revoke all on ccspfkaf from public ; 
grant select on ccspfkaf to public ; 
