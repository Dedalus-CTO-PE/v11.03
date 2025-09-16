create table ibapostf
(
  ibpopcod    char(8) default ' ' not null,
  ibposubr    char(45) default ' ' not null,
  ibpostat    char(3) default ' ' not null,
  ibpoasgc    char(9) default ' ' not null,
  ibporrav    char(5) default ' ' not null,
  ibpospar    char(29) default ' ' not null,
  lf          char(1)
);
create unique index ibapost1 on ibapostf
(
ibpopcod,
ibposubr,
ibpostat
);
create unique index ibapost2 on ibapostf
(
ibposubr,
ibpopcod,
ibpostat
);
revoke all on ibapostf from public ; 
grant select on ibapostf to public ; 
