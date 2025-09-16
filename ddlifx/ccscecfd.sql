create table ccscecaf
(
  ccechcd     char(2) default ' ' not null,
  cceceps     char(16) default ' ' not null,
  cceclv1     char(10) default ' ' not null,
  cceclv2     char(10) default ' ' not null,
  cceclv3     char(10) default ' ' not null,
  ccecftc     decimal(14,2) default 0 not null,
  ccecttc     decimal(14,2) default 0 not null,
  cceclos     decimal(6,0) default 0 not null,
  ccecexc     char(1) default ' ' not null,
  ccecspa     char(30) default ' ' not null,
  lf          char(1)
);
create unique index ccsceca1 on ccscecaf
(
ccechcd,
cceceps
);
create unique index ccsceca2 on ccscecaf
(
cceclv1,
cceclv2,
cceclv3,
ccechcd,
cceceps
);
revoke all on ccscecaf from public ; 
grant select on ccscecaf to public ; 
