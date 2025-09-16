create table fmszyyyy
(
  fmszbat     char(5) default ' ' not null,
  fmszuniq    char(3) default ' ' not null,
  fmszledg    char(2) default ' ' not null,
  fmszacct    char(12) default ' ' not null,
  fmszdate    char(8) default ' ' not null,
  fmszref     char(15) default ' ' not null,
  fmszunit    decimal(17,5) default 0 not null,
  fmszspar    char(25) default ' ' not null,
  lf          char(1)
);
create unique index fmsscza1 on fmszyyyy
(
fmszbat,
fmszuniq
);
create unique index fmsscza2 on fmszyyyy
(
fmszledg,
fmszacct,
fmszdate,
fmszbat,
fmszuniq
);
revoke all on fmszyyyy from public ; 
grant select on fmszyyyy to public ; 
