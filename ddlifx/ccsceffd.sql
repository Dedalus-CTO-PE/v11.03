create table ccscefaf
(
  cceflv1     char(10) default ' ' not null,
  ccefhcd     char(2) default ' ' not null,
  ccefdpt     char(8) default ' ' not null,
  ccefqty     decimal(14,2) default 0 not null,
  ccefftc     decimal(14,2) default 0 not null,
  ccefttc     decimal(14,2) default 0 not null,
  ccefspa     char(30) default ' ' not null,
  lf          char(1)
);
create unique index ccscefa1 on ccscefaf
(
cceflv1,
ccefhcd,
ccefdpt
);
create unique index ccscefa2 on ccscefaf
(
ccefhcd,
ccefdpt,
cceflv1
);
revoke all on ccscefaf from public ; 
grant select on ccscefaf to public ; 
