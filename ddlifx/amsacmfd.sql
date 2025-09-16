create table amsacmaf
(
  amacreg     char(2) default ' ' not null,
  amacass     char(12) default ' ' not null,
  amaclin     char(3) default ' ' not null,
  amaccom     char(78) default ' ' not null,
  amacspa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index amsacma1 on amsacmaf
(
amacreg,
amacass,
amaclin
);
revoke all on amsacmaf from public ; 
grant select on amsacmaf to public ; 
