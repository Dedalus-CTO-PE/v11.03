create table debicmaf
(
  dbicitm     char(8) default ' ' not null,
  dbiclin     char(3) default ' ' not null,
  dbiccom     char(50) default ' ' not null,
  dbicspa     char(50) default ' ' not null,
  lf          char(1)
);
create unique index debicma1 on debicmaf
(
dbicitm,
dbiclin
);
revoke all on debicmaf from public ; 
grant select on debicmaf to public ; 
