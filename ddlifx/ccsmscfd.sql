create table ccsmscaf
(
  ccmsyear    char(4) default ' ' not null,
  ccmscom     char(4) default ' ' not null,
  ccmshcd     char(2) default ' ' not null,
  ccmspcd     char(8) default ' ' not null,
  ccmsuct     decimal(16,4) default 0 not null,
  ccmsqty     decimal(14,2) default 0 not null,
  ccmscst     decimal(14,2) default 0 not null,
  ccmsfix     decimal(1,0) default 0 not null,
  ccmsfuc     decimal(16,4) default 0 not null,
  ccmsspa     char(30) default ' ' not null,
  lf          char(1)
);
create unique index ccsmsca1 on ccsmscaf
(
ccmsyear,
ccmscom,
ccmshcd,
ccmspcd
);
revoke all on ccsmscaf from public ; 
grant select on ccsmscaf to public ; 
