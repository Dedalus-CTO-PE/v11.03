create table ccscegaf
(
  cceglv1     char(10) default ' ' not null,
  cceghcd     char(2) default ' ' not null,
  ccegdpt     char(8) default ' ' not null,
  ccegpcd     char(8) default ' ' not null,
  ccegqty     decimal(14,2) default 0 not null,
  ccegftc     decimal(14,2) default 0 not null,
  ccegttc     decimal(14,2) default 0 not null,
  ccegspa     char(30) default ' ' not null,
  lf          char(1)
);
create unique index ccscega1 on ccscegaf
(
cceglv1,
cceghcd,
ccegdpt,
ccegpcd
);
create unique index ccscega2 on ccscegaf
(
cceghcd,
ccegdpt,
ccegpcd,
cceglv1
);
revoke all on ccscegaf from public ; 
grant select on ccscegaf to public ; 
