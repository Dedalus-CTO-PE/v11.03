create table amstrnaf
(
  amtrreg     char(2) default ' ' not null,
  amtrass     char(12) default ' ' not null,
  amtruni     char(5) default ' ' not null,
  amtrirun    char(5) default ' ' not null,
  amtryear    char(4) default ' ' not null,
  amtrper     char(2) default ' ' not null,
  amtrdat     char(8) default ' ' not null,
  amtrref     char(15) default ' ' not null,
  amtrcom     char(30) default ' ' not null,
  amtramt     decimal(14,2) default 0 not null,
  amtrdled    char(2) default ' ' not null,
  amtrdacc    char(12) default ' ' not null,
  amtrcacc    char(12) default ' ' not null,
  amtrdis     char(5) default ' ' not null,
  amtrres     char(4) default ' ' not null,
  amtrur1     char(30) default ' ' not null,
  amtrur2     char(30) default ' ' not null,
  amtruy1     char(1) default ' ' not null,
  amtruy2     char(1) default ' ' not null,
  amtrspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index amstrna1 on amstrnaf
(
amtrreg,
amtrass,
amtruni
);
create unique index amstrna2 on amstrnaf
(
amtrirun,
amtrreg,
amtrass,
amtruni
);
create unique index amstrna3 on amstrnaf
(
amtryear,
amtrper,
amtrreg,
amtrass,
amtruni
);
revoke all on amstrnaf from public ; 
grant select on amstrnaf to public ; 
