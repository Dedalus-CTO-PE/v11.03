create table amsstmaf
(
  amsmstk     char(5) default ' ' not null,
  amsmdat     char(8) default ' ' not null,
  amsmtim     char(5) default ' ' not null,
  amsmopr     char(4) default ' ' not null,
  amsmfbld    char(3) default ' ' not null,
  amsmtbld    char(3) default ' ' not null,
  amsmfloc    char(6) default ' ' not null,
  amsmtloc    char(6) default ' ' not null,
  amsmftyp    char(3) default ' ' not null,
  amsmttyp    char(3) default ' ' not null,
  amsmfdpt    char(3) default ' ' not null,
  amsmtdpt    char(3) default ' ' not null,
  amsmfsdt    char(8) default ' ' not null,
  amsmtsdt    char(8) default ' ' not null,
  amsmcom     char(30) default ' ' not null,
  amsmur1     char(30) default ' ' not null,
  amsmur2     char(30) default ' ' not null,
  amsmud1     char(8) default ' ' not null,
  amsmud2     char(8) default ' ' not null,
  amsmuy1     char(1) default ' ' not null,
  amsmuy2     char(1) default ' ' not null,
  amsmspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index amsstma1 on amsstmaf
(
amsmstk
);
revoke all on amsstmaf from public ; 
grant select on amsstmaf to public ; 
